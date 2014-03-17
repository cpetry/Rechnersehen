/**
 * @Copyright   2013
 * @Author  Matthias Karl, Hufnagel Stefan, Petry Christian
 * @FHWS
 */

#include "main_gui.h"
#include <QtGui/QWindow>
#include <QtWidgets/QFileDialog>

#include <QtGui\QImageReader>
#include <QtCore\QDebug>

#include "moravec.h"

main_GUI::main_GUI(){
	// Loads the ui_GUI.ui file and set it to the UI
	ui.setupUi(this);

	this->ui.cmb_punktdet->addItem("Moravec");
	//this->ui.cmb_punktdet->addItem("Harris Corner");
	//this->ui.cmb_punktdet->addItem("Tomasi & Kanade");
	

	// Sets the window title
	this->setWindowTitle("Rechnersehen");

	//At first disable Load and Encode button
	this->ui.btn_load->setDisabled(true);
	this->ui.btn_start->setDisabled(true);

	
	connect(ui.btn_choose, &QPushButton::clicked, this, &main_GUI::slot_chooseFile);
	connect(ui.lineEdit_filename, &QLineEdit::editingFinished, this, &main_GUI::slot_editingFilenameFinished);
	connect(ui.btn_load, &QPushButton::clicked, this, &main_GUI::slot_load);
	connect(ui.btn_start, &QPushButton::clicked, this, &main_GUI::slot_start);
	
	QDir solution = QDir::current();
	solution.cdUp();
    solution.cdUp();
	this->ui.lineEdit_filename->setText(QString(solution.absolutePath() + "/_resources/Cube.jpg"));
	slot_editingFilenameFinished();
}

void main_GUI::slot_chooseFile(){
	QDir res = QDir::current().absolutePath() + "/_resources";
	if (!res.exists()){
		res = QDir::current();
		res.cdUp();
		res.cdUp();
		res = res.absolutePath() + "/_resources";
	}
	QString path = res.absolutePath();

	QString file = QFileDialog::getOpenFileName(this,
		tr("Open Image"), 
		path,
		tr("Image Files"),
		(QString*)0, QFileDialog::ReadOnly);

	if (!file.isEmpty()){
		ui.lineEdit_filename->setText(file);
		slot_editingFilenameFinished();
	}
}

void main_GUI::slot_editingFilenameFinished(){
	this->filename = ui.lineEdit_filename->text();
	// check if file even exists
	if (QFile::exists(this->filename)){
		// clear Message on StatusBar
		this->ui.btn_load->setEnabled(true);
		ui.statusBar->showMessage("");
	}
	else if(!this->filename.isEmpty())
	{
		this->ui.btn_load->setDisabled(true);
		ui.statusBar->showMessage("File not found!");
	}
}

void main_GUI::slot_load(){
	this->ui.btn_start->setEnabled(true);
	QPixmap pic(ui.lineEdit_filename->text());

	// make image gray!
	/*for (int y = 0; y < picimg.height(); y++)
	for (int x = 0; x < picimg.width(); x++){
	int gray = qGray(picimg.pixel(x, y));
	picimg.setPixel(x, y, qRgb(gray, gray, gray));
	}*/
	left_pixmap = pic.scaled(256, 256);
	ui.lbl_leftPic->setPixmap(left_pixmap);
}

void main_GUI::slot_start(){
	ui.statusBar->showMessage("Running...");
	
	QImage img = moravec::getInterestPoints(left_pixmap.toImage(), ui.spinBox_threshold->value(), ui.spinBox_windowsize->value());

	ui.lbl_rightPic->setPixmap(QPixmap::fromImage(img).scaled(256, 256));
	//img.pixel();
	//ui.lbl_rightPic
	ui.statusBar->showMessage("Done...");
}
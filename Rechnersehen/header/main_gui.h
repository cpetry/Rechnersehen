/**
 * @Copyright   2013
 * @Author  Matthias Karl, Hufnagel Stefan, Petry Christian
 * @FHWS
 */

#pragma once

#include <chrono>

#include <QtWidgets/QMainWindow>

#include "../ui_main_GUI.h"

class picture;


/**
 * @brief	main entry for application.
 *			Creates a QMainWindow, connects its widgets signals with this classes slots.
 *			This GUI has mainly two pictures. 
 *			The left one is the picture that gets read.
 *			The right one is the encoded one.
 */
class main_GUI : public QMainWindow{
    //Q_OBJECT

public:
	/**
	 * @brief	Sets standard values. 
	 *			Connects its widgets signals with this classes slots.
	 */
    main_GUI();

private:
	/** ui file for the gui*/
    Ui::main_GUI ui;
	QString filename;
	/** QPixmap that get shown as labels */
	QPixmap left_pixmap;

private slots:

	/**
	 * @brief	Slot for button "choose File".
	 *			A QFileDialog pops up, that lets the user choose a "*.ppm" file
	 */
	void slot_chooseFile();

	/**
	 * @brief	Slot for when the QLineEdit "Filename" has signaled that it has been changed.
	 *			Checks if the filename specified really exists 
	 *			and sets the usability of the encode button and other functionalities.
	 */
	void slot_editingFilenameFinished();

	/**
	* @brief	Slot for button "Load".
	*/
	void slot_load();

	/**
	 * @brief	Slot for button "Start".
	 */
	void slot_start();

	void slot_qtableComboboxChanged(const QString &text);
};
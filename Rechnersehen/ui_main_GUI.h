/********************************************************************************
** Form generated from reading UI file 'main_GUI.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_GUI_H
#define UI_MAIN_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_GUI
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbl_file;
    QLineEdit *lineEdit_filename;
    QPushButton *btn_choose;
    QPushButton *btn_load;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *cmb_punktdet;
    QLabel *label_2;
    QSpinBox *spinBox_threshold;
    QLabel *label_3;
    QSpinBox *spinBox_windowsize;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_start;
    QWidget *Pictures;
    QHBoxLayout *horizontalLayout_2;
    QWidget *LeftSIde;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbl_leftPic;
    QWidget *RightSide;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lbl_rightPic;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *main_GUI)
    {
        if (main_GUI->objectName().isEmpty())
            main_GUI->setObjectName(QStringLiteral("main_GUI"));
        main_GUI->resize(592, 502);
        centralWidget = new QWidget(main_GUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(200, 50));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lbl_file = new QLabel(groupBox);
        lbl_file->setObjectName(QStringLiteral("lbl_file"));

        horizontalLayout_7->addWidget(lbl_file);

        lineEdit_filename = new QLineEdit(groupBox);
        lineEdit_filename->setObjectName(QStringLiteral("lineEdit_filename"));

        horizontalLayout_7->addWidget(lineEdit_filename);

        btn_choose = new QPushButton(groupBox);
        btn_choose->setObjectName(QStringLiteral("btn_choose"));

        horizontalLayout_7->addWidget(btn_choose);

        btn_load = new QPushButton(groupBox);
        btn_load->setObjectName(QStringLiteral("btn_load"));

        horizontalLayout_7->addWidget(btn_load);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        cmb_punktdet = new QComboBox(groupBox);
        cmb_punktdet->setObjectName(QStringLiteral("cmb_punktdet"));

        horizontalLayout_3->addWidget(cmb_punktdet);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        spinBox_threshold = new QSpinBox(groupBox);
        spinBox_threshold->setObjectName(QStringLiteral("spinBox_threshold"));
        spinBox_threshold->setValue(20);

        horizontalLayout_3->addWidget(spinBox_threshold);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        spinBox_windowsize = new QSpinBox(groupBox);
        spinBox_windowsize->setObjectName(QStringLiteral("spinBox_windowsize"));
        spinBox_windowsize->setMinimum(1);
        spinBox_windowsize->setMaximum(10);
        spinBox_windowsize->setValue(2);

        horizontalLayout_3->addWidget(spinBox_windowsize);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        btn_start = new QPushButton(groupBox);
        btn_start->setObjectName(QStringLiteral("btn_start"));

        horizontalLayout_4->addWidget(btn_start);


        verticalLayout_5->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout_5);


        horizontalLayout_5->addWidget(groupBox);


        verticalLayout->addLayout(horizontalLayout_5);

        Pictures = new QWidget(centralWidget);
        Pictures->setObjectName(QStringLiteral("Pictures"));
        horizontalLayout_2 = new QHBoxLayout(Pictures);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        LeftSIde = new QWidget(Pictures);
        LeftSIde->setObjectName(QStringLiteral("LeftSIde"));
        LeftSIde->setMinimumSize(QSize(283, 256));
        horizontalLayout_6 = new QHBoxLayout(LeftSIde);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lbl_leftPic = new QLabel(LeftSIde);
        lbl_leftPic->setObjectName(QStringLiteral("lbl_leftPic"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbl_leftPic->sizePolicy().hasHeightForWidth());
        lbl_leftPic->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(lbl_leftPic);


        horizontalLayout_2->addWidget(LeftSIde);

        RightSide = new QWidget(Pictures);
        RightSide->setObjectName(QStringLiteral("RightSide"));
        RightSide->setMinimumSize(QSize(283, 256));
        horizontalLayout_8 = new QHBoxLayout(RightSide);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        lbl_rightPic = new QLabel(RightSide);
        lbl_rightPic->setObjectName(QStringLiteral("lbl_rightPic"));
        sizePolicy1.setHeightForWidth(lbl_rightPic->sizePolicy().hasHeightForWidth());
        lbl_rightPic->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(lbl_rightPic);


        horizontalLayout_2->addWidget(RightSide);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addWidget(Pictures);

        main_GUI->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(main_GUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        main_GUI->setStatusBar(statusBar);

        retranslateUi(main_GUI);

        QMetaObject::connectSlotsByName(main_GUI);
    } // setupUi

    void retranslateUi(QMainWindow *main_GUI)
    {
        main_GUI->setWindowTitle(QApplication::translate("main_GUI", "Qt5Test2", 0));
        groupBox->setTitle(QApplication::translate("main_GUI", "File", 0));
        lbl_file->setText(QApplication::translate("main_GUI", "File:", 0));
        btn_choose->setText(QApplication::translate("main_GUI", "Choose", 0));
        btn_load->setText(QApplication::translate("main_GUI", "Load", 0));
        label->setText(QApplication::translate("main_GUI", "Punktdetektion", 0));
        label_2->setText(QApplication::translate("main_GUI", "Threshold", 0));
        label_3->setText(QApplication::translate("main_GUI", "Window size", 0));
        btn_start->setText(QApplication::translate("main_GUI", "Start", 0));
        lbl_leftPic->setText(QString());
        lbl_rightPic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class main_GUI: public Ui_main_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_GUI_H

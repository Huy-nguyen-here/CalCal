/********************************************************************************
** Form generated from reading UI file 'inputdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTDIALOG_H
#define UI_INPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputDialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *agespinBox;
    QLineEdit *nameLineEdit;
    QSpinBox *heightspinBox;
    QSpinBox *weightspinBox;
    QLabel *label_3;
    QLabel *label_2;
    QComboBox *gendercomboBox;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_5;
    QPushButton *saveButton;
    QLabel *dbstatus;

    void setupUi(QDialog *InputDialog)
    {
        if (InputDialog->objectName().isEmpty())
            InputDialog->setObjectName("InputDialog");
        InputDialog->resize(400, 300);
        InputDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        gridLayoutWidget = new QWidget(InputDialog);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(60, 30, 281, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        agespinBox = new QSpinBox(gridLayoutWidget);
        agespinBox->setObjectName("agespinBox");
        agespinBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(agespinBox, 2, 2, 1, 1);

        nameLineEdit = new QLineEdit(gridLayoutWidget);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(nameLineEdit, 1, 2, 1, 1);

        heightspinBox = new QSpinBox(gridLayoutWidget);
        heightspinBox->setObjectName("heightspinBox");
        heightspinBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(heightspinBox, 3, 2, 1, 1);

        weightspinBox = new QSpinBox(gridLayoutWidget);
        weightspinBox->setObjectName("weightspinBox");
        weightspinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);color: rgb(0, 0, 0);"));

        gridLayout->addWidget(weightspinBox, 4, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        gendercomboBox = new QComboBox(gridLayoutWidget);
        gendercomboBox->addItem(QString());
        gendercomboBox->addItem(QString());
        gendercomboBox->setObjectName("gendercomboBox");
        gendercomboBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(gendercomboBox, 6, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label, 0, 0, 1, 3);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        saveButton = new QPushButton(gridLayoutWidget);
        saveButton->setObjectName("saveButton");
        saveButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(saveButton, 7, 2, 1, 1);

        dbstatus = new QLabel(gridLayoutWidget);
        dbstatus->setObjectName("dbstatus");
        dbstatus->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(dbstatus, 7, 0, 1, 1);


        retranslateUi(InputDialog);

        QMetaObject::connectSlotsByName(InputDialog);
    } // setupUi

    void retranslateUi(QDialog *InputDialog)
    {
        InputDialog->setWindowTitle(QCoreApplication::translate("InputDialog", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("InputDialog", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; font-style:italic;\">B\341\272\241n bao nhi\303\252u tu\341\273\225i?</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("InputDialog", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; font-style:italic;\">T\303\252n b\341\272\241n l\303\240 g\303\254?</span></p></body></html>", nullptr));
        gendercomboBox->setItemText(0, QCoreApplication::translate("InputDialog", "Nam", nullptr));
        gendercomboBox->setItemText(1, QCoreApplication::translate("InputDialog", "N\341\273\257", nullptr));

        label_6->setText(QCoreApplication::translate("InputDialog", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; font-style:italic;\">Gi\341\273\233i t\303\255nh</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("InputDialog", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; font-style:italic;\">Chi\341\273\201u cao (cm)</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("InputDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">NH\341\272\254P TH\303\224NG TIN C\341\273\246A B\341\272\240N</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("InputDialog", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; font-style:italic;\">C\303\242n n\341\272\267ng (kg)</span></p></body></html>", nullptr));
        saveButton->setText(QCoreApplication::translate("InputDialog", "L\306\260u", nullptr));
        dbstatus->setText(QCoreApplication::translate("InputDialog", "dd", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputDialog: public Ui_InputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'foodtab.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOODTAB_H
#define UI_FOODTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FoodTab
{
public:
    QFrame *frame;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *calolabel;
    QTableWidget *tableWidget;
    QPushButton *detailButton;

    void setupUi(QDialog *FoodTab)
    {
        if (FoodTab->objectName().isEmpty())
            FoodTab->setObjectName("FoodTab");
        FoodTab->resize(822, 754);
        frame = new QFrame(FoodTab);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 541, 321));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(frame);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 551, 321));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        calolabel = new QLabel(gridLayoutWidget);
        calolabel->setObjectName("calolabel");

        gridLayout->addWidget(calolabel, 1, 0, 1, 1);

        tableWidget = new QTableWidget(gridLayoutWidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QFont font;
        font.setBold(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setTabletTracking(false);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 2);

        detailButton = new QPushButton(gridLayoutWidget);
        detailButton->setObjectName("detailButton");

        gridLayout->addWidget(detailButton, 1, 1, 1, 1);


        retranslateUi(FoodTab);

        QMetaObject::connectSlotsByName(FoodTab);
    } // setupUi

    void retranslateUi(QDialog *FoodTab)
    {
        FoodTab->setWindowTitle(QCoreApplication::translate("FoodTab", "Dialog", nullptr));
        calolabel->setText(QCoreApplication::translate("FoodTab", "CALO \304\220\303\203 N\341\272\240P", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("FoodTab", "M\303\243 th\341\273\261c ph\341\272\251m", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("FoodTab", "T\303\252n th\341\273\261c ph\341\272\251m", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("FoodTab", "\304\220\306\241n v\341\273\213 t\303\255nh", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("FoodTab", "Calories/100 \304\221v", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("FoodTab", "Add", nullptr));
        detailButton->setText(QCoreApplication::translate("FoodTab", "Chi ti\341\272\277t", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FoodTab: public Ui_FoodTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODTAB_H

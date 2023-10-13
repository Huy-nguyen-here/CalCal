/********************************************************************************
** Form generated from reading UI file 'btaptab.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BTAPTAB_H
#define UI_BTAPTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_btapTab
{
public:
    QFrame *frame;
    QPushButton *detailButton;
    QLabel *calolabel;
    QTableWidget *tableWidget;

    void setupUi(QDialog *btapTab)
    {
        if (btapTab->objectName().isEmpty())
            btapTab->setObjectName("btapTab");
        btapTab->resize(697, 482);
        frame = new QFrame(btapTab);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(50, 10, 561, 331));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        detailButton = new QPushButton(frame);
        detailButton->setObjectName("detailButton");
        detailButton->setGeometry(QRect(290, 260, 111, 31));
        calolabel = new QLabel(frame);
        calolabel->setObjectName("calolabel");
        calolabel->setGeometry(QRect(0, 260, 291, 21));
        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
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
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 0, 401, 261));
        tableWidget->setTabletTracking(false);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->verticalHeader()->setVisible(false);

        retranslateUi(btapTab);

        QMetaObject::connectSlotsByName(btapTab);
    } // setupUi

    void retranslateUi(QDialog *btapTab)
    {
        btapTab->setWindowTitle(QCoreApplication::translate("btapTab", "Dialog", nullptr));
        detailButton->setText(QCoreApplication::translate("btapTab", "Chi ti\341\272\277t", nullptr));
        calolabel->setText(QCoreApplication::translate("btapTab", "CALO TI\303\212U TH\341\273\244:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("btapTab", "M\303\243 b\303\240i t\341\272\255p", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("btapTab", "B\303\240i t\341\272\255p", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("btapTab", "Calories/60p", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("btapTab", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class btapTab: public Ui_btapTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BTAPTAB_H

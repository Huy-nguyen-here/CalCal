/********************************************************************************
** Form generated from reading UI file 'personalinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONALINFO_H
#define UI_PERSONALINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PersonalInfo
{
public:
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QVBoxLayout *verticalLayout_7;
    QLabel *nameLabel;
    QLabel *ageLabel;
    QLabel *genderLabel;
    QLabel *heightLabel;
    QLabel *weightLabel;
    QLabel *bmiLabel;
    QLabel *bodyLabel;
    QLabel *label_23;
    QLabel *recommendationLabel;
    QPushButton *editButton;
    QLabel *dbstatus;

    void setupUi(QDialog *PersonalInfo)
    {
        if (PersonalInfo->objectName().isEmpty())
            PersonalInfo->setObjectName("PersonalInfo");
        PersonalInfo->resize(684, 603);
        PersonalInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 196, 254);\n"
"color: rgb(0, 0, 0);"));
        frame = new QFrame(PersonalInfo);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(70, 50, 441, 351));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 441, 271));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::SpanningRole, label);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName("label_8");

        verticalLayout_6->addWidget(label_8);

        label_17 = new QLabel(verticalLayoutWidget);
        label_17->setObjectName("label_17");

        verticalLayout_6->addWidget(label_17);

        label_18 = new QLabel(verticalLayoutWidget);
        label_18->setObjectName("label_18");

        verticalLayout_6->addWidget(label_18);

        label_19 = new QLabel(verticalLayoutWidget);
        label_19->setObjectName("label_19");

        verticalLayout_6->addWidget(label_19, 0, Qt::AlignLeft);

        label_20 = new QLabel(verticalLayoutWidget);
        label_20->setObjectName("label_20");

        verticalLayout_6->addWidget(label_20);

        label_21 = new QLabel(verticalLayoutWidget);
        label_21->setObjectName("label_21");

        verticalLayout_6->addWidget(label_21);

        label_22 = new QLabel(verticalLayoutWidget);
        label_22->setObjectName("label_22");

        verticalLayout_6->addWidget(label_22);


        formLayout->setLayout(1, QFormLayout::LabelRole, verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        nameLabel = new QLabel(verticalLayoutWidget);
        nameLabel->setObjectName("nameLabel");

        verticalLayout_7->addWidget(nameLabel);

        ageLabel = new QLabel(verticalLayoutWidget);
        ageLabel->setObjectName("ageLabel");

        verticalLayout_7->addWidget(ageLabel);

        genderLabel = new QLabel(verticalLayoutWidget);
        genderLabel->setObjectName("genderLabel");

        verticalLayout_7->addWidget(genderLabel);

        heightLabel = new QLabel(verticalLayoutWidget);
        heightLabel->setObjectName("heightLabel");

        verticalLayout_7->addWidget(heightLabel);

        weightLabel = new QLabel(verticalLayoutWidget);
        weightLabel->setObjectName("weightLabel");

        verticalLayout_7->addWidget(weightLabel);

        bmiLabel = new QLabel(verticalLayoutWidget);
        bmiLabel->setObjectName("bmiLabel");

        verticalLayout_7->addWidget(bmiLabel);

        bodyLabel = new QLabel(verticalLayoutWidget);
        bodyLabel->setObjectName("bodyLabel");

        verticalLayout_7->addWidget(bodyLabel);


        formLayout->setLayout(1, QFormLayout::FieldRole, verticalLayout_7);

        label_23 = new QLabel(verticalLayoutWidget);
        label_23->setObjectName("label_23");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_23);

        recommendationLabel = new QLabel(verticalLayoutWidget);
        recommendationLabel->setObjectName("recommendationLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(recommendationLabel->sizePolicy().hasHeightForWidth());
        recommendationLabel->setSizePolicy(sizePolicy1);
        recommendationLabel->setWordWrap(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, recommendationLabel);


        verticalLayout->addLayout(formLayout);

        editButton = new QPushButton(frame);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(140, 270, 151, 24));
        dbstatus = new QLabel(frame);
        dbstatus->setObjectName("dbstatus");
        dbstatus->setGeometry(QRect(8, 310, 431, 31));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dbstatus->sizePolicy().hasHeightForWidth());
        dbstatus->setSizePolicy(sizePolicy2);

        retranslateUi(PersonalInfo);

        QMetaObject::connectSlotsByName(PersonalInfo);
    } // setupUi

    void retranslateUi(QDialog *PersonalInfo)
    {
        PersonalInfo->setWindowTitle(QCoreApplication::translate("PersonalInfo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("PersonalInfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">TH\303\224NG TIN C\303\201 NH\303\202N</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("PersonalInfo", "T\303\252n c\341\273\247a b\341\272\241n:", nullptr));
        label_17->setText(QCoreApplication::translate("PersonalInfo", "Tu\341\273\225i c\341\273\247a b\341\272\241n:", nullptr));
        label_18->setText(QCoreApplication::translate("PersonalInfo", "Gi\341\273\233i t\303\255nh:", nullptr));
        label_19->setText(QCoreApplication::translate("PersonalInfo", "Chi\341\273\201u cao (cm):", nullptr));
        label_20->setText(QCoreApplication::translate("PersonalInfo", "C\303\242n n\341\272\267ng (kg):", nullptr));
        label_21->setText(QCoreApplication::translate("PersonalInfo", "BMI:", nullptr));
        label_22->setText(QCoreApplication::translate("PersonalInfo", "Th\341\273\203 tr\341\272\241ng hi\341\273\207n t\341\272\241i:", nullptr));
        nameLabel->setText(QCoreApplication::translate("PersonalInfo", "TextLabel", nullptr));
        ageLabel->setText(QCoreApplication::translate("PersonalInfo", "TextLabel", nullptr));
        genderLabel->setText(QCoreApplication::translate("PersonalInfo", "TextLabel", nullptr));
        heightLabel->setText(QCoreApplication::translate("PersonalInfo", "TextLabel", nullptr));
        weightLabel->setText(QCoreApplication::translate("PersonalInfo", "TextLabel", nullptr));
        bmiLabel->setText(QCoreApplication::translate("PersonalInfo", "TextLabel", nullptr));
        bodyLabel->setText(QCoreApplication::translate("PersonalInfo", "TextLabel", nullptr));
        label_23->setText(QCoreApplication::translate("PersonalInfo", "Khuy\341\272\277n c\303\241o:", nullptr));
        recommendationLabel->setText(QCoreApplication::translate("PersonalInfo", "TextLabel", nullptr));
        editButton->setText(QCoreApplication::translate("PersonalInfo", "Ch\341\273\211nh s\341\273\255a", nullptr));
        dbstatus->setText(QCoreApplication::translate("PersonalInfo", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersonalInfo: public Ui_PersonalInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONALINFO_H

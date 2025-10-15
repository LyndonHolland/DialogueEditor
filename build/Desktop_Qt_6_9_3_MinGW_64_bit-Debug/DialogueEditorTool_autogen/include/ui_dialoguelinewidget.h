/********************************************************************************
** Form generated from reading UI file 'dialoguelinewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGUELINEWIDGET_H
#define UI_DIALOGUELINEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogueLineWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *DialogueLineWidget)
    {
        if (DialogueLineWidget->objectName().isEmpty())
            DialogueLineWidget->setObjectName("DialogueLineWidget");
        DialogueLineWidget->setEnabled(true);
        DialogueLineWidget->resize(852, 34);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogueLineWidget->sizePolicy().hasHeightForWidth());
        DialogueLineWidget->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(DialogueLineWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        label_2 = new QLabel(DialogueLineWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        comboBox = new QComboBox(DialogueLineWidget);
        comboBox->setObjectName("comboBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setMinimumSize(QSize(100, 0));
        comboBox->setMaximumSize(QSize(16777215, 20));

        horizontalLayout->addWidget(comboBox);

        label = new QLabel(DialogueLineWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(DialogueLineWidget);
        lineEdit->setObjectName("lineEdit");
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(700, 0));
        lineEdit->setMaximumSize(QSize(16777215, 20));

        horizontalLayout->addWidget(lineEdit);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(DialogueLineWidget);

        QMetaObject::connectSlotsByName(DialogueLineWidget);
    } // setupUi

    void retranslateUi(QWidget *DialogueLineWidget)
    {
        DialogueLineWidget->setWindowTitle(QCoreApplication::translate("DialogueLineWidget", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("DialogueLineWidget", "Speaker:", nullptr));
        label->setText(QCoreApplication::translate("DialogueLineWidget", "Line:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogueLineWidget: public Ui_DialogueLineWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGUELINEWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'textfinder.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTFINDER_H
#define UI_TEXTFINDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextFInder
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *findButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *TextFInder)
    {
        if (TextFInder->objectName().isEmpty())
            TextFInder->setObjectName(QString::fromUtf8("TextFInder"));
        TextFInder->resize(800, 600);
        widget = new QWidget(TextFInder);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 50, 300, 227));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        findButton = new QPushButton(widget);
        findButton->setObjectName(QString::fromUtf8("findButton"));

        horizontalLayout->addWidget(findButton);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setLayoutDirection(Qt::LeftToRight);
        textEdit->setAutoFillBackground(false);
        textEdit->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(textEdit);

        QWidget::setTabOrder(findButton, lineEdit);
        QWidget::setTabOrder(lineEdit, textEdit);

        retranslateUi(TextFInder);

        QMetaObject::connectSlotsByName(TextFInder);
    } // setupUi

    void retranslateUi(QWidget *TextFInder)
    {
        TextFInder->setWindowTitle(QCoreApplication::translate("TextFInder", "TextFInder", nullptr));
        label->setText(QCoreApplication::translate("TextFInder", "TextLabel", nullptr));
        findButton->setText(QCoreApplication::translate("TextFInder", "Find", nullptr));
#if QT_CONFIG(whatsthis)
        textEdit->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
    } // retranslateUi

};

namespace Ui {
    class TextFInder: public Ui_TextFInder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTFINDER_H

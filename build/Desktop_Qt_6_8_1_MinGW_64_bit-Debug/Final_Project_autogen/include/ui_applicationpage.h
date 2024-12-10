/********************************************************************************
** Form generated from reading UI file 'applicationpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATIONPAGE_H
#define UI_APPLICATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ApplicationPage
{
public:
    QLabel *label;

    void setupUi(QDialog *ApplicationPage)
    {
        if (ApplicationPage->objectName().isEmpty())
            ApplicationPage->setObjectName("ApplicationPage");
        ApplicationPage->resize(400, 300);
        label = new QLabel(ApplicationPage);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 40, 101, 16));

        retranslateUi(ApplicationPage);

        QMetaObject::connectSlotsByName(ApplicationPage);
    } // setupUi

    void retranslateUi(QDialog *ApplicationPage)
    {
        ApplicationPage->setWindowTitle(QCoreApplication::translate("ApplicationPage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ApplicationPage", "Landing Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ApplicationPage: public Ui_ApplicationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATIONPAGE_H

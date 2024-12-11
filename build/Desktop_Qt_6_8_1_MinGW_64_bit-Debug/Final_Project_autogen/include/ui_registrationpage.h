/********************************************************************************
** Form generated from reading UI file 'registrationpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONPAGE_H
#define UI_REGISTRATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegistrationPage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_username_register;
    QLineEdit *lineEdit_password_register;
    QLineEdit *lineEdit_password_confirm_register;
    QPushButton *pushButton;

    void setupUi(QDialog *RegistrationPage)
    {
        if (RegistrationPage->objectName().isEmpty())
            RegistrationPage->setObjectName("RegistrationPage");
        RegistrationPage->resize(400, 300);
        RegistrationPage->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(85, 170, 127);"));
        label = new QLabel(RegistrationPage);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 90, 71, 16));
        label_2 = new QLabel(RegistrationPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 120, 71, 16));
        label_3 = new QLabel(RegistrationPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 150, 111, 16));
        lineEdit_username_register = new QLineEdit(RegistrationPage);
        lineEdit_username_register->setObjectName("lineEdit_username_register");
        lineEdit_username_register->setGeometry(QRect(200, 90, 113, 24));
        lineEdit_username_register->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        lineEdit_username_register->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEdit_password_register = new QLineEdit(RegistrationPage);
        lineEdit_password_register->setObjectName("lineEdit_password_register");
        lineEdit_password_register->setGeometry(QRect(200, 120, 113, 24));
        lineEdit_password_register->setEchoMode(QLineEdit::EchoMode::Password);
        lineEdit_password_confirm_register = new QLineEdit(RegistrationPage);
        lineEdit_password_confirm_register->setObjectName("lineEdit_password_confirm_register");
        lineEdit_password_confirm_register->setGeometry(QRect(200, 150, 113, 24));
        lineEdit_password_confirm_register->setEchoMode(QLineEdit::EchoMode::Password);
        pushButton = new QPushButton(RegistrationPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 190, 80, 24));

        retranslateUi(RegistrationPage);

        QMetaObject::connectSlotsByName(RegistrationPage);
    } // setupUi

    void retranslateUi(QDialog *RegistrationPage)
    {
        RegistrationPage->setWindowTitle(QCoreApplication::translate("RegistrationPage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RegistrationPage", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("RegistrationPage", "Password:", nullptr));
        label_3->setText(QCoreApplication::translate("RegistrationPage", "Confirm Password:", nullptr));
        pushButton->setText(QCoreApplication::translate("RegistrationPage", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationPage: public Ui_RegistrationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONPAGE_H

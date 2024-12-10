#ifndef REGISTRATIONPAGE_H
#define REGISTRATIONPAGE_H

#include <QDialog>
#include "users.h"

namespace Ui {
class RegistrationPage;
}

class RegistrationPage : public QDialog
{
    Q_OBJECT
    Users* users;

public:
    explicit RegistrationPage(Users* users_, QWidget *parent = nullptr);
    ~RegistrationPage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RegistrationPage *ui;
};

#endif // REGISTRATIONPAGE_H

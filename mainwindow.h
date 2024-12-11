#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "applicationpage.h"
#include "registrationpage.h"
#include "users.h"
#include "connections.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Users* users;
    Connections* connections;

public:
    MainWindow(Users* users_, Connections* connections, QWidget *parent = nullptr);

    ~MainWindow();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_register_clicked();

private:
    Ui::MainWindow *ui;
    ApplicationPage *applicationPage;
    RegistrationPage *registrationPage;
};
#endif // MAINWINDOW_H

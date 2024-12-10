#include "mainwindow.h"
#include "users.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Users users = Users();
    MainWindow w(&users);
    w.show();
    return a.exec();
}

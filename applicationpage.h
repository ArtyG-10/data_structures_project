#ifndef APPLICATIONPAGE_H
#define APPLICATIONPAGE_H

#include <QDialog>
#include <QListWidgetItem>
#include "connections.h"
#include "users.h"

namespace Ui {
class ApplicationPage;
}

class ApplicationPage : public QDialog
{
    Q_OBJECT
    Connections* connections;
    std::string current_user;
    Users* users;
public:
    explicit ApplicationPage(Users* users_, Connections* connections_, std::string current_user_, QWidget *parent = nullptr);
    ~ApplicationPage();

private slots:
    void on_pushButton_logout_clicked();

    void on_pushButton_clicked();

    void on_listWidget_connections_itemClicked(QListWidgetItem *item);

    void on_pushButton_2_clicked();

private:
    Ui::ApplicationPage *ui;
};

#endif // APPLICATIONPAGE_H

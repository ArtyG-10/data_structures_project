#ifndef APPLICATIONPAGE_H
#define APPLICATIONPAGE_H

#include <QDialog>

namespace Ui {
class ApplicationPage;
}

class ApplicationPage : public QDialog
{
    Q_OBJECT

public:
    explicit ApplicationPage(QWidget *parent = nullptr);
    ~ApplicationPage();

private:
    Ui::ApplicationPage *ui;
};

#endif // APPLICATIONPAGE_H

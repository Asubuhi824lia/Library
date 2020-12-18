#ifndef ADMINMAINWINDOW_H
#define ADMINMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class AdminMainWindow;
}

class AdminMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminMainWindow(QWidget *parent = nullptr);
    ~AdminMainWindow();

public slots:
    void CreateLibrarianProfile();

private:
    Ui::AdminMainWindow *ui;
};

#endif // ADMINMAINWINDOW_H

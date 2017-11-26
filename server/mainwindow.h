#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"servedev.h"
namespace Ui {
class MainWindow;
}
class servedev;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void addMessage(QString Msg);
    servedev* m_pBoxServer;
private slots:
    void on_pushButtonStart_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

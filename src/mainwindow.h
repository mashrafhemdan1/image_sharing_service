#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "viewimage.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonClose_clicked();

    void on_pushButton_clicked();

    void on_sign_in_clicked();

    void on_register_2_clicked();

private:
    Ui::MainWindow *ui;
    ViewImage* viewimage;

};
#endif // MAINWINDOW_H

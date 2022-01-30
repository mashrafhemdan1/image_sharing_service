#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QListWidget>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonClose_clicked()
{
    ui->label->setText("Button is Clicked");
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("Button is Clicked");
}

void MainWindow::on_sign_in_clicked()
{
    QString username = ui->username_edit->text();
    QString password = ui->password_edit->text();

    // Send them to the server for verfication
    if (username == "admin" && password == "admin"){
        hide();
        viewimage = new ViewImage(this);
        viewimage->show();
    } else {
        QMessageBox::warning(this, "Login", "Username and Password are incorrect");
    }
}


void MainWindow::on_register_2_clicked()
{
    QString username = ui->username_edit->text();
    QString password = ui->password_edit->text();
    QString email = ui->email_edit->text();

    // Check if the fields are empty
    if (username == "" || password == "" || email == ""){
        QMessageBox::warning(this, "Register", "You have to write your name, email and password");
    } else if (username != "admin"){
        QMessageBox::information(this, "Register", "Registered Successfully");
        hide();
        viewimage = new ViewImage(this);
        viewimage->show();
    } else {
        QMessageBox::warning(this, "Register", "Unsuccessful Registration: you may be registered already");
    }

}


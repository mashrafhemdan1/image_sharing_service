#include "upload_image_view.h"
#include "ui_upload_image_view.h"
#include <QMessageBox>

upload_image_view::upload_image_view(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::upload_image_view)
{
    ui->setupUi(this);
}

upload_image_view::~upload_image_view()
{
    delete ui;
}

void upload_image_view::on_pushButton_clicked()
{
    this->close();
}


void upload_image_view::on_pushButton_2_clicked()
{
    QString reciever_user = ui->reciever_user_name->text();
    if (reciever_user == ""){
        QMessageBox::warning(this, "SendImage", "No User is specified");
    } else {
        QMessageBox::information(this, "SendImage", "Sent successfully");
        this->close();
    }
}


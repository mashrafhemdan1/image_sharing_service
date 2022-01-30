#include "viewimage.h"
#include "ui_viewimage.h"
#include "upload_image_view.h"
#include <QPixmap>
#include <QDialog>
#include <QDir>
#include <QStringList>

ViewImage::ViewImage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewImage)
{
    ui->setupUi(this);

    QDir directory("C:/Users/hamod/Downloads/distributed p3/p_3/my_images");
    QStringList images = directory.entryList(QStringList() << "*.jpg" << "*.JPG",QDir::Files);
    foreach(QString filename, images) {
        ui->MyImages->addItem(filename);
    }

}

ViewImage::~ViewImage()
{
    delete ui;
}

void ViewImage::on_MyImages_itemClicked(QListWidgetItem *item)
{
    QPixmap image("C:/Users/hamod/Downloads/distributed p3/p_3/my_images/"+item->text());
    ui->image->setPixmap(image);
}

void ViewImage::on_OtherImages_itemClicked(QListWidgetItem *item)
{
    QPixmap image("C:/Users/hamod/Downloads/distributed p3/p_3/my_images/"+item->text());
    ui->image->setPixmap(image);
}

void ViewImage::on_OtherImages_currentItemChanged(QListWidgetItem*, QListWidgetItem*)
{

}


void ViewImage::on_upload_clicked()
{
    upload_image_view* upload_image_view_t = new upload_image_view(this);
    upload_image_view_t->show();
}


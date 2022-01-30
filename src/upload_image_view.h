#ifndef UPLOAD_IMAGE_VIEW_H
#define UPLOAD_IMAGE_VIEW_H

#include <QDialog>

namespace Ui {
class upload_image_view;
}

class upload_image_view : public QDialog
{
    Q_OBJECT

public:
    explicit upload_image_view(QWidget *parent = nullptr);
    ~upload_image_view();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::upload_image_view *ui;
};

#endif // UPLOAD_IMAGE_VIEW_H

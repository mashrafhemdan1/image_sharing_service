#ifndef VIEWIMAGE_H
#define VIEWIMAGE_H

#include <QDialog>
#include <QListWidgetItem>

namespace Ui {
class ViewImage;
}

class ViewImage : public QDialog
{
    Q_OBJECT

public:
    explicit ViewImage(QWidget *parent = nullptr);
    ~ViewImage();

private slots:
    void on_MyImages_itemClicked(QListWidgetItem *item);

    void on_OtherImages_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_OtherImages_itemClicked(QListWidgetItem *item);

    void on_upload_clicked();

private:
    Ui::ViewImage *ui;
};

#endif // VIEWIMAGE_H

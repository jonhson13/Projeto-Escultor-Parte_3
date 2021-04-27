#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    int getX(void);
    int getY(void);
    int getZ(void);
private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H

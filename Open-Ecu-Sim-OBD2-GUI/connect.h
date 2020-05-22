#ifndef CONNECT_H
#define CONNECT_H

#include <QDialog>

namespace Ui {
class Connect;
}

class Connect : public QDialog
{
    Q_OBJECT

public:
    explicit Connect(QWidget *parent = nullptr);
    ~Connect();

private slots:
    void on_btnbConnect_rejected();

    void on_btnbConnect_accepted();

private:
    Ui::Connect *ui;
    int obdStd;
    int fuelType;
};

#endif // CONNECT_H

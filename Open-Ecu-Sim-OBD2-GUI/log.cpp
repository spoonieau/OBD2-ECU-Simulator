#include "log.h"
#include "ui_log.h"

Log::Log(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Log)
{
    ui->setupUi(this);
}

Log::~Log()
{
    delete ui;
}

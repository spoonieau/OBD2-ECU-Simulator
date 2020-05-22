#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_actionAbout_triggered()
{
    About *diaAbout = new About();
    diaAbout->exec();

}

void MainWindow::on_actionConnect_triggered()
{
    Connect *diaConnect = new Connect();
    diaConnect->exec();

}

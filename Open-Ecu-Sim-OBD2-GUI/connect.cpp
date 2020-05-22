#include "connect.h"
#include "ui_connect.h"

Connect::Connect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connect)
{
    ui->setupUi(this);

    ui->cbOBD2Type->addItem("OBD-II as defined by the CARB");
    ui->cbOBD2Type->addItem("OBD as defined by the EPA");
    ui->cbOBD2Type->addItem("OBD and OBD-II");
    ui->cbOBD2Type->addItem("OBD-I");
    ui->cbOBD2Type->addItem("EOBD (Europe)");
    ui->cbOBD2Type->addItem("EOBD and OBD-II");
    ui->cbOBD2Type->addItem("EOBD and OBD");
    ui->cbOBD2Type->addItem("EOBD, OBD and OBD II");
    ui->cbOBD2Type->addItem("JOBD (Japan)");
    ui->cbOBD2Type->addItem("JOBD and OBD II");
    ui->cbOBD2Type->addItem("JOBD and EOBD");
    ui->cbOBD2Type->addItem("JOBD, EOBD, and OBD II");
    ui->cbOBD2Type->setCurrentIndex(11);

    ui->cbFuelCoding->addItem("Petrol");
    ui->cbFuelCoding->addItem("Methanol");
    ui->cbFuelCoding->addItem("Ethanol");
    ui->cbFuelCoding->addItem("Diesel");
    ui->cbFuelCoding->addItem("Electric");
    ui->cbFuelCoding->addItem("Hybrid Petrol");
    ui->cbFuelCoding->addItem("Hybrid Ethanol");
    ui->cbFuelCoding->addItem("Hybrid Diesel");
    ui->cbFuelCoding->addItem("Hybrid Electric");
    ui->cbFuelCoding->addItem("Hybrid running electric and combustion engine");
    ui->cbFuelCoding->addItem("Hybrid Regenerative");
    ui->cbFuelCoding->setCurrentIndex(3);

}

Connect::~Connect()
{
    delete ui;
}

void Connect::on_btnbConnect_rejected()
{
    reject();
}

void Connect::on_btnbConnect_accepted()
{
    switch(ui->cbOBD2Type->currentIndex())
    {
    case 0:
        obdStd = 1;
        break;

    case 1:
        obdStd = 2;
        break;

    case 2:
        obdStd = 3;
        break;

    case 3:
        obdStd = 4;
        break;

    case 4:
        obdStd = 6;
        break;

    case 5:
        obdStd = 7;
        break;

    case 6:
        obdStd = 8;
        break;

    case 7:
        obdStd = 9;
        break;

    case 8:
        obdStd = 10;
        break;

    case 9:
        obdStd = 11;
        break;

    case 10:
        obdStd = 12;
        break;

    case 11:
        obdStd = 13;
        break;

    default:
        obdStd = 13;
        break;

    }

    switch(ui->cbFuelCoding->currentIndex())
    {
    case 0:
        fuelType = 1;
        break;

    case 1:
        fuelType = 2;
        break;

    case 2:
        fuelType = 3;
        break;

    case 3:
        fuelType = 4;
        break;

    case 4:
        fuelType = 8;
        break;

    case 5:
        fuelType = 17;
        break;

    case 6:
        fuelType = 18;
        break;

    case 7:
        fuelType = 19;
        break;

    case 8:
        fuelType = 20;
        break;

    case 9:
        fuelType = 21;
        break;

    case 10:
        fuelType = 22;
        break;

    default:
        fuelType = 4;
        break;

    }
}

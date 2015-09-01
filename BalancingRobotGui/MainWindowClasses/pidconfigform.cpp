#include "pidconfigform.h"
#include "ui_pidconfigform.h"

PidConfigForm::PidConfigForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PidConfigForm)
{
    ui->setupUi(this);
}

PidConfigForm::~PidConfigForm()
{
    delete ui;
}

void PidConfigForm::on_pushButtonRead_clicked()
{
    QByteArray Array;
    Array.append("p");
    emit readPid(Array);
}

void PidConfigForm::on_pushButtonWrite_clicked()
{

}

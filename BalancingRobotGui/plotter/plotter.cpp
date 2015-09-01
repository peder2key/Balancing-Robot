#include "plotter.h"
#include "ui_plotter.h"

#include "plotter/qcustomplot.h"

plotter::plotter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::plotter)
{
    ui->setupUi(this);

}

plotter::~plotter()
{
    delete ui;
}

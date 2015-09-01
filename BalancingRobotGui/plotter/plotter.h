#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

namespace Ui {
class plotter;
}

class plotter : public QWidget
{
    Q_OBJECT

public:
    explicit plotter(QWidget *parent = 0);
    ~plotter();

private:
    Ui::plotter *ui;
};

#endif // PLOTTER_H

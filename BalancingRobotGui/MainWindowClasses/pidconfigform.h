#ifndef PIDCONFIGFORM_H
#define PIDCONFIGFORM_H

#include <QWidget>

namespace Ui {
class PidConfigForm;
}

class PidConfigForm : public QWidget
{
    Q_OBJECT

public:
    explicit PidConfigForm(QWidget *parent = 0);
    ~PidConfigForm();

private slots:
    void on_pushButtonRead_clicked();

    void on_pushButtonWrite_clicked();

private:
    Ui::PidConfigForm *ui;
};

#endif // PIDCONFIGFORM_H

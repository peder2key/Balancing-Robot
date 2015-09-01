#ifndef BOTTOMTOOLBAR_H
#define BOTTOMTOOLBAR_H

#include <QWidget>
#include <QToolBar>
#include <QLabel>
#include <QIcon>
#include <QAction>


class bottomToolBar : public QWidget
{
    Q_OBJECT
public:
    explicit bottomToolBar(QWidget *parent = 0);

    QToolBar *getBottomToolBar() const;
    void setBottomToolBar(QToolBar *value);

    QAction *leftArrow;
    QAction *rightArrow;

signals:

public slots:

private:
    void createToolBar(void);
    QToolBar *BottomToolBar;
    QLabel *toolBarLabel;
};

#endif // BOTTOMTOOLBAR_H

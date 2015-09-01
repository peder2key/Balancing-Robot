#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QWidget>
#include <QToolBar>
#include <QLabel>
#include <QIcon>
#include <QAction>


class ToolBar : public QToolBar
{
public:
    ToolBar();

private:
    void createToolBar(void);
    QToolBar *BottomToolBar;
    QAction *leftArrow;
    QAction *rightArrow;
    QLabel *toolBarLabel;
};

#endif // TOOLBAR_H

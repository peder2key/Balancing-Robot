#include "bottomtoolbar.h"

bottomToolBar::bottomToolBar(QWidget *parent) : QWidget(parent)
{
    createToolBar();
}

void bottomToolBar::createToolBar()
{
    leftArrow = new QAction(QIcon(":/icons/Toolbar/ToolBar/blackLeftArrow.png"), "Back", this);
    rightArrow = new QAction(QIcon(":/icons/Toolbar/ToolBar/blackRightArrow.png"), "Forward", this);

    toolBarLabel = new QLabel();
    toolBarLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    toolBarLabel->setText("ToolBar");
    toolBarLabel->setAlignment(Qt::AlignCenter);

    BottomToolBar = new QToolBar();
    BottomToolBar->setMovable(false);
    BottomToolBar->setIconSize(QSize(96,96));
    BottomToolBar->addAction(leftArrow);
    BottomToolBar->addWidget(toolBarLabel);
    BottomToolBar->addAction(rightArrow);
}

QToolBar *bottomToolBar::getBottomToolBar() const
{
    return BottomToolBar;
}

void bottomToolBar::setBottomToolBar(QToolBar *value)
{
    BottomToolBar = value;
}



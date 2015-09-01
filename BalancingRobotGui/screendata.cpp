#include "screendata.h"

ScreenData::ScreenData(QObject *parent) : QObject(parent)
{
    getScreenResolution();
    CalculateRatio();

    QScreen *mScreen = QApplication::screens().at(0);
    connect(mScreen, SIGNAL(orientationChanged(Qt::ScreenOrientation)), this, SLOT(Orientation(Qt::ScreenOrientation)));
}

ScreenData::~ScreenData()
{

}

void ScreenData::getScreenResolution()
{

    foreach (QScreen *screen, QGuiApplication::screens()) {

       /* pixelHeight = screen->virtualGeometry().height();
        pixelWidth = screen->virtualGeometry().width();
        physicalDPI = screen->physicalDotsPerInch();
        */
       // qDebug() << "  Orientation:" << Orientation(screen->orientation());
        setPixelHeight(screen->virtualGeometry().height());
        setPixelWidth(screen->virtualGeometry().width());
        setPhysicalDPI(screen->physicalDotsPerInch());

      //  qDebug() << pixelHeight << pixelWidth << physicalDPI;
    }

}

void ScreenData::CalculateRatio()
{
    refDpi = 216.;
    refHeight = 1920.;
    refWidth = 1080.;
    QRect rect = qApp->primaryScreen()->geometry();
    qreal height = qMax(rect.width(), rect.height());
    qreal width = qMin(rect.width(), rect.height());
    qreal dpi = qApp->primaryScreen()->logicalDotsPerInch();

    mRatio = qMin(height/refHeight, width/refWidth);
    mRatioFont = qMin(height*refDpi/(dpi*refHeight), width*refDpi/(dpi*refWidth));

    qDebug() << mRatio << mRatioFont << height << width << dpi;

    if(mRatioFont >= 1)
    {
        mRatioFont = mRatioFont*2;
        mRatioFont = qRound(mRatioFont);
    }
    else
    {
        mRatioFont = 0;
    }

}

void ScreenData::Orientation(Qt::ScreenOrientation orientation)
{
    qDebug() << orientation;
}

qreal ScreenData::ratioFont() const
{
    return mRatioFont;
}

void ScreenData::setRatioFont(const qreal &ratioFont)
{
    mRatioFont = ratioFont;
}


qreal ScreenData::ratio() const
{
    return mRatio;
}

void ScreenData::setRatio(const qreal &ratio)
{
    mRatio = ratio;
}

float ScreenData::getPhysicalDPI() const
{
    return physicalDPI;
}

void ScreenData::setPhysicalDPI(float value)
{
    physicalDPI = value;
}

int ScreenData::getPixelWidth() const
{
    return pixelWidth;
}

void ScreenData::setPixelWidth(int value)
{
    pixelWidth = value;
}

int ScreenData::getPixelHeight() const
{
    return pixelHeight;
}

void ScreenData::setPixelHeight(int value)
{
    pixelHeight = value;
}



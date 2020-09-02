#include "mydata.h"

MyData::MyData()
{

}

QString MyData::getText() const
{
    return text;
}


void MyData::setText(const QString &value)
{
    text = value;
    emit textChanged();
}

QString MyData::getColor() const
{
    return color;
}
void MyData::setColor(const QString &value)
{
    color = value;
    emit colorChanged();
}

int MyData::getFontSize() const
{
    return fontSize;
}
void MyData::setFontSize(int value)
{
    fontSize = value;
    emit fontSizeChanged();
}

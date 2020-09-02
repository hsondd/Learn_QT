#ifndef MYDATA_H
#define MYDATA_H

#include <QObject>
#include <QString>
#include <QtCore>

class MyData : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString text READ getText WRITE setText NOTIFY textChanged)
    Q_PROPERTY(QString color READ getColor WRITE setColor NOTIFY colorChanged)
    Q_PROPERTY(int fontSize READ getFontSize WRITE setFontSize NOTIFY fontSizeChanged)
public:
    MyData();
    QString getText() const;
    void setText(const QString &value);

    QString getColor() const;
    void setColor(const QString &value);

    int getFontSize() const;
    void setFontSize(int value);
signals:
    void textChanged();
    void colorChanged();
    void fontSizeChanged();
public slots:
private:
    QString text;
    QString color;
    int fontSize;
};

#endif // MYDATA_H

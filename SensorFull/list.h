// list.h

#ifndef LIST_H
#define LIST_H

#include <QVector>
#include <QObject>

class List : public QObject
{
    Q_OBJECT

public:
    explicit List(QObject *parent = nullptr);

    void getFromAnaliser(QVector<int> max, QVector<int> min, QVector<__int64> average, QVector<__int64> median, int sensor_counter);

    QVector<int> getMax() const;
    QVector<int> getMin() const;
    QVector<__int64> getAverage() const;
    QVector<__int64> getMedian() const;
    int getSensorCounter() const;

private:
    QVector<int> MAX;
    QVector<int> MIN;
    QVector<__int64> AVERAGE;
    QVector<__int64> MEDIAN;
    int sensor_counter;
};

#endif // LIST_H

#ifndef DATE_H
#define DATE_H

#include <QDate>
#include <QString>
#include <QVariant>

// --- CM_DATE --- //
class Date
{
private:
    short   m_Day; // days from Jan 1st.
    short   m_Year;
    long    m_LeapYear; // =1 if year is a leapyear, 0 otherwise.

public:
    // Constructor
    Date();

    // Get data
    QDate get();
    QString getMatchText(int &yearAdjustment, bool &useFullDate);
    short year();

    // Set data
    void set(const QDate &date, const int yearAdjustment = 0);
    void set(const QString &value, const int yearAdjustment = 0);
    void set(const QVariant &value, const int yearAdjustment = 0);
};

#endif // DATE_H

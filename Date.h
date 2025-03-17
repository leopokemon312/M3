#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
private:
    int month;
    int day;
    int year;
    bool isValidDate(int m, int d, int y) const;

public:
    // Constructor
    Date(int m = 1, int d = 1, int y = 1900);

    // Mutator
    void setDate(int m, int d, int y);

    // Accessors
    int getMonth() const;
    int getDay() const;
    int getYear() const;

    // Leap year functions
    bool isLeapYear() const;
    bool isLeapYear(int year) const;

    // Last day of the month functions
    int lastDay() const;
    int lastDay(int m, int y) const;

    // Print functions
    std::string printFormat1() const;
    std::string printFormat2() const;
    std::string printFormat3() const;
};

#endif

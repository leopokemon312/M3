#include "Date.h"
#include <iostream>

using namespace std;

// Helper function to check if the date is valid
bool Date::isValidDate(int m, int d, int y) const {
    if (m < 1 || m > 12) return false;
    int maxDay = lastDay(m, y);
    if (d < 1 || d > maxDay) return false;
    return true;
}

// Constructor
Date::Date(int m, int d, int y) {
    if (isValidDate(m, d, y)) {
        month = m;
        day = d;
        year = y;
    }
    else {
        month = 1;
        day = 1;
        year = 1900;
    }
}

// Mutator function
void Date::setDate(int m, int d, int y) {
    if (isValidDate(m, d, y)) {
        month = m;
        day = d;
        year = y;
    }
    else {
        cout << "Invalid date! Setting to default.\n";
        month = 1;
        day = 1;
        year = 1900;
    }
}

// Accessor functions
int Date::getMonth() const {
    return month;
}

int Date::getDay() const {
    return day;
}

int Date::getYear() const {
    return year;
}

// Leap year functions
bool Date::isLeapYear() const {
    return isLeapYear(year);
}

bool Date::isLeapYear(int y) const {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

// Last day of the month functions
int Date::lastDay() const {
    return lastDay(month, year);
}

int Date::lastDay(int m, int y) const {
    if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
    if (m == 2) return isLeapYear(y) ? 29 : 28;
    return 31;
}

// Print functions
string Date::printFormat1() const {
    return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
}

string Date::printFormat2() const {
    const string months[] = { "", "January", "February", "March", "April", "May", "June",
                             "July", "August", "September", "October", "November", "December" };
    return months[month] + " " + to_string(day) + ", " + to_string(year);
}

string Date::printFormat3() const {
    const string months[] = { "", "January", "February", "March", "April", "May", "June",
                             "July", "August", "September", "October", "November", "December" };
    return to_string(day) + " " + months[month] + " " + to_string(year);
}

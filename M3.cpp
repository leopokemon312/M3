#include "Date.h"
#include <iostream>

using namespace std;

int main() {
    // Test default constructor
    Date date1;
    cout << "Test default constructor: " << date1.printFormat1() << "\n\n";

    // Test valid date
    Date date2(2, 28, 2009);
    cout << "Test valid date: " << date2.printFormat1() << "\n\n";

    // Test invalid date (invalid month)
    Date date3(45, 2, 2009);
    cout << "Test invalid month (45, 2, 2009): " << date3.printFormat1() << "\n\n";

    // Test invalid day for February in non-leap year
    Date date4(2, 29, 2009);
    cout << "Test invalid day for February in non-leap year: " << date4.printFormat1() << "\n\n";

    // Test leap year
    Date date5(2, 29, 2008);
    cout << "Test valid leap year: " << date5.printFormat1() << "\n\n";

    // Test printing formats
    cout << "Test print formats:\n";
    cout << date5.printFormat1() << "\n";
    cout << date5.printFormat2() << "\n";
    cout << date5.printFormat3() << "\n\n";

    // Test setDate with invalid input
    date5.setDate(4, 31, 2009);
    cout << "Test setDate with invalid day (4, 31, 2009): " << date5.printFormat1() << "\n\n";

    return 0;
}

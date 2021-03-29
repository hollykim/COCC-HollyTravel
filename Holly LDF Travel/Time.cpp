#include "Time.h"
#include <iostream>
using namespace std;

//overloading - operator to calculate time
Time Time::operator-(Time operand2){

    Time result;

    unsigned short  checkOut = (this->hour * 60) + this->minute,
                    checkIn = (operand2.hour * 60) + operand2.minute,
                    minutesWorked = checkIn - checkOut;

            result.hour = minutesWorked / 60;
            result.minute = minutesWorked % 60;

// print variables to test the time calculate
//    cout << minutesWorked << "\n";
//    cout << result.hour << "\t" << result.minute << "\n";
//    cout << "\n\n\t*** check out: " << checkOut << " check in: " << checkIn
//         << " minutesWorked: " << minutesWorked <<"\n\n";

    return result;
}

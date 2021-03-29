#include "boardingPass.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Print booking details
void boardingPass::printBookingDetails(Person person, unsigned short ticketNumber){

    cout << "\n\tBOADING PASS "
         << "\n\t--------------------------";
            if(ticketNumber == 1){
            person.getName();
            }
    cout
         << "\n\tCheck In Time:" << setfill('0') << setw(2) << checkIn.getHour() << ":" << setw(2) << checkIn.getMinute()
         << "\t\tCheck Out Time:" << setw(2) << checkOut.getHour() << ":" << setw(2) << checkOut.getMinute()

         << "\n\tDeparture Date:" << setw(2) << depart.getDate()<< "." << setw(2)
         << depart.getMonth() << "." << setw(4) << depart.getYear()

         << "\tArrival Date:" << setw(2) << arrive.getDate() << "." << setw(2)
         <<  arrive.getMonth() << "." << setw(4) << arrive.getYear()
         << "\n\tDeparture Airport:" <<  printUpperCase(departureAirport)
         << "\t\tArrival Airport:" << printUpperCase(arrivalAirport)
         << "\n\tClass Type:" << printUpperCase(classType)
         << "\t\tCost:" << getCost()
         << "\n\tExpected Flight Time:" << setw(2) << flightTime.getHour() << "H " << setw(2) << flightTime.getMinute() << "M\n";

}

// Change letters to upper case
string boardingPass::printUpperCase(string userInput){
    unsigned short length = userInput.size();
    for (short i = 0; i < length; i++){
      userInput[i] = toupper(userInput[i]);
      }
    return userInput;
 }


// Get a detail for booking from customer
void boardingPass::setBookingInfo(Report &r){

    cout << "\tEnter your Departure Airport Code: ";
    cin >> departureAirport;
    cout << "\tEnter your Arrival Airport code: ";
    cin >> arrivalAirport;
    cout << "\tEnter your Class Type: ";
    cin >> classType;

    unsigned short theHour, theMinute, theDate, theMonth, theYear;

    cout << "\tEnter the Departures Date(dd mm yyyy): ";
    cin >> theDate >> theMonth >> theYear;
    depart.setDate(theDate);
    depart.setMonth(theMonth);
    depart.setYear(theYear);
    cout << "\tEnter the Arrive Date(dd mm yyyy): ";
    cin >> theDate >>  theMonth >> theYear;
    arrive.setDate(theDate);
    arrive.setMonth(theMonth);
    arrive.setYear(theYear);

    cout << "\tEnter the Check In Time(hh mm): ";
    cin >> theHour >> theMinute;
    checkIn.setHour(theHour);
    checkIn.setMinute(theMinute);
    cout << "\tEnter the Check Out Time(hh mm): ";
    cin >> theHour >> theMinute;
    checkOut.setHour(theHour);
    checkOut.setMinute(theMinute);

    flightTime = checkIn - checkOut;
    //cout << flightTime.getTotal() << "\n";

    cout << "\tEnter the cost:\t";
    cin >> cost;

    r.setTotalCost(cost);
    getCost();
    r.setTotalFlight();
}


// Sending a summery letter
void boardingPass::sendSummary(Person person, boardingPass ticket2){

        cout << "\n\t--------------------------"
             << "\n\tLDF TRAVLE\n";
             person.getName();
             person.getAddress();

        cout << "\n\n\tREF: " << printUpperCase(departureAirport) << "/" << printUpperCase(arrivalAirport) << "/"
             << setfill('0') << setw(2) << arrive.getDate() << "." << setw(2) <<  arrive.getMonth() << "." << setw(4) << arrive.getYear()
             << "\n\n\tDear ";
             person.getFirstName();
        cout << ",\n\tPlease find enclosed your boarding passes for your flight from "
             << printUpperCase(departureAirport) << " to "
             << printUpperCase(arrivalAirport) << ".\n\n\tYour journey is as follows:\n";

    Time flightTime = checkIn - ticket2.checkOut;

    cout << "\n\tSUMMERY OF JOURNEY\n";
            person.getName();
    cout << "\t\tCLASS: " << printUpperCase(classType)
         << "\t\tCOST: " << getCost() + ticket2.getCost() << " Euro"
         << "\n\tFROM: " <<  printUpperCase(departureAirport)
         << "\t\tDATE: " << setfill('0') << setw(2) << depart.getDate()<< "." << setw(2) << depart.getMonth() << "." << setw(4) << depart.getYear()
         << "\tTIME: " << setw(2) << checkIn.getHour() << ":" << setw(2) << checkIn.getMinute()
         << "\n\tTO: " << ticket2.printUpperCase(ticket2.arrivalAirport)
         << "\t\t\tDATE: " << setw(2) << ticket2.arrive.getDate() << "." << setw(2)
         <<  ticket2.arrive.getMonth() << "." << setw(4) << ticket2.arrive.getYear()
         << "\tTIME: " << setw(2) << ticket2.checkOut.getHour() << ":" << setw(2) << ticket2.checkOut.getMinute()
         << "\n\tTotal Flight Time: " <<  flightTime.getHour() << "H " <<  flightTime.getMinute() << "M"
         << "\n\n\tThank you for booking with LDF and we look forward to doing business with you again"
         << "\n\tqueries@ldf.ie\t\twww.lef.ie\t\t021-123-4567\t\twww.facebook.com/ldf\n";

    }


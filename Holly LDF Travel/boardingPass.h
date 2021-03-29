#ifndef BOARDINGPASS_H
#define BOARDINGPASS_H
#define BOARDINGPASS_H
#include "Time.h"
#include "Date.h"
#include "Person.h"
#include "Report.h"
using namespace std;

class boardingPass
{
    public:
        void setBookingInfo(Report &);
        void printBookingDetails(Person, unsigned short);
        void setCost(float c){cost = c;};
        float getCost(){return cost;};
        string printUpperCase(string);
        void printReport();
        void sendSummary(Person, boardingPass);

    private:
        string departureAirport, arrivalAirport, classType;
        float cost;
        Time checkIn, checkOut, flightTime;
        Person person;
        Date depart, arrive;
};

#endif // BOARDINGPASS_H



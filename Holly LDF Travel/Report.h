#ifndef REPORT_H
#define REPORT_H
#include <iostream>
using namespace std;

class Report
{
    public:
        Report(){reportTotalCost = 0, reportTotalFlight = 0;};
        void setTotalCost(float cost){reportTotalCost += cost;};
        void setTotalFlight (){reportTotalFlight++;};
        void printReport();

    private:
        float reportTotalCost;
        unsigned short reportTotalFlight;
};

#endif // REPORT_H

#include "Report.h"
#include "boardingPass.h"
#include <iostream>
using namespace std;

// Print a sales report
void Report::printReport(){
            cout << "\n\t---------- Sales Report -----------"
            << "\n\n\tTotal Cost: " << reportTotalCost << "\n\tThe number of flights sold: "
            << reportTotalFlight << "\n\tCommission: " << reportTotalCost * 0.1 << "\n";
            };


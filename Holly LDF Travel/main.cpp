#include <iostream>
#include "boardingPass.h"
using namespace std;

char choice;

// Main menu. User can choose functions they want to do.
// I made 1.Register personal Information part separately to avoid ask user information(name and address) twice
void menu(){
    cout << "\n\t1: Register Personal Information\n"
         << "\n\t2: Make a booking\n"
         << "\n\t3: Print my tickets\n"
         << "\n\t4: Send a Summary letter\n"
         << "\n\t5: Print Sales Report\n"
         << "\n\t6: Exit\n"
         << "\n\tChoice: ";
         cin >> choice;
}

int main(){

//Objects
    boardingPass ticket1, ticket2;
    Person person1;
    Report report1;

//main program with do/while loop, switch

    cout << "\n\tWelcome to LDF Travel\n";
    do {
        cout << "\n\t--------------------------"
             << "\n\t* How can we help you?"
             << "\n\t--------------------------";
        menu();
        switch(choice){
            case '1':
                person1.setPersonalInfo();
                break;

            case '2':
                cout << "\n\n\tPlease enter your First Flight Information"
                << "\n\t--------------------------\n";
                ticket1.setBookingInfo(report1);
                cout << "\n\n\tPlease enter your Second Flight Information"
                << "\n\t--------------------------\n";
                ticket2.setBookingInfo(report1);
                cout << "\n\tYour booking is completed!";
                break;

            case '3':

                cout << "\n\n\tFirst Flight";
                ticket1.printBookingDetails(person1,1);
                cout << "\n\n\tSecond Flight";
                ticket2.printBookingDetails(person1,1);
                break;

            case '4':
                ticket1.sendSummary(person1,ticket2);
                break;

            case '5':
                report1.printReport();
                break;

            default:
                cout << "\n\n\tYour choice " << choice << " is invalid number\n\tPlease select again";
            }
    }
    while (choice != '6');

    return 0;
}


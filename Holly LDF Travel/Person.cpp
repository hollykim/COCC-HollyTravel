#include "Person.h"
#include "boardingPass.h"
using namespace std;

// Set user name and email, address
void Person::setPersonalInfo(){

    cout << "\n\tEnter your First name: ";
    cin >> firstName;
    cout << "\tEnter your Surname: ";
    cin >> surName;
    cout << "\tEnter your Email: ";
    cin >> email;
    cout << "\tEnter your Address Line 1 : ";
    cin >> address1;
    cout << "\tEnter your Address Line 2 : ";
    cin >> address2;
    cout << "\tEnter your Address Line 3 : ";
    cin >> address3;
}

// get user name
void Person::getName(){
    cout << "\n\tName: " << firstName << " " << surName;
}

// get user address
void Person::getAddress(){
    cout << "\n\tAddress: "
         << address1 << "\n\t\t" << address2 << "\n\t\t" << address3 <<"\n";
}

// get user name and email, address
void Person::getPersonalInfo(){
    cout  << "\n\tName: " << firstName << " " << surName
    << "\t\tEmail: " << email
    << "\t\tAddress: " << address1 << ", " << address2 << ", " << address3 << "\n";
}


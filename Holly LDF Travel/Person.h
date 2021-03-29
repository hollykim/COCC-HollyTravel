#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;

class Person
{
    public:
        void setPersonalInfo();
        void getPersonalInfo();
        void getName();
        void getAddress();
        void getFirstName(){cout << firstName;};

    private:
        string firstName, surName, email, address1, address2, address3;
};

#endif // PERSON_H

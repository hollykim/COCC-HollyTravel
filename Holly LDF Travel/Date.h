#ifndef DATE_H
#define DATE_H

class Date
{
    public:
        void setDate(unsigned short d){date = d;};
        void setMonth(unsigned short m){month = m;};
        void setYear(unsigned short y){year = y;};
        unsigned short getDate(){return date;};
        unsigned short getMonth(){return month;};
        unsigned short getYear(){return year;}

    private:
        unsigned short date, month, year;
};

#endif // DATE_H

#ifndef TIME_H
#define TIME_H

class Time
{
    public:
        void setHour(unsigned short h){hour = h;}; // as it is short, inline code
        void setMinute(unsigned short m) {minute = m;};
        unsigned short getHour(){return hour;};
        unsigned short getMinute(){return minute;};

        Time operator- (Time);

    private:
       unsigned short hour, minute;
};

#endif // TIME_H

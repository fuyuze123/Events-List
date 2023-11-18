#ifndef EVENT_H
#define EVENT_H

#include <string>


class EVENT 
{
protected:
    string date;
    string time; 
    string location;
    string purpose;

public:

    EVENT(string userDate,string userTime,string userLocation,string userPurpose);
    const string get_date();
    const string get_time();
    const string get_location();
    const string get_purpose();

    void set_date(string userDate);
    void set_time(string userTime);
    void set_location(string userLocation);
    void set_purpose(string userPurpose)









}








#endif
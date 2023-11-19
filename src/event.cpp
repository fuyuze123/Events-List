#include "../header/event.h"

class EventManager{
private:
    vector<string> events;

public:
    void createEvent (string date, string time, string location, string purpose){
        set_date();
        set_time();
        set_location();
        set_purpose();
        
        events.push_back({date, time, location, purpose});
        cout << "Event created." << endl;
    }
    
    void set_date(string userDate){
    cout << "Please choose the date for your event: ";
    getline(cin, date);
    }

    void set_time(string userTime){
    cout << "Please choose the time for your event: ";
    getline(cin, time);
    }

    void set_location(string userLocation){
    cout << "Please input the location of your event: ";
    getline(cin, location);
    }

    void set_purpose(string userPurpose){
    cout << "Please state the purpose of your event: ";
    getline(cin, purpose);
    }
}
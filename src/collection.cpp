#include "../header/collection.h"

collection::collection()
{   

    
    eventList;


}

void collection::addEvent(EVENT userEvent)
{
    eventList.push_back(userEvent);
}
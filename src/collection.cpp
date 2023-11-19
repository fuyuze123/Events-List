#include "../header/collection.h"
#include <iostream>
#include <fstream>

collection::collection()
{   

    
    eventList;


}

void collection::addEvent(EVENT userEvent)
{
    eventList.push_back(userEvent);
}

const void collection::printList()
{
    unsigned int vectorSize= eventList.size();

    if(vectorSize == 0)
    {
        std::cout<<"Empty List\n";
    }
    else
    {

        std::cout<<"Current List:  \n\n\n";
     for(unsigned int t = 0; t < vectorSize;t++)
        {       
            std::cout<<t<<"----------------------\n ";


            std::cout<<"Event Name: " << eventList.at(t).get_name()<<"\n";
            std::cout<<"Date: "<<eventList.at(t).get_date()<<"\n";
            std::cout<<"Time: "<<eventList.at(t).get_time()<<"\n";
            std::cout<<"Location: "<<eventList.at(t).get_location()<<"\n";
            std::cout<<"Purpose: "<<eventList.at(t).get_purpose()<<"\n";
            std::cout<<"\n";
        }

     std::cout<<"----------------------\n ";

    }
      


}

const void collection::ListToHTML()
{
    fstream userFile;
    userFile.open("html.txt",std::fstream::out );
    

    unsigned int vectorSize= eventList.size();

    if(vectorSize!=0)
    {
 userFile<<"<p><strong>---------------------------</strong></p>";

        for(unsigned int t = 0; t < vectorSize;t++)
        {
            userFile<<"<p><strong>Event Name</strong>: " << eventList.at(t).get_name()<<"<p>\n";
            userFile<<"<p><strong>Date</strong>: "<<eventList.at(t).get_date()<<"<p>\n";
            userFile<<"<p><strong>Time</strong>: "<<eventList.at(t).get_time()<<"<p>\n";
            userFile<<"<p><strong>Location</strong>: "<<eventList.at(t).get_location()<<"<p>\n";
            userFile<<"<p><strong>Purpose</strong>: "<<eventList.at(t).get_purpose()<<"<p>\n";
            userFile<<"<p><strong>---------------------------</strong></p>";
        
        }   


    }


  

    


    userFile.close();


}

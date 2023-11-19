#include "../header/interface.h"
#include <iostream>

using namespace std;

void halting();

bool ifValid(string userInput)
{
    bool res = true;
    for(int s = 0; s < userInput.size();s++ )
    {
        if(isdigit(userInput[s])==false)
        {

            res = false;
            break;

        }


    }


    return res;

}

userInterface::userInterface()
{
    
    userCollection;

}

void userInterface::Interface()
{
    string userInput;
    int choice = 0;
    bool ifContinue = 1;
    while(ifContinue)
    {
        cout<<"Welcome, enter 1-4 to choose from the functionality\n";
        cout<<"1. Create event\n";
        cout<<"2. View current events\n";
        cout<<"3. convert all current events to HTML\n";
        cout<<"4. Exit\n";
        cout<<"5. Remove all existing events\n";
       
        cin>>userInput;
        
        
        while(ifValid(userInput)==false)
        {
            cin>>userInput;


        }

        choice = stoi(userInput);
        switch(choice)
        {


            case 1: {
            std::string UName;
            std::string Udate;
             std::string Utime;
              std::string Ulocation; 
               std::string Upurpose;

             std::cout << "Enter event name: ";
            std::cin>>UName;

            std::cout << "Enter event date: ";
            std::cin>>Udate;

            std::cout << "Enter event time: ";
            std::cin >> Utime;
            std::cout << "Enter event location: ";
            std::cin>>Ulocation;

            std::cout << "Enter event purpose: ";
            std::cin>>Upurpose;

            EVENT newEvent(Udate,Utime,Ulocation,Upurpose,UName);

            userCollection.addEvent(newEvent);}
             halting();
            break;


            case 2:{
            userCollection.printList();}
            halting();
            break;


            case 3: {
            userCollection.ListToHTML();}
            break;

            case 4: {
            ifContinue = 0;}

            break;

            case 5:{
                cout<<"Enter Y to remove all events: ";
                cin>>userInput;
                if(userInput == "y"|| userInput =="Y")
                {
                    userCollection.clearEvent();
                    cout<<"Event cleared\n";


                }
                else{
                    cout<<"Event not cleared\n";
                }
               
            }
             halting();
            break;

            default: 
            {
                ifContinue = 1;
            }
            break;






         



        }







    }
    





}


void halting()
{
    string userInput;
       while(1)
            {

                cout<<"Enter anything to continue\n\n\n\n";
                cin>>userInput;

                if(userInput.size()!=0)
                {
                    break;
                }
            }
}
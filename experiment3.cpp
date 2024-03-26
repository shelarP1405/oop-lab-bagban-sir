#include <iostream>
using namespace std;

class vehicle
{
private:
    int numwheels;
    string color;
    int maxspeed;
    int maxgears;
    int curgear;
    int curspeed;
    bool started;
    bool stopped;

public:
   bool startcar()
   {
       started=true;
       stopped=false;
       cout<<"Car is started"<<endl;
   }
   bool stopcar()
   {
       started=false;
       stopped=true;
       cout<<"Car is stop"<<endl;
   }
   void gearup()
   {
       if(curgear<maxgears)
       {
           curgear++;
       }
       else
       {
           cout<<"Max Gear up"<<endl;
       }
   }
   void geardown()
   {
       if(curgear>0)
       {
           curgear--;
       }
       else
       {
           cout<<"Max gear is down"<<endl;
       }
   }
   void inspeed()
   {
       if(curspeed<maxspeed)
       {
           curspeed+=10;
       }
       else
       {
           cout<<"Maximum speed reached"<<endl;
       }
   }
   void despeed()
   {
       if(curspeed>0)
       {
           curspeed-=10;
       }
       else
       {
           cout<<"Speed is zero"<<endl;
       }
   }
   int setgear()
   {
       return curgear;
   }
   int setspeed()
   {
       return curspeed;
   }
   vehicle()
   {
       numwheels=4;
       color="Black";
       maxspeed=150;
       maxgears=5;
       curgear=0;
       curspeed=0;
   }

};

int main()
{
    vehicle car;
    int choice=0;
    while(choice!=7)
    {
        cout<<"1.Start\n2.Stop\n3.Gear up\n4.Gear down\n5.Increase speed\n6.Decrease speed\n7.Exit"<<endl;
        cout<<"Enter a choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            car.startcar();
            break;
        case 2:
            car.stopcar();
            break;
        case 3:
            car.gearup();
            cout<<"Current Gear:"<<car.setgear()<<endl;
            break;
        case 4:
            car.geardown();
            cout<<"Current Gear:"<<car.setgear()<<endl;
            break;
        case 5:
            car.inspeed();
            cout<<"Current Speed:"<<car.setspeed()<<endl;
            break;
        case 6:
            car.despeed();
            cout<<"Current Speed:"<<car.setspeed()<<endl;
            break;
        case 7:
            cout<<"Exit"<<endl;
        default:
            cout<<"Enter a correct choice!";
            break;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;

class Date
{
   private:
   int day;
   int month;
   int year;

   public:
   Date(int d,int m,int y){
    day=d;
    month=m;
    year=y;
   }

   void showdate(){
    try{
        if(day>31 || day<0)
        throw day;
        else if(month>12 || month<0)
        throw month;
        else
            cout<<"DATE:"<<day<<"/"<<month<<"/"<<year<<endl;
    }
    catch(int e){
        cout<<"Exception occured!"<<"day or month is not valid"<<e<<endl;
    }
   }
};
int main(){
    int d,m,y;
    cout<<"enter date:";
    cin>>d;
    cout<<"Enter month:";
    cin>>m;
    cout<<"Enter year:";
    cin>>y;
    Date d1(d,m,y);
    d1.showdate();
    return 0;
}
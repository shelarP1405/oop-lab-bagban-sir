#include<iostream>
#include<string>
using namespace std;
class  DOB{
    private:
    int date;
    int month;
    int year;
    public:
    DOB(int d,int m,int y){
        date=d;
        month=m;
        year=y;
    }
    void showdate(){
        cout<<"Date of birth:"<<date<<"/"<<month<<"/"<<year<<endl;
    }
};

class Subject{
   private:
   string name;
   int max_marks;
   int marks_obtained;
   public:
   Subject(string n,int max,int marks){
    name=n;
    max_marks=max;
    marks_obtained=marks;
   }

   void displayresult(){
    cout<<"Subject name"<<name<<endl;
    cout<<"Max Marks:"<<max_marks<<endl;
    cout<<"Marks obtained"<<marks_obtained<<endl;
   }
};

class Person
{
    private:
    string name;
    DOB date;
    Subject *mysubject;
    public:
    Person(string n,int d,int m,int y,string subject_name,int max,int marks):name(n),date(d,m,y)
    {
        mysubject=new (subject_name,max,marks);
    }

    void display(){
        cout<<"Name:"<<name<<endl;
        date.showdate();
        mysubject->displayresult();
    }
};

void information(){
    string n,sn;
    int d,m,y,max,marks;
    cout<<"Enter information"<<endl;
    cout<<"Enter name";
    cin>>n;
    cout<<"Enter date of birth:"<<endl;
    cout<<"Enter date:"<<endl;
    cin>>d;
    cout<<"Enter month:"<<endl;
    cin>>m;
    cout<<"Enter year:"<<endl;
    cin>>y;
    cout<<"Enter subject:"<<endl;
    cin>>sn;
    cout<<"Enter maximum marks:"<<endl;
    cin>>max;
    cout<<"Enter obtained marks:"<<endl;
    cin>>marks;
    Person p(n,d,m,y,sn,max,marks);
    p.display();
}
int main(){
     int choice;
     while(choice<2){
        cout<<"1.Add information and display"<<endl<<"2.Exit"<<endl;
        cout<<"enter choice:";
        cin>>choice;

        switch(choice){
            case 1:
            information();
            break;
            case 2:
            cout<<"Exit"<<endl;
            break;
            default:
            cout<<"Enter valid option"<<endl;
        }
     }
return 0;
}
/* name(n): This initializes the name member variable of the Person class with the value passed as n.
date(d, m, y): This initializes the date member variable of the Person class with the provided day, month, and year values using the DOB constructor.
mysubject = new Subject(subject_name, max, marks): This dynamically allocates memory for a Subject object and initializes it with the provided subject name, maximum marks, and marks obtained. Then, the pointer mysubject points to this dynamically allocated Subject object
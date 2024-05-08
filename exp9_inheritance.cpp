#include<iostream>
#include<string>
using namespace std;
// Base class
class Person{
    protected:
    string name;
    int age;
    public:
    void setdata(string n,int a){
       name=n;
       age=a;
    }

    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
    }
};
// derived class customer
class customer:  virtual public Person
{
    protected:
    int customerId;
    public:
    void setdata(int cid){
       customerId=cid;
    }

    void display(){
        Person::display();
        cout<<"customer Id:"<<customerId<<endl;
    }
};
// class Employee is derived class
class Employee :virtual public Person // because of virtual keyword class Person is only base class for class customer & employee
{
   protected:
   string empid;
    public:
   void setdata(string eid){
       empid=eid;
   }

   void display(){
    Person::display();
    cout<<"Employee Id"<<empid<<endl;
   }
};
//derived class Employeecustomer
class Employeecustomer :public customer,public Employee
{
    public:
    void setdata(string n,int a,int cid,string eid){
         customer::setdata(cid);
         Employee::setdata(eid);
         Person::setdata(n,a);
    }

    void display(){
        cout<<"Employee-customer Information:"<<endl;
        customer::display();
        Employee::display();
    }
};
int main(){
     // creating an Employeecustomer object
     Employeecustomer ec;

     // setting data
     ec.setdata("john Doe",30,1001,"E001");

     // displaying information
     cout<<"displaying Employee-customer information:"<<endl;
     ec.display();
return 0;
}
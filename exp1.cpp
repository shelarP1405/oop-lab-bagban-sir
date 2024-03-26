#include <iostream>
using namespace std;

struct person
{
private:
    string name;
    string address;
    string mobile_no;
    string birth_date;
public:
    void setdetails(string namep,string add,string mob_no,string dob)
    {
        name=namep;
        address=add;
        mobile_no=mob_no;
        birth_date=dob;
    }
    string getname()
    {
        return name;
    }
    string getaddress()
    {
        return address;
    }
    string getmobileno()
    {
        return mobile_no;
    }
    string getdob()
    {
        return birth_date;
    }
};

struct student
{
private:
    string prn;
    int avg_marks;
public:
    void setprn(string prnno)
    {
        prn=prnno;
    }
    void setmarks(int marks)
    {
        avg_marks=marks;
    }
    string getprn()
    {
        return prn;
    }
    int getmarks()
    {
        return avg_marks;
    }
};

struct employee
{
private:
    string id;
    string designation;
    int salary;
public:
    void setemdetails(string emid,string desg)
    {
        id=emid;
        designation=desg;
    }
    void setsalary(int sal)
    {
        salary=sal;
    }
    string getid()
    {
        return id;
    }
    string getdesg()
    {
        return designation;
    }
    int getsalary()
    {
        return salary;
    }
};

int main()
{
    person p;
    student s;
    employee e;
    string name,add,mob_no,dob,prn,id,desgn;
    int marks,salary;
    cout<<"Enter a person Details:"<<endl;
    cout<<"Enter a name:";
    cin>>name;
    cout<<"Enter a address:";
    cin>>add;
    cout<<"Enter a mobile number:";
    cin>>mob_no;
    cout<<"Enter a Date of birth:";
    cin>>dob;
    cout<<"Enter a Student Details:"<<endl;
    cout<<"Enter a PRN number:";
    cin>>prn;
    cout<<"Enter a Average marks:";
    cin>>marks;
    cout<<"Enter a Employee Details:"<<endl;
    cout<<"Enter a Employee id:";
    cin>>id;
    cout<<"Enter a Designation:";
    cin>>desgn;
    cout<<"Enter a Salary:";
    cin>>salary;
    p.setdetails(name,add,mob_no,dob);
    s.setprn(prn);
    s.setmarks(marks);
    e.setemdetails(id,desgn);
    e.setsalary(salary);
    cout<<"_"<<endl;
    cout<<"Person Details:"<<endl;
    cout<<"Name:"<<p.getname()<<endl;
    cout<<"Address:"<<p.getaddress()<<endl;
    cout<<"Date of birth:"<<p.getdob()<<endl;
    cout<<"Mobile number:"<<p.getmobileno()<<endl;
    cout<<"_"<<endl;
    cout<<"Student Details:"<<endl;
    cout<<"PRN number:"<<s.getprn()<<endl;
    cout<<"Average Marks:"<<s.getmarks()<<endl;
    cout<<"_"<<endl;
    cout<<"Employee Details:"<<endl;
    cout<<"Employee ID:"<<e.getid()<<endl;
    cout<<"Designation:"<<e.getdesg()<<endl;
    cout<<"Salary:"<<e.getsalary()<<endl;
    cout<<"_"<<endl;
    return 0;
}
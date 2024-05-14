#include<iostream>
#include<string>
using namespace std;

class Person
{
    private:
    string person_name;
    string person_Id;
    public:

    Person(string p_name,string p_id){
        person_name=p_name;
       person_Id=p_id;
    }
    void display(){
        cout<<"Name:"<<person_name<<endl;
        cout<<"person ID:"<<person_Id;
    }
};
int main(){
        string p_name,p_id;
        cout<<"Enter person name:";
        getline(cin,p_name);
        cout<<"Enter person ID:";
        getline(cin,p_id);
        try{
            if(p_name.empty())
            throw p_name;
            else{
                Person p(p_name,p_id);
                p.display();
            }
        }
        catch(string e){
            cout<<"Entered name is NULL";
        }
return 0;
}
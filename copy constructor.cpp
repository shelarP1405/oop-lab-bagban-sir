#include<iostream>
using namespace std;
class number
{
	private:
	int a;
	public:
	number()
	{
		a=0;
	}
	number(int n)
	{
		a=n;
	}
	
	number(number &obj){
		cout<<"copy constructor invoked:"<<endl;
		a=obj.a;
	}
	void display(){
		cout<<"value of a is:"<<a<<endl;
	}
};
int main(){
	number x,y,z(45);
	x.display();
	y.display();
	z.display();
	number z1(z); // z1 is act same as z or x or y  also copy constructor is invoked
	z1.display();
}

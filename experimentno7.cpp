#include<iostream>
using namespace std;
class complex{
	int r,i;
	public:
	void setdata(){
		cout<<"Enter real and Imaginary:";
		cin>>r>>i;
	}
	
	void display1(){
		cout<<"\n"<<r<<"+i"<<i;
	}
	
	void display2(){
		cout<<"\n"<<r<<"-i"<<i;
	}
	complex operator+(complex bb){
		complex cc;
		cc.r=r+bb.r;
		cc.i=i+bb.i;
		return cc;
	}
	
	complex operator-(complex bb){
		complex dd;
		dd.r=r-bb.r;
		dd.i=i-bb.i;
		return dd;
	} 
};
int main()
{
	complex aa,bb,cc,dd;
	aa.setdata();
	bb.setdata();
	cc=aa+bb;
	dd=aa-bb;
	cc.display1();
	dd.display2();
	return 0;
}

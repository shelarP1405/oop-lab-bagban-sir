#include<iostream>
#include<string>
using namespace std;

template<typename T>
class Stack{
   private:
   T data[20];
   int size;
   int top;
   public:
   Stack(int n){
    size=n;
    top=-1;
   }

    void push(T ele){
        if(top==size-1)
        cout<<"stack is full:";
        else{
            top++;
            data[top]=ele;
            cout<<"data is inserted sucessfully:"<<endl;
        }
        
    }

    T pop(){
    	T poped;
        if(top==-1){
            cout<<"stack is empty:";
        }
        else{
        poped=data[top];
            top--;

        }
        return poped;
    }

    void display()
        {
        	int i;
                if(top==-1)
                {
                        cout<<"Stack is empty...";
                }
                else
                {
                        cout<<"Stack elements : ";
                        for(i=0;i<=top;i++)
                        {
                                cout<<data[i]<<"\t";
                        }
                        cout<<endl;
                }
        }
};
int main(){
    int n;
    cout<<"Enter stack elements:";
    cin>>n;
	Stack<string>s1(n);// here we have to change int/float/char/string

     int choice;
     string poped; // here we have to change int/float/char/string
     string ele;  // here we have to change int/float/char/string
     do{
        cout<<"1.push\n2.pop\n3.display\n4.exit"<<endl;
     
     cout<<"Enter your choice";
     cin>>choice;

     switch(choice){
        case 1:
        cout<<"Enter value to push:";
        cin>>ele;
        s1.push(ele);
        break;

        case 2:
         poped=s1.pop();
        cout<<"Poped element is "<<poped<<endl;
        break;

        case 3:
        s1.display();
        break;
        case 4:
        exit(0);
        break;

     }
     }while(choice!=4);
return 0;
}

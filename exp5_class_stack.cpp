#include<iostream>

using namespace std;

class Stack
{
private:
        int stack_array[10];
        int top;
        int size;
        int isEmpty()
        {
                if(top==-1)
                {
                        return -1;
                }
                else
                {
                        return 1;
                }
        }
        int isFull()
        {
                if(top==size-1)
                {
                        return -1;
                }
                else
                {
                        return 1;
                }
        }

    public:

        Stack()
        {
                top=-1;
                size=10;
        }

        Stack(int n)
        {
                size=n;
        }

        int push(int data)
        {
                if(isFull()==1)
                {
                        top++;
                        stack_array[top]=data;
                }
                else
                {
                        cout<<"Stack is full..."<<endl;
                }
                cout<<data<<" is inserted..."<<endl;
                return 0;
        }

        int pop()
        {
                int poped_ele;
                if(isEmpty()==1)
                {
                        poped_ele=stack_array[top];
                        top--;
                }
                else
                {
                        cout<<"Stack is empty..."<<endl;
                }
                return poped_ele;
        }

        int display()
        {
                if(top==-1)
                {
                        cout<<"Stack is empty...";
                }
                else
                {
                        cout<<"Stack elements : ";
                        for(int i=0;i<=top;i++)
                        {
                                cout<<stack_array[i]<<"\t";
                        }
                        cout<<endl;
                }
                return 0;
        }
};

int main()
{
Stack s1;
int poped=0;
int choice;
do{
     cout<<"1.push\n2.pop\n3.display\n4.exit"<<endl;
     
     cout<<"Enter your choice";
     cin>>choice;
     switch(choice){
        case 1:
        int data;
        cout<<"Enter value to push:"<<endl;
        cin>>data;
        s1.push(data);
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
     }
}while(choice!=4);
return 0;
}

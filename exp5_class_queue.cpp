#include<iostream>
using namespace std;
 
class Queue
{
private:
        int front;
        int rear;
        int size;
        int Queue_array[10];
        int isempty()
        {
                if(front==-1 && rear==-1)
                {
                        return -1;
                }
                else
                {
                        return 1;
                }
        }
        int isfull()
        {
                if(rear==size-1)
                {
                        return -1;
                }
                else
                {
                        return 1;
                }
        }
public:
        Queue()
        {
         front=-1;
        rear=-1;
        size=10;
		}
        int enqueue(int data)
        {
        if(isfull()==-1)
        {
             cout<<"Queue is Overflow..."<<endl;   
        }
        else if(front==-1 && rear==-1)
                {
                    front=0;
                    rear=0;
                    Queue_array[rear]=data;
                }
        else{
                rear++;
                Queue_array[rear]=data;
        }
                cout<<data<<" element inserted..."<<endl;
}
        int dequeue()
        {
        	 if(isempty()==-1)
        {
                cout<<"Queue is Underflow..."<<endl;
        }
        else if(front==rear)
                {
                        cout<<"Deleted Item: "<<Queue_array[front]<<endl;
                        front=-1;
                        rear=-1;
                }
                else
                {
                        cout<<"Deleted Item: "<<Queue_array[front]<<endl;
                        front=front+1;
                }
		}
        void display()
		{
			 if(isempty()==-1)
        {
                cout<<"Queue is unserflow...";
        }
        else
        {
               cout<<"Queue elements are ";
               for(int i=front;i<=rear;i++)
               {
                        cout<<Queue_array[i]<<" ";
               } 
        }
		}    
};

int main()
{
Queue q1;
int choice;
do{
     cout<<"\n1.enqueue\n2.dequeue\n3.display\n4.exit"<<endl;
     cout<<"Enter your choice"<<endl;
     cin>>choice;
     switch(choice)
     {
        case 1:
        int data;
        cout<<"enter value to enqueue:"<<endl;
        cin>>data;
        q1.enqueue(data);
        break;

        case 2:
        q1.dequeue();
        break;
        
        case 3:
        q1.display();
        break;
        
        case 4:
        exit(0);
     }
}while(choice!=4);
return 0;
}



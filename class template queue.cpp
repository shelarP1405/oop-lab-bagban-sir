#include<iostream>
#include<stdexcept>
using namespace std;
 template <typename T>
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
        Queue(int n)
        {
         front=-1;
        rear=-1;
        size=n;
		}
        void enqueue(T data)
        {
        if(isfull()==-1)
        {
            throw overflow_error("Queue is Overflow...");   
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
        void dequeue()
        {
        	 if(isempty()==-1)
        {
            throw underflow_error("Queue is Underflow...");
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
                throw underflow_error("Queue is unserflow...");
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
	try{
	int n;
	cout<<"enter elements in queue:";
	cin>>n;
Queue<float> q1(n);
int choice;
do{
     cout<<"\n1.enqueue\n2.dequeue\n3.display\n4.exit"<<endl;
     cout<<"Enter your choice"<<endl;
     cin>>choice;
     switch(choice)
     {
        case 1:
        float data;
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
}
 catch(const exception &e){
 	cout<<"exception occured:"<<e.what()<<endl;
 }
return 0;
}


#include <iostream>
#include<stdexcept>
using namespace std;

class stack {
    private:
        int data[20];
        int top;
        int size;
    public:
        stack(int n) {
            if (n <= 0|| n > 20) {
                throw invalid_argument("stack size must be positive and less than 20");
            }
            size = n;
            top = -1;
        }

        void push(int element) {
            if (top == size - 1) {
                throw overflow_error("stack overflow");
            } else {
                top++;
                data[top] = element;
            }
            cout << "element entered successfully" << endl;
        }

        int pop() {
            if (top == -1) {
                throw underflow_error("stack is empty");
            } else {
                int popped = data[top];
                top--;
            }
            return popped;
        }

        void display() {
            if (top == -1) {
                throw underflow_error("stack is empty");
            } else {
                for (int i = 0; i <= top; i++) {
                    cout << data[i] << " ";
                }
                cout << endl;
            }
        }
};

int main() {
    try {
        int n;
        cout << "enter size of stack: ";
        cin >> n;

        stack s1(n);
        int choice, popped, element;
        do {
            cout << "1. push\n2. pop\n3. display\n4. exit" << endl;
            cout << "Enter choice: ";
            cin >> choice;
            switch (choice) {
                case 1:
                    cout << "enter value to push: ";
                    cin >> element;
                    s1.push(element);
                    break;
                case 2:
                    popped = s1.pop();
                    cout << "popped element is " << popped << endl;
                    break;
                case 3:
                    s1.display();
                    break;
                case 4:
                    exit(0);
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
                    break;
            }
        } while (choice != 4);
    } catch (const exception &e) {
        cout << "exception occurred: " << e.what() << endl;
    }
    return 0;
}


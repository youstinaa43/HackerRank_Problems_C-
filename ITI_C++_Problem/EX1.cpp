/*create a class to implement Stack which is an ordered collection of items
in which new data items may be added to or deleted from only one end,
called the top of the stack the addition and deletion in a stack is done from the top of the stack,
the last added element will be first removed from the stack.
That is why the stack is also called Last-in- First-out (LIFO).
A stack is said to be empty or underflow, if the stack contains no elements.
At this point the top of the stack is present at the bottom of the stack.
A stack is overflow when it becomes full, i.e., no other elements can be pushed onto the stack.*/
#include<iostream>

using namespace std;
#define MAX 100

class Stack
{
private:
    int data[MAX];
    int top;
    bool isEmpty()
    {
        return (top==-1);
    }
    bool isFull()
    {
        return (top==MAX-1);
    }
public:
    Stack()
    {
        top=-1;
    }
    void push(int value)
    {
        if(!isFull())
        {
            top++;
            data[top]=value;
        }
        else
            {
            cout << "The stack is full. Cannot push value " << value << "." << endl;
            }

    }
    void pop()
    {
        if(!isEmpty())
        {
            cout << "The popped value is: " << data[top] << endl;
            top--;
        }
        else {
            cout << "The stack is empty. Cannot pop any value." << endl;
        }

    }
    void peek()
    {
        if (!isEmpty()) {
            cout << "The peek value is: " << data[top] << endl;
        } else {
            cout << "The stack is empty. No value to peek." << endl;
        }
    }

    void print()
    {
        if (!isEmpty()) {
            cout << "Stack contents (top to bottom):" << endl;
            for (int i = top; i >= 0; i--) {
                cout << data[i] << endl;
            }
        } else {
            cout << "The stack is empty." << endl;
        }
    }
};

int main()
{
    Stack s1;
    int option,value;
    bool flag=true;
    do
    {

    cout<<"1. Push "<<endl<<"2. Pop"<<endl<<"3. Peek"<<endl<<"4. Print"<<endl<< "5. Exit"<<endl<<"Please select option: ";
    cin>>option;
    switch(option)
    {
    case 1:
        cout<<"Enter the value to push: ";
        cin>>value;
        s1.push(value);
        break;
    case 2:
        s1.pop();
        break;
    case 3:
        s1.peek();
        break;
    case 4:
        cout<<"The content of stack is:"<<endl;
        s1.print();
        break;
    case 5:
        cout<<"Exiting the program."<<endl;
        flag=false;
        break;

    default:
        cout<<"in valid option"<<endl;
    }
    cout<<"==============================================="<<endl;
    }while(flag);


    return 0;
}

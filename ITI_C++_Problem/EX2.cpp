/*create a class to implement Stack which is an ordered collection of items
in which new data items may be added to or deleted from only one end,
called the top of the stack the addition and deletion in a stack is done from the top of the stack,
the last added element will be first removed from the stack.
That is why the stack is also called Last-in- First-out (LIFO).
A stack is said to be empty or underflow, if the stack contains no elements.
At this point the top of the stack is present at the bottom of the stack.
A stack is overflow when it becomes full, i.e., no other elements can be pushed onto the stack.
change stack class to be a dynamic array with the following data member
class Stack
{
private:
int top ;
int size;
int *ptr;
public:
}
don’t forget to implement deep copy in implementa􀆟on of copy constructor .
*/
#include<iostream>

using namespace std;

class Stack
{
private:
    int top ;
    int Size;
    int *ptr;
    bool isEmpty()
    {
        return (top==-1);
    }
    bool isFull()
    {
        return (top==Size-1);
    }
    void resize()
    {
        Size*=2;
        int *newptr=new int[Size];
        for(int i=0;i<=top;i++)
            newptr[i]=ptr[i];
        delete[] ptr;
        ptr=newptr;
        cout<<"Stack resized to "<<Size<<endl;
    }
public:
    Stack(int init=10)
    {
        top=-1;
        Size=init;
        ptr=new int[Size];
    }
    ~Stack()
    {
        delete[] ptr;
    }
    Stack(const Stack& s1)
    {
        Size=s1.Size;
        top=s1.top;
        ptr=new int[Size];
        for(int i=0;i<=top;i++)
            ptr[i]=s1.ptr[i];
    }
    void push(int value)
    {
        if(!isFull())
        {
            top++;
            ptr[top]=value;
        }
        else
            resize();

    }
    void pop()
    {
        if(!isEmpty())
        {
            cout << "The popped value is: " << ptr[top] << endl;
            top--;
        }
        else {
            cout << "The stack is empty. Cannot pop any value." << endl;
        }

    }
    void peek()
    {
        if (!isEmpty()) {
            cout << "The peek value is: " << ptr[top] << endl;
        } else {
            cout << "The stack is empty. No value to peek." << endl;
        }
    }

    void print()
    {
        if (!isEmpty()) {
            cout << "Stack contents (top to bottom):" << endl;
            for (int i = top; i >= 0; i--) {
                cout << ptr[i] << endl;
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


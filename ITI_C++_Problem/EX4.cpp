/*create a class to implement Point with member functions
and constructors to implement the main operations add,sub,print*/

#include<iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;
public:
    Point()
    {
        x=0;
        y=0;
    }
    Point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    Point add(Point p1)
    {
        Point temp;
        temp.x=x+p1.x;
        temp.y=y+p1.y;
        return temp;
    }
    Point sub(Point p1)
    {
        Point temp;
        temp.x=x-p1.x;
        temp.y=y-p1.y;
        return temp;
    }
    void print()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    void input() {
        cout << "Enter x and y coordinates: ";
        cin >> x >> y;
    }

};

int main()
{
    int option;
    bool flag=true;
    Point p1,p2,p3;
    do
    {
        cout << "Enter coordinates for the first point:" << endl;
    p1.input();
    cout << "Enter coordinates for the second point:" << endl;
    p2.input();
    cout<<"1. Add "<<endl<<"2. Subtraction"<<endl<<"3. Print"<<endl<<"4. Exit"<<endl<<"Please select option: ";
    cin>>option;
    switch(option)
    {
    case 1:

        p3=p1.add(p2);
        cout<<"The addtion of two points is:";
        p3.print();
        break;
    case 2:
        p3=p1.sub(p2);
        cout<<"The subtraction of two points is:";
        p3.print();
        break;
    case 3:
        cout<<"The point one is:";
        p1.print();
        cout<<"The point two is:";
        p2.print();
        cout<<"The point three is:";
        p3.print();
        break;
    case 4:
        cout<<"Exiting the program.";
        flag=false;
        break;

    default:
        cout<<"in valid option"<<endl;
    }
    cout<<"==============================================="<<endl;
    }while(flag);


    return 0;
}

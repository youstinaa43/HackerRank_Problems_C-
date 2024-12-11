/*create a class to implement Complex number with member functions and
constructors to implement the main operations add,sub,mult,div*/

#include<iostream>

using namespace std;
class ComplexNumber
{
private:
    double real;
    double imagn;
public:
    ComplexNumber()
    {
        real=0.0;
        imagn=0.0;
    }
    ComplexNumber(double real,double imagn)
    {
        this->real=real;
        this->imagn=imagn;
    }
    ComplexNumber add(ComplexNumber p1)
    {
        ComplexNumber temp;
        temp.real=real+p1.real;
        temp.imagn=imagn+p1.imagn;
        return temp;
    }
    ComplexNumber sub(ComplexNumber p1)
    {
        ComplexNumber temp;
        temp.real=real-p1.real;
        temp.imagn=imagn-p1.imagn;
        return temp;
    }
    ComplexNumber mul(ComplexNumber p1)
    {
        ComplexNumber temp;
        temp.real=real*p1.real-imagn*p1.imagn;
        temp.imagn=real*p1.imagn+imagn*p1.real;
        return temp;
    }
    void div(ComplexNumber p1)
    {
        ComplexNumber temp;
        double denominator=p1.real*p1.real+p1.imagn*p1.imagn;
        if(denominator==0)
        {
            cout<<"Division by zero is not allowed."<<endl;
        }
        else
        {
            temp.real=(real*p1.real+imagn*p1.imagn)/denominator;
            temp.imagn=(imagn*p1.real-real*p1.imagn)/denominator;
            cout<<"The division of two complex numbers is:";
            temp.print();
        }
    }
    void print()
    {
        if(imagn>=0)
        {
            cout<<" "<<real<<"+"<<imagn<<"i"<<endl;
        }
        else
        {
            cout<<" "<<real<<imagn<<"i"<<endl;
        }

    }
    void input() {
        cout << "Enter real number : ";
        cin >> real ;
        cout << "Enter imagen number : ";
        cin >> imagn ;
    }

};

int main()
{
    int option;
    bool flag=true;
    ComplexNumber p1,p2,p3;
    do
    {
        cout << "Enter value for the first complex number:" << endl;
    p1.input();
    cout << "Enter value for the second complex number:" << endl;
    p2.input();
    cout<<"1. Add "<<endl<<"2. Subtraction"<<endl<<"3. Multiply"<<endl<<"4. Division"<<endl<< "5. Exit"<<endl<<"Please select option: ";
    cin>>option;
    switch(option)
    {
    case 1:

        p3=p1.add(p2);
        cout<<"The addtion of two complex numbers is:";
        p3.print();
        break;
    case 2:
        p3=p1.sub(p2);
        cout<<"The subtraction of two complex numbers is:";
        p3.print();
        break;
    case 3:
        p3=p1.mul(p2);
        cout<<"The multiply of two complex numbers is:";
        p3.print();
        break;
    case 4:
        p1.div(p2);
        break;
    case 5:
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


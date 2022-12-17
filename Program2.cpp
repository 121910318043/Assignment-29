/*2. Write a C++ program to convert Complex type to Primitive type.*/
#include<iostream>
using namespace std;
class Complex{
private:
    int real;
    int img;
public:
    Complex(){}
    Complex(int x){real=x;img =x;cout<<"PC called";}
    operator int()
    {
        return real;
    }
    void setData(int x,int y){real=x,img=y;}
};
int main()
{
Complex c1;
c1.setData(3,4);
int x;
x=c1;
cout<<x;
return 0;
}

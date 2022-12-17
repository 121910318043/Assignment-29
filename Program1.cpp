/*1.Write a C++ program to convert Primitive type to Complex type.*/
#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;
public:
    Complex(){}
    Complex(int x){real=x;img=x;cout<<"PC called";}
    void showData()
    {
        cout<<real<<"+"<<img<<"i";
    }
};
int main()
{
    Complex C1;
    int x=5;
    C1=x;
    C1.showData();
    return 0;
}

/*Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.*/
#include<iostream>
using namespace std;
class Rupee
{
private:
    float r;
public:
    Rupee(){}
    Rupee(float x)
    {
        r=x;
    }
    int getRupee()
    {
        return r;
    }
    void display()
    {
        cout<<"Rs"<<r<<"/-";
    }
};
class Dollar
{
private:
    float d;
public:
    Dollar(){}
    Dollar(Rupee &R)
    {
        d = R.getRupee()/82.73;
    }
    Dollar(float x)
    {
        d=x;
    }
    void display()
    {
        cout<<d<<"$";
    }
    operator Rupee()
    {
        return d*82.73;
    }

};
int main()
{
    Rupee R=23;
    Dollar D = R;

    D.display();
    cout<<endl;
    R.display();

    cout<<endl;
    R = D;
    D.display();
    cout<<endl;
    R.display();
    return 0;
}

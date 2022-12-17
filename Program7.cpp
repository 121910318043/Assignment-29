#include<iostream>
/*Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.*/
using namespace std;

class Minute{
private:
    int min;
public:
    Minute(){min=0;}
    Minute(int x)
    {
        min=x;
    }
    void Display(){cout<<min<<" Minutes ";}
};
class Time
{
private:
    int min;
    int sec;
public:
    Time(){}
    Time(int x,int y)
    {
        min = x;
        sec = y;
    }
    void Display()
    {
        cout<<min<<" min "<<sec<<" seconds ";
    }
    operator Minute()
    {
        return min;
    }
};

int main()
{
    Time T1(2,30);
    T1.Display();
    Minute M1;
    M1.Display();
    M1=T1; // Fetch minute from time
    T1.Display();
    M1.Display();
    return 0;
}

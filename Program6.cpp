/*Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
int ) to Time class.*/
#include<iostream>
using namespace std;
class Time{
    int seconds;
public:
    Time(int x)
    {
        seconds = x*60;
    }
    void display()
    {
        cout<<seconds<<" seconds";
    }
};
int main(){
    int duration;
    cout<<"Enter time duration in minutes ";
    cin>>duration;
    Time t1 = duration;
    t1.display();
    return 0;
}

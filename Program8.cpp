/*Create a Rupee class and convert it into int. And Display it.*/
#include<iostream>
using namespace std;
class Rupee{
private:
    int r;
public:
    Rupee()
    {

    }
    Rupee(int x)
    {
        r=10;
    }
    void ShowRupee()
    {
        cout<<r;
    }
    operator int()
    {
        return r;
    }
};
int main()
{
    Rupee R1=10;
    int a;
    a=R1;
    cout<<a;
    return 0;
}

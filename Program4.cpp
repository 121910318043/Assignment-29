#include<iostream>
using namespace std;
class Item;
class Item{
private:
    int a;
    int b;
public:
    Item(){}
    Item(int x,int y){a=x;b=y;}
    void ShowData()
    {
        cout<<a<<" "<<b;
    }
};

class Product{
private:
    int a;
    int b;
public:
    Product(){}
    Product(int x,int y){a=x;b=y;}
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    operator Item()
    {
        Item I1(a,b);
        return I1;
    }
};

int main()
{
    Item i1;
    Product p1;
    p1.setData(3,4);
    i1 = (Item)p1;
    i1.ShowData();
    return 0;
}

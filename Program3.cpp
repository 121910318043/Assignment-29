/*Create a Product class and convert Product type to Item type using constructor*/
#include<iostream>
using namespace std;
class Item;
class Product
{
private:
    int a;
    int b;
public:
    Product(){}
    Product(int x,int y)
    {
        a=x;
        b=y;
    }
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    int* getPointer()
    {
        int *c = (int*)malloc(sizeof(int)*2);
        *(c+0)=a;
        c[1]=b;
        return c;
    }
};
class Item
{
private:
    int a;
    int b;
public:
    Item(){}
    Item(Product &P1)
    {
        int *s = P1.getPointer();
        a = *(s+0);
        b = s[1];
        free(s);
    }
    Item(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<a<<"  "<<b;
    }
};

int main()
{
    Item i1;
    Product p1;
    p1.setData(3,4);
    i1 = p1;
    i1.showData();
    return 0;
}

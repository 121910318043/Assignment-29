#include<iostream>
using namespace std;
class Invent1{
private:
    int i1;
    int i2;
public:
    Invent1(){}
    Invent1(int x,int y)
    {
        i1=x;
        i2=y;
    }
    operator float()
    {
        i1=float(i1);
        i2=float(i2);
        return i1*i2;
    }
    int* getPointer()
    {
        int *p;
        p = (int*)malloc(sizeof(int)*2);
        return p;
    }
};
class Invent2{
private:
    int i1;
    int i2;
public:
    Invent2(){}
    Invent2(Invent1 &I1)
    {
        int *p = I1.getPointer();
        i1 = *(p+0);
        i2 = *(p+1);
        free(p);
    }
    Invent2(int x,int y)
    {
        i1=x;
        i2=y;
    }
    operator float()
    {
        i1=float(i1);
        i2=float(i2);
        return i1*i2;
    }
};
int main()
{
Invent1 s1(4,5);
Invent2 d1;
float tv;
tv=s1;
d1=s1;
cout<<tv;

return 0;
}

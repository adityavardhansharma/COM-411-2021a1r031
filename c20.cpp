#include<iostream>
using namespace std;

class A{
public:
    int x,y,z;
    void input(){
        x=10;
        y=20;

    }
};

class B{
public:
   int r;
   void input1(){
       r=17;
    }
};
class C:public A,public B{
public:
    double z,z1,w1,w2;
    void perimeter(){
        z=2*(x+y);
        z1=2*3.14*r;
        cout<<"Perimeter of rectangle is:"<<z<<endl<<"Perimeter of circle is"<<z1<<endl;;
    }
    void area(){
        w1=3.14*r*r;
        w2=x*y;
        cout<<"Area of rectangle is:"<<w2<<endl<<"Area of circle is:"<<w1<<endl;
    }
};

int main(){
    C c;
    c.input();
    c.input1();
    c.perimeter();
    c.area();
    return 0;
}
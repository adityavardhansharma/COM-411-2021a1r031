#include <iostream>
using namespace std;
class A{
    public:
     double x,y,r,z1,z2,z3,z4;

    void input(){
        x=10;
        y=20;
        r=17;
    }
};

class B:public A{
    public:
    void area(){
        z1=3.14*r*r;
        z2=x*y;
        cout<<"Area of rectangle is:"<<z2<<endl<<"Area of circle is:"<<z1<<endl;
    }

};

class C:public B{
    public:
    void perimeter(){
        z3=2*(x+y);
        z4=2*3.14*r;
        cout<<"Perimeter of rectangle is:"<<z3<<endl<<"Perimeter of circle is"<<z4<<endl;
    }
};
int main(){
    C c;
    c.input();
    c.area();
    c.perimeter();
    return 0;
}
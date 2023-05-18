#include <iostream>
using namespace std;
class A {
protected:
    int x, y,z;
public:
    void input() {
        x = 10;
        y = 20;
    }

    void add() {
        z = x + y;
        cout << "Sum is:" << z << endl;
    }

    void sub() {
        z = y - x;
        cout << "Difference is:" << z<<endl;
    }
};
class B: public A{
public:
    void mul(){
        z=x*y;
        cout<<"Product is: "<<z<<endl;

    }
    void div(){
        z=y/x;
        cout<<"Difference is: "<<z<<endl;
    }

};
int main(){
    B b;
    b.input();
    b.add();
    b.sub();
    b.mul();
    b.div();
}
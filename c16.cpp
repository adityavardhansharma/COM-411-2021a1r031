#include <iostream>
using namespace std;
class A{
protected: int x,y;
public:
    void input(){
    x=10;
    y=20;
}
void add(){
        int z;
    z=x+y;
    cout<<"Sum is:"<< z<<endl;
}
};
class B: public A{
public:
    void sub(){
        int z;
        z=y-x;
        cout<<"Difference is:"<< z;
    }


};
int main()
{
    B b;
    b.input();
    b.add();
    b.sub();

    return 0;
}

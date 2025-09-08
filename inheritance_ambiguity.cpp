#include <iostream>
using namespace std;
class A {
    public:
        void fun() {
            cout << "I am A" << endl;
        }
};

class B {
    public:
        void fun() {
            cout << "I am B" << endl;
        }
};

class C: public A, public B {
    public:
        void fun() {
            cout << "I am C" << endl;
        }
};
int main () {
    C obj1;
    obj1.A::fun();
    return 0;
}
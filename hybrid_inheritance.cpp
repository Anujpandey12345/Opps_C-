#include <iostream>

using namespace std;

class A {
    public:
    void func1() {
        cout << "Inside Function 1" << endl;
    }
};
class D {
    public:
    void func2() {
        cout << "Inside Function 2" << endl;
    }
};
class B: public A {
    public:
    void func3() {
        cout << "Inside Function 3" << endl;
    }
};
class C: public A , public D {
    public:
    void func4() {
        cout << "Inside Function 4" << endl;
    }
};


int main () {
    A object1;
    object1.func1();
    B object2;
    object2.func1();
    object2.func3();
    C object3;
    object3.func1();
    object3.func2();
    object3.func4();
    return 0;
}
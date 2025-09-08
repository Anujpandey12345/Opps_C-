//Function OverLoading

// #include <iostream>
// using namespace std;
// class Love {
//     public:
//         void Poly() {
//             cout << "Hello Anuj !!" << endl;
//         }
//         int Poly(char name, int n) {
//             cout << "Hello Anuj !!" << endl;
//             return n;
//         }
//         void Poly(string name) {
//             cout << "Hello Anuj !!" << endl;
//             return;
//         }
// };
// int main () {
//     Love L;
//     L.Poly();
//     return 0;
// }



//Operator OverLoading


#include <iostream>
using namespace std;
class  B {
    public:
    int a;
    int b;
    public:
        int add() {
            return a + b;
        }

        void operator+ (B &obj) {
            int value1 = this -> a;
            int value2 = obj.a;
            cout << "Value is :: " << value2 - value1 << endl;
        }
        void operator() () {
            cout<< "Hello Anuj This is Bracket" << endl;
        }
};
int main() {
    B obj1, obj2;
    obj1.a = 90;
    obj2.a = 190;
    obj1 + obj2;
    obj1();
    obj2();
    return 0;
}
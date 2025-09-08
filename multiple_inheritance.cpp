#include <iostream>

using  namespace std;
class Animal {
    public:
        int age;
        int weight;

    public:
        void speek() {
            cout << "Animal is Dog" << endl;
        }
};

class Dog {
    public:
        void Dogi() {
            cout << "This is Dog !!" << endl;
        }
};
class Goat: public Animal, public Dog {

};

int main() {
    Goat G;
    G.speek();
    G.Dogi();
}
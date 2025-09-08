#include <iostream>
#include <cstring>
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

class Dog: public Animal {
    public:
        void Bark() {
            cout << "Dog Can Bark" << endl;
        }
};
class Goat: public Dog {

};

int main() {
    Goat G;
    G.speek();
    G.Bark();
}
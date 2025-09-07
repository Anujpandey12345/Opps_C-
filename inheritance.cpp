#include <iostream>
#include <cstring>
using namespace std;
//Parent Class...
class Human {
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge() {
        return this -> age;
    }
    void setAge(int A) {
        this -> age = A;
    }
    void setWeight(int w) {
        this -> weight = w;
    }
    void setHeight(int H) {
        this -> height = H;
    }
};
//Child class.....

class Male: protected Human {
    public:
    string color;
    void sleep() {
        cout << endl;
        cout << "Man is Sleeping :: ";
        cout << endl;
    }
    void Setcolor(string c) {
        this -> color = c;
    }
    int getHeight() {
        return this -> height;
    } 

};


int main () {
    Male onj1;
    cout << onj1.getHeight() << endl;





    // Male object1;
    // object1.setWeight(98);
    // cout << "Your Weight is ::~" << object1.weight << endl;
    // object1.setAge(21);
    // cout << object1.age << endl;
    // object1.Setcolor("Green");
    // cout << object1.color << endl;
    // object1.setHeight(98);
    // cout << object1.height << endl;


    return 0;
}
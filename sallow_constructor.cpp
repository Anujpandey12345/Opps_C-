#include <iostream>
#include <cstring>
using namespace std;
class hero {
    public:
    char *name;
    void print() {
        //Print Function Where We print All the things Which we Want..
        cout<<endl;
        cout<<endl;
        cout << "[ Name is :: " << this -> name << " ]";
        cout<<endl;
        cout<<endl;
    }
    hero() {
        cout << "Simple Constructor Called!!" << endl;
        name = new char[100];
    }
    void SetName(char name[]) {
        strcpy(this -> name, name);
    }

};
int main() {
    //Use Default Copy Constructor......
    hero hero1;
    char name[13] = "Anuj Pandey";
    hero1.SetName(name);
    hero1.print();
    hero hero2(hero1);
    hero2.print();
    hero1.name[2] = 'S';
    hero1.print();
    hero2.print();
    return 0;
}
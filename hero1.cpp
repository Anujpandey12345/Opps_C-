#include <iostream>
#include <cstring>
using namespace std;
class hero {
    public:
    char *name;
    hero() {
        cout << "Simple Constructor Called !!" << endl;
        name = new char[100];
    }
    //Make a Copy Constructor...
    hero(hero& temp) {
        cout << "Copy Constructor Called !" << endl;
        char *ch = new char[strlen(temp.name + 1)];
        strcpy(ch, temp.name);
        this -> name = ch;
    }
    void print() {
        cout << "Name is :: " << this -> name << endl;
    }

    void SetName(char name[]) {
        strcpy(this -> name, name);
    }

};
//Main Function .....
int main() {
    hero h1;
    char name[14] = "Anuj Pandey";
    h1.SetName(name);
    h1.print();
    //Suppose We Create Another Object and Copy the Data; Let's What Happend With Us.
    hero h2(h1);
    h2.print();
    //Let's See we chnage the first letter from the Object One.
    h1.name[0] = 'L';
    h1.print();
    //Now we Print the Second Object(h2) then we seee that this is also change , for this is we want to no changes in object two then we Use **|| SALLOW COPY || 
    h2.print();
    return 0;
}
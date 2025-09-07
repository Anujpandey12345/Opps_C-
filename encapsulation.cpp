#include <iostream>
#include <cstring>
using namespace std;
class Student {
//--- This is Encapsulation Where we achieve the Data member and Fucntion's
    private:
    //Data member's
        string name;
        int age;
        int height;
    
    public:
    //Function
    int getAge() {
        return this -> age;
    }  
};
int main () {
    Student first;
    cout << endl;
    cout << "Ok Ok Ok Ok OK" << endl;
    cout << endl;
    
    return 0;
}
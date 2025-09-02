#include <iostream>
using namespace std;
class hero{
    public:
    int health;
    private:
    char level;
    void print(){
        cout<<"Level is :: " << level << endl;
    }
};
int main(){
    hero ramesh;
    ramesh.health = 100;
    cout<<"The hero is :: " << ramesh.health << endl;
}
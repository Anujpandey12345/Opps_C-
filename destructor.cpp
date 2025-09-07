#include <iostream>
#include <cstring>
using namespace std;
class hero {
    private:
    int health;
    public:
    char level;
    char *name;
    static int timeToComplete;

    void print(){
        cout<<endl;
        cout<<"[ ";
        cout<<"Name is :" << this -> name <<" ,";
        cout<<"Health is : "<< this->health << " ,";
        cout<<"Level is : "<< this->level << " ]";
        cout<<endl;
        cout<<endl;
        cout<<endl;
    }
    hero(hero& temp){
        cout<<"Copy Constructor Called .........."<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    hero() {
        cout<<"Constructor called !!"<<endl;
        name = new char[100];
    }
    //Parameterized Constructor......
    hero(int health, char level){
        cout<<"this -> "<< this << endl;
        this -> health = health;
        this -> level = level;
    }


    int GetHealth(){
        return health;
    }
    char Getlevel(){
        return level;
    }
    void SetHealth(int h){
        health = h;
    }
    void Setlevel(char ch){
        level  = ch;
    }
    void SetName(char name[]){
        strcpy(this -> name, name);
    }
    ~hero() {
        cout<<"Destructor Called" << endl;
    }

};
int hero::timeToComplete = 5;
int main () {
    //Via This.................
    cout << "Time to Complete :: " << hero::timeToComplete << endl;


    //Via Object We also Access the Static Variable......... but This is not recommended.........
    hero h1;
    cout << "Time to Complete :: " << h1.timeToComplete << endl;

    
    //Static Allocation..........
    // hero hero1;
    // //Dynamic Allocation..........  
    // hero *hero2 = new hero;
    // //Manually Call the Destructor.........
    // delete hero2;
    return 0;
}
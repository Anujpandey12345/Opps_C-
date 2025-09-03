#include <iostream>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
    void print(){
        cout<<"Health is : "<< this->health << endl;
        cout<<"Level is : "<< this->level << endl;
    }
    //Default Constructor....
    hero() {
        cout<<"Constructor called !!"<<endl;
    }
    //Parameterized Constructor......
    hero(int health, char level){
        cout<<"this -> "<< this << endl;
        this -> health = health;
        this -> level = level;
    }//Copy Constructor.......
    hero(hero& temp){
        cout<<"Copy Constructor Called .........."<<endl;
        this->health = temp.health;
        this->level = temp.level;
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
};
int main(){


    hero suresh;
    suresh.SetHealth(70);
    suresh.Setlevel('C');
    suresh.print();
    // Copy Constructor Called ..............
    hero ritesh(suresh);
    ritesh.print();






    //For PArameterized ..........
    // hero ramesh(10);
    // cout<<"Address of Ramesh :: " << &ramesh <<endl;
    // ramesh.GetHealth();


    // cout<<"Hi, This is before constructor call";
    // hero ramesh(20);
    // cout<<"Hi, This is After constructor call";
    // //Static Allocation .......... 
    // hero a;
    // a.SetHealth(100);
    // a.Setlevel('S');
    // cout<<"This is a Health : " << a.GetHealth() << endl;
    // cout<<"This is a level : " << a.Getlevel() << endl;

    // //Dynamically Allocation............
    // hero *b = new hero;
    // //by Arrow Fuction.............
    // b->SetHealth(102
    // );
    // b->Setlevel('A');
    // cout<<"This is b Health : " << b->GetHealth() << endl;
    // cout<<"This is b level : " << b->Getlevel() << endl;

    // //By refrence ............
    // (*b).SetHealth(90);
    // (*b).Setlevel('P');
    // cout<<"This is b Health : " << (*b).GetHealth() << endl;
    // cout<<"This is b level : " << (*b).Getlevel() << endl;

}
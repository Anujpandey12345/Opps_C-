#include <iostream>
#include <cstring>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
    char *name;

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
    //Default Constructor....
    hero() {
        cout<<"Constructor called !!"<<endl;
        name = new char[100];
    }
    //Parameterized Constructor......
    hero(int health, char level){
        cout<<"this -> "<< this << endl;
        this -> health = health;
        this -> level = level;
    }//Copy Constructor.......
    // hero(hero& temp){
    //     cout<<"Copy Constructor Called .........."<<endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }
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
};
int main(){

    hero hero1;
    hero1.SetHealth(90);
    hero1.Setlevel('A');
    char name[12] = "Anuj Pandey";
    hero1.SetName(name);
    hero1.print();
    //Use default Copy constructor...
    hero hero2(hero1);
    //Second way to declare..
    //hero hero2 = hero1;
    hero2.print();
    hero1.name[0] = 'N';
    hero1.print();
    hero2.print();
























    // hero suresh;
    // suresh.SetHealth(70);
    // suresh.Setlevel('C');
    // suresh.print();
    // // Copy Constructor Called ..............
    // hero ritesh(suresh);
    // ritesh.print();






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
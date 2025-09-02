#include <iostream>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
    void print(){
        cout<<"Level is : "<< level << endl;
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
    //Static Allocation .......... 
    hero a;
    a.SetHealth(100);
    a.Setlevel('S');
    cout<<"This is a Health : " << a.GetHealth() << endl;
    cout<<"This is a level : " << a.Getlevel() << endl;

    //Dynamically Allocation............
    hero *b = new hero;
    //by Arrow Fuction.............
    b->SetHealth(102
    );
    b->Setlevel('A');
    cout<<"This is b Health : " << b->GetHealth() << endl;
    cout<<"This is b level : " << b->Getlevel() << endl;

    //By refrence ............
    (*b).SetHealth(90);
    (*b).Setlevel('P');
    cout<<"This is b Health : " << (*b).GetHealth() << endl;
    cout<<"This is b level : " << (*b).Getlevel() << endl;

}
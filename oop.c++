#include<iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter the First Number :: ";
    cin >> num1;
    cout << "Enter the Second Number :: ";
    cin >> num2;
    if(num1 < num2) {
        cout << "Second Number is Greater" << endl;
    }else {
        cout << "First Number is Greater" << endl;
    }
    return 0;
}
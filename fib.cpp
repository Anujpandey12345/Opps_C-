#include <iostream>
using namespace std;
int fib(int n) {
    if(n <= 0) {
        return 1;
    }

    return fib(n-1)+fib(n+2);
}
int main() {
    int n;
    cout << "Enter the Number :: ";
    cin >> n;

    if(n < 0){
        cout << "Number is Negative"<< endl;
    }else{
        cout << "Fibnacci Series is  :: " ;
        for(int i = 0; i < n; i++ ) {
            cout << fib(i) << " ";
        }
        cout << endl;
    }

    return 0;
}
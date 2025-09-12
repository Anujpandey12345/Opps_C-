#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int ArrayLargest(vector<int> &arr) {
    int size = arr.size();
    sort(arr.begin(), arr.end());
    int num = 1;
    for(int i = 0 ; i < size ; i++) {
        if(arr[i] == num && arr[i] >= 1) {
            num++;
        }
    }
    return num;
}
int main() {
    int n;
    cout << "Enter the Number :: " ;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the Array :: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Array is :: ";
    for (int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;

    cout << "Largest Number is :: " << ArrayLargest(arr) << endl;

}
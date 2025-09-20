#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};
int main() {
    Node *head, *tail;
    tail = head = NULL;
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5;
    //Insert at the END;

    for(int i = 0; i < n; i++) {
        //LinkedList is Empty..
        if(head == NULL) 
        {
            head = new Node(arr[i]);
            tail = head;
        }


    //LinkedList is Exist..
        else 
        {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp->next;
    }
    cout << endl;
    return 0;
}
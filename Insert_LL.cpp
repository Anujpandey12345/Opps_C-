#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
int main() {
    Node *head;
    head = NULL;
    int arr[5] = {3, 4, 9, 12, 21};
    for(int i = 0; i < 5; i++) {
        //Insert At the Start of the Linked List;;
    //Linked List Does not Exist
        if(head == NULL){
        head = new Node(arr[i]);
        }
    
    //Linked List Exist
        else{
            Node *temp;
            temp = new Node(arr[i]);
            temp -> next = head;
            head = temp;
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
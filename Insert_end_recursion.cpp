#include <iostream> 

using namespace std;
class Node {
    public:
    int data;
    Node *next;

    Node (int value) {
        data = value;
        next = NULL;
    }
};

Node* CreateLinkedList(int arr[], int index, int size) {
    if(index == size) {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index+1, size);
    return temp;
}
int main() {
    Node *head;
    head = NULL;
    int arr[] = {2, 4, 6, 8, 10};
    int size = 5;
    head = CreateLinkedList(arr,0,size);

    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp->next;
    }
    cout << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Node {
   public:
   int data;
   Node* next;
  
   Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

void printLL(Node* head){
    while(head != NULL){
      cout<<head->data<<" ";
      head = head->next;
    }
}

Node* insertHead(Node* head,int val){
    Node* new_Node = new Node(val, head);
    return new_Node;
}

int main() {
    
    vector<int> arr = {12, 8, 5, 7};
    int val = 100;

    
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);

    
    head = insertHead(head, val);

   
    printLL(head);

    return 0;
}
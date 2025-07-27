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

Node* insertTail(Node* tail,int val){
   Node* new_Node = new Node(val);
   tail->next = new_Node;
   tail = new_Node;
   return tail;
}

int main() {
    
    vector<int> arr = {12, 8, 5, 7};
    int val = 100;

    
    Node* head = new Node(arr[0]);
    Node* tail = head;

    
    tail = insertTail(tail,arr[1]);
    tail = insertTail(tail,arr[2]);
    tail = insertTail(tail,arr[3]);
    head = insertHead(head, val);

   
    printLL(head);

    return 0;
}
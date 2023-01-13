#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
    Node(){
        this->data=0;
        this->next=nullptr;
    }
    Node(int data,Node* next){
        this->data = data;
        this->next = next;
    }
};
class linkedlist{
    Node* head;
    Node* tail;
    public:
    linkedlist(){
        this->head = nullptr;
        this->tail = nullptr;
    }
     void insert_at_front(int data){
        Node* n = new Node(data);

        if(head == nullptr){
            head = n;
            tail = n;
            return;
        }

        n->next = head;
        head = n;
    }
    void print(){
      Node* temp = head;
        while(temp){

            cout<<temp->data<<" ";
            temp = temp->next;
        }
        
    }
    
};
int main(){
    linkedlist ll;
    Node* root = new Node;
    
    ll.insert_at_front(2);
    ll.insert_at_front(3);
    ll.insert_at_front(4);
    ll.print();
    
    return 0;
}
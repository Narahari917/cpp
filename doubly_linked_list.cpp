#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    Node(){
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int d, Node* next, Node* prev){
        this->data = d;
        this->next = next;
        this->prev = prev;
    }
};
class LinkedList{
    Node* head;
    Node* tail;
    public :
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    void insert_at_position(int k,int data){
        Node* temp = new Node(data);
        Node* new_head = head;
        k--;
        while(k>1){
            new_head  = new_head->next;
            k--;
        }
        temp->next = new_head->next;
        new_head->next = temp;
        temp->prev = new_head;
        
         
    }
    void insert_after_position(int k,int data){
        Node* temp = new Node(data);
        Node* new_head = head;
        
        while(k>1){
            new_head  = new_head->next;
            k--;
        }
        temp->next = new_head->next;
        new_head->next = temp;
        temp->prev = new_head;
        
         
    }
    void insertAtHead(int data){
        Node* new_node = new Node(data);
        if(head ==NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        head->prev = new_node;
        new_node->next = head;
        head = new_node;
    }
    void deleteNode(int k){
    Node* temp = head;
        if(k==1){
            head = temp->next;
            head->prev = nullptr;
        }
        k--;
        while(k>1){
            temp = temp->next;
            k--;
        }
        if(temp->next==nullptr){
            tail = tail->prev;
            tail->next = nullptr;
        }
        temp->next = temp->next->next;
        temp->next->prev = temp;
    }
   
    void insertAtTail(int data){
        if(head == NULL){
            head = new Node(data);
            tail = head;
            return;
        }
        Node* temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
     void display(){
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<endl;
    }

};
int main(){
    LinkedList ll;
    ll.insertAtHead(1);
    ll.insertAtHead(2);
    ll.insertAtHead(3);
    ll.insertAtHead(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insert_at_position(2,7);
    ll.insert_at_position(4,8);
    ll.insert_after_position(2,9);
    ll.display();
    ll.deleteNode(1);
    ll.deleteNode(2);
    ll.display();
    return 0;
}
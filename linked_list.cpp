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
    void insert_before_position(int data,int k){
        Node* temp = new Node(data);
        Node* first = head;
        while(k>2){
           first = first->next;
            k--;
        }
        temp->next = first->next;
        first->next = temp;
       
        
    }
    void deleteNode(int k){
    Node* temp = head;
        if(k==1){
            head = temp->next;
            return;
        }
        k--;
        while(k>1){
            temp = temp->next;
            k--;
            if(temp == NULL ){
            cout<<"position error"<<endl;
        }
        }
        
        if(temp->next->next==nullptr){
            tail = temp;
            tail->next = nullptr;
            return;
        }
        temp->next = temp->next->next;
        
    }
   
    void insert_at_end(int data){
        Node* temp = new Node(data);
      if (head == nullptr){
        head = temp;
        tail = temp;
        return;
      }
      tail->next = temp;
      tail = temp;
      
    }
     void insert_at_middle(int data,int k){
        Node* temp = new Node(data);
        Node* first = head;
        
        while(k>1){
           first = first->next;
            k--;
            if(first->next == nullptr){
                insert_at_end(data);
                return;
            }
        }
        temp->next = first->next;
        first->next = temp;
       
        
    }
    
};
int main(){
    linkedlist ll;
    Node* root = new Node;
    int k;
    cin>>k;
    ll.insert_at_front(2);
    ll.insert_at_front(3);
    ll.insert_at_front(4);
    ll.insert_at_middle(1,k);
    ll.insert_before_position(6,k);
    ll.insert_at_end(5);
    ll.deleteNode(2);
    ll.deleteNode(1);
    ll.deleteNode(4);
    ll.print();
    
    return 0;
}
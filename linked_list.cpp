#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node() {
        data = 0;
        next = nullptr;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
    Node(int data, Node* next){
            this->data = data;
            this->next = next;
    
}
class linkedlist{
    public:
    Node* head;
    linkedlist() {
}
int main(int argc, char){
    return 0;
}
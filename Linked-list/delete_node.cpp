#include<bits/stdc++.h>
using namespace std;
// #include "Node.cpp"

class Node{

    public:

    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};


Node * takeInput(){
    int data ;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node * newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{ 
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

void print(Node *head){

    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;

    }
}

Node* deleteNode(Node *head,int i){

    Node* temp = head;
    if(i==0){
        head = temp->next;
        free(temp);
        return head;
    }
    int counter = 0;
    
    while(temp->next != NULL && counter<i-1){
        temp = temp->next;
        counter++;
    }
    if(temp->next != NULL){
        Node * a = temp->next;
        Node * b = a->next;
        temp->next = b;
        delete a;
    }
    return head;

}



int main(){
    Node* head = takeInput();
    print(head);

    int i,data;
    cin>>i>>data;

    head = deleteNode(head,i);
    print(head);

}
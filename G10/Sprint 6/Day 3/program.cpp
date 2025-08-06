#include <iostream>
using namespace std;

//Linkedlist - collection of nodes, where each node is having data and address to another node.

struct Node{
    int data;
    Node* next;
};



int main(){

    Node* head = new Node(); // [ | ]
    head->data = 45;
    head->next = NULL;

    // cout <<head<<endl;

    //[ 45 | NULL ]

    Node* second = new Node(); // [ | ]
    second->data = 60;
    second->next = NULL;

    //[ 60 | NULL ]

    //node1 has connected with node2
    head->next = second;

    //[ 45 | 0x1ef19b40370 ]----->[ 60 | NULL ]

    cout <<"HEAD-->";
    while(head!=NULL){
        cout <<head->data<<"-->";
        head = head->next;
    }
    cout <<"NULL"<<endl;





}
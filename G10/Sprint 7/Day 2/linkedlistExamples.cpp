#include <iostream>
using namespace std;

// struct Node{
//     int data;
//     Node* next;
// };

class Node{
    public:
        int data;
        Node* next;

    Node(int value){
        this->data = value;
        this->next = NULL;
    }
};

class Linkedlist{
    private:
        Node* head;

    public:
        Linkedlist(){
            head = NULL;
        }
};

int main(){


    //Example through struct.
    //head node
    // Node* node1 = new Node(); // [ garbageValue | garbageAddress ]
    // node1->data = 45;
    // node1->next = NULL;
    // //[ 45 | NULL ]

    // Node* node2 = new Node(); // [ garbageValue | garbageAddress ]
    // node2->data = 50;
    // node2->next = NULL;
    // //[ 50 | NULL ]

    // // cout <<node2<<endl;

    // node1->next = node2;
    // //[ 45 | 0x223ea570560 ]------>[ 50 | NULL ]

    // //tail node
    //  Node* node3 = new Node(); // [ garbageValue | garbageAddress ]
    //  node3->data = 55;
    //  node3->next = NULL;

    //  //[ 55 | NULL ]
    // node2->next = node3;
    //  //       head                                                  tail
    // //[ 45 | 0x223ea570560 ]------>[ 50 | 0x223ea5705563 ]---->[ 55 | NULL ]

    // Node* temp = node1;

    // while(temp!=NULL){
    //     cout <<temp->data<<" ";
    //     temp = temp->next;
    // }
    // cout <<endl;
    // cout <<node1->data<<endl;

    //-------------------------------------------------


    // //Example through Class:
    // Node* head = new Node(45); // [ 45 | NULL ]

    // Node* second = new Node(50); // [ 50 | NULL ]

    // head->next = second;
    // //[ 45 | 0x223ea570560 ]------>[ 50 | NULL ]

    // //tail node
    // Node* third = new Node(55); // [ 55 | NULL ]
    
    // second->next = third;

    //  //       head                                                  tail
    // //[ 45 | 0x223ea570560 ]------>[ 50 | 0x223ea5705563 ]---->[ 55 | NULL ]

    // Node* temp = head;

    // while(temp!=NULL){
    //     cout <<temp->data<<" ";
    //     temp = temp->next;
    // }
    // cout <<endl;
    // cout <<head->data<<endl;



    

}
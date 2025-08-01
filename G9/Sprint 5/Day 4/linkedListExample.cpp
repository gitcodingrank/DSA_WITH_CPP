#include <iostream>
using namespace std;

//let's use struct for creating linkedlist node
struct Node{
    int data;
    Node* next;
};

int main(){

    Node* head = new Node();
    head->data = 45;
    head->next = NULL;

    //Above, we have create one node: [ 45 | NULL ]

    Node* second = new Node();
    second->data = 56;
    second->next = NULL;

    //Above, we have create another node: [ 56 | NULL ]

    //Let's combine above two nodes:

    head->next = second;

    //                                                                45343      
    //Till structure of above linkedlist nodes: [ 45 | 45343 ]---->[ 56 | NULL ]

    //while loop for checing
    Node* temp = head;
     //                                       45343      
    //Temp Structure: [ 45 | 45343 ]---->[ 56 | NULL ]

    while(temp!=NULL){
        cout << temp->data<<"-->";
        temp = temp->next;
    }
    cout <<"NULL"<<endl;




}
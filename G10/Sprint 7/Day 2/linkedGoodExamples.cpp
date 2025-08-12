#include <iostream>
using namespace std;

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
        void insertAtBeginning(int value){
            Node* newNode = new Node(value); //[value | NULL]
            newNode->next = head;
            head = newNode;
        }

        void display(){
            
            if(head==NULL) {
                cout <<"Linkedlist is empty..."<<endl;
                return;
            }
            
            Node* temp = head;

            while(temp!=NULL){
                cout <<temp->data<<"->";
                temp = temp->next;
            }
            cout <<endl;
        }

};

int main(){

    Linkedlist list; //head = NULL
    list.insertAtBeginning(45);
    list.insertAtBeginning(60);
    list.insertAtBeginning(89);
    list.display();

}
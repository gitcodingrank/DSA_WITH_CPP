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

        void insertAtLast(int value){
            Node* newNode = new Node(value); //[value | NULL]
            
            if(head == NULL){
                head = newNode;
                return;
            }
            

            Node* temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }

        void insertAtPosition(int pos, int value){
            if(pos < 0){
                cout <<"Invalid Position"<<endl;
                return;
            }

            if(pos == 1){
                insertAtBeginning(value);
                return;
            }

            Node* newNode = new Node(value);

            Node* temp = head;
            for(int i=1;i<pos-1 && temp!=NULL;i++){
                temp = temp->next;
            }

            newNode->next = temp->next;
            temp->next = newNode;

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
    list.insertAtLast(67);
    list.insertAtLast(89);
    list.insertAtPosition(3, 99);
    list.display();

}
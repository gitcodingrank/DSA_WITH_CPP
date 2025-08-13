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

class LinkedList{

private:
	Node* head;
    Node* tail;

    int size;

public:
	//constructor 
	LinkedList(){

		//empty LinkedList
		head = NULL;
        tail = NULL;
        size = 0;

	}

    //T.C -> O(1)
    void insertAtBeginning(int value){
        Node* newNode = new Node(value);
           
        if(head == NULL){
                head= newNode;
                tail = newNode;
        }
        else{
                newNode -> next = head;
                head = newNode;
        }
        size++;
    }

    //O(1)
    void insertAtLast(int value){
        
         //creating new Node
        Node* newNode = new Node(value);

        if(head == NULL){
                head = newNode;
                tail = newNode; 
        }else{
                    
                tail->next= newNode;
                tail = newNode;

        }
	
	    size++;


    }

    void deleteAtBeginning(){
        
        if(head==NULL){
            cout <<"Linkedlist is empty."<<endl;
            return;
        }
        Node* temp = head;
        head = temp->next;
        delete temp;
        size--;
    }

    void deleteAtLast(){
        if(head==NULL){
            cout <<"Linkedlist is empty."<<endl;
            return;
        }

        Node* temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        size--;
    }

    void deleteAtPosition(int pos){
        
        if(pos <= 0){
            cout <<"Invalid Position"<<endl;
            return;
        }

        if(pos == 1){
            deleteAtBeginning();
            return;
        }

        Node* temp = head;
        for(int i=1;i<pos-1 && temp->next!=NULL;i++){
            temp = temp->next;
        }

        Node* deleteNode = temp->next;
        temp->next = deleteNode->next;
        delete deleteNode;

    }

    void display(){
        if(head==NULL) {
            cout <<"Linkedlist is empty."<<endl;
            return;
        }

        Node* temp = head;
        
        cout<<"HEAD->";
        while(temp!=NULL){
            cout <<temp->data<<"->";
            temp = temp->next;
        }
        cout <<"NULL"<<endl;

    }

    int getSize(){
        return this->size;
    }

};

int main(){

    LinkedList list;
    list.insertAtBeginning(45);
    list.insertAtBeginning(78);
    list.insertAtBeginning(90);

    list.insertAtLast(67);
    list.insertAtLast(90);

    //list.deleteAtBeginning();
    list.deleteAtBeginning();
    list.deleteAtLast();

    list.deleteAtPosition(2);

    cout <<list.getSize()<<endl;
    list.display();

}
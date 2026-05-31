#include<iostream>
using namespace std;
class node{
    public : 
    int data;
    node* next;
    node(int d){
        data =d;
        next=NULL;
    }
};
void insertAtFront(node* &head, node* &tail ,int data){
    node*n = new node(data);
    if(head == NULL){
        head = tail = n;

    }
    else{
        n->next = head;
        head =  n;
    }
}
void insertAtEnd(node* &head, node* &tail ,int data){
    node*n = new node(data);
    if(head == NULL){
        head = tail = n;

    }
    else{
        tail->next =  n;
        tail =  n;
    }
}
int lengthLL(node*head){
    int cnt =0;
    while (head!=NULL){
        cnt ++;
            head =head->next;
}
return cnt ;


void insertAtMid(node* &head, node* &tail ,int data ,int pos){
    if (pos==0){
        insertAtFront(head,tail,data);
    }
    else if ( pos >lengthLL(head)){
        insertAtEnd(head , tail, data);
    }
    else{
        node * t =head;
        for(int i =0; i <=pos-1;i++){
            t= t->n next;
        }
        
        node* n = new model(data);
        n->next = t-> next;
        t-> next = n;
    }

void deleteatfront(node* &head , node* &tail)
{
    if (head == NULL){
        return;

    }
    else if (head -> next == NULL){
        delete head;
        head = tail = NULL;
    }
    else {
        node* temp = head;
        head = head->next;

    )
    }
}
    }

    



}

void print (node* head ) {
        while (head!=NULL){
            cout  << head -> data << "-->";
            head =head->next;

        }
        cout << "NULL\n";
    


    
}
int main (){
    node* head = NULL , *tail =NULL;
   /*  insertAtFront(head,tail,1);
    insertAtFront(head,tail,2);
    insertAtFront(head,tail,3);
    insertAtFront(head,tail,4);
    insertAtFront(head,tail,5);
    insertAtFront(head,tail,6);
    insertAtFront(head,tail,7);  *///for insertion at front 7 6 5 4 3 2 1

    
    insertAtEnd(head,tail,1);
    insertAtEnd(head,tail,2);
    insertAtEnd(head,tail,3);
    insertAtEnd(head,tail,4);
    insertAtEnd(head,tail,5);
    insertAtEnd(head,tail,6);
    insertAtEnd(head,tail,7);// for insertion at end 1 2 3 4 5 6 7

    print (head);

    insertAtMid(head , tail , 121 ,5);
        return 0;
}
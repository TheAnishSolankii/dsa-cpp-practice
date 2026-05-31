#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int d){
        data = d;
        next = NULL;
    }
};

void insertAtFront(node* &head, node* &tail, int data){
    node* n = new node(data);;
    if(head == NULL){
        head = tail = n;
    } else {
        n->next = head;
        head = n;
    }
}

void insertAtEnd(node* &head, node* &tail, int data){
    node* n = new node(data);
    if(head == NULL){
        head = tail = n;
    } else {
        tail->next = n;
        tail = n;
    }
}

int lengthLL(node* head){
    int cnt = 0;
    while(head != NULL){
        cnt++;
        head = head->next;
    }
    return cnt;
}

void insertAtMid(node* &head, node* &tail, int data, int pos){
    if(pos == 0){
        insertAtFront(head, tail, data);
    }
    else if(pos >= lengthLL(head)){
        insertAtEnd(head, tail, data);
    }
    else{
        node* t = head;
        for(int i = 0; i <=pos-1; i++){
            t = t->next;
        }

        node* n = new node(data);
        n->next = t->next;
        t->next = n;
    }
}

void print(node* head){
    while(head != NULL){
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL\n";
}
node * mid (node *head){
    node*s = head;
    node* f =head -> next;
    while(f!=NULL && f->next != NULL ){
        f=f->next->next;
        s->next;
    }
    return s;
}

node*mergeSortedLL(node*a,node*b){
    if(a==NULL)
    return b;
    if(b==NULL)
    return a;

    node *nH;
    if(a->data<b->data){
        nH=a;
        nH->next = mergeSortedLL(a->next,b);
    
    }
    else{
        nH=b;
        nH->next=mergeSortedLL(a,b->next);
    }

    return nH;


}


node* mergeSort(node *head){
    if(head == NULL || head->next == NULL){
        return head ;
    }
    //1.Divide/
    node *m = mid(head);
    node*a = head , *b =m->next;
    m->next = NULL;

    //2.SORT
    a=mergeSort(a);
    b=mergeSort(b);

    //3.Merge
    node *nH =mergeSortedLL(a,b);
    return nH;
}   

void deleteAtFront(node* &head,node*&tail){
    if(head==NULL)
    return ;
    else if (head->next ==NULL){
        delete head;
        head = tail  =NULL;

    }
    else {
        node*temp =head;
        head = head -> next;
        delete temp;
    }



}


void deleteAtBack(node *&head ,node * &tail){
    if(head == NULL){
        return ;
    
    }
    else if (head->next == NULL){
        delete head;
        head = tail = NULL;
    
    }
    else{
        node * temp = head;
        while (temp->next != tail){
            temp = temp -> next;
        }
        delete tail;
        temp ->next = NULL;
        tail = temp;
    }

}
void deletionAtMid(node* &head, node* &tail, int pos){
    if(head == NULL) return;

    if(pos == 0){
        deleteAtFront(head, tail);
    }
    else if(pos == lengthLL(head) - 1){
        deleteAtBack(head, tail);
    }
    else{
        node* temp = head;
        for(int i = 0; i < pos-1; i++){
            temp = temp->next;
        }
        node* n = temp->next;
        temp->next = n->next;
        delete n;
    }
}
void reverseLL(node* &head, node* &tail){
    node *p = NULL, *c = head, *n;

    while(c != NULL){
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }

    tail = head;
    head = p;
}
void reverseLLUsingRecursion(node* &head,node* &tail,node * c,node *p=NULL){

    if(c==NULL){
        swap(head,tail);
        return;

    }
    node *n =c->next;
    c->next = p;
    reverseLLUsingRecursion(head,tail,n,c);
}

int main(){
    node* head = NULL, *tail = NULL;
    node*head1=NULL, *tail1 = NULL;
    insertAtEnd(head, tail, 1);
    insertAtEnd(head, tail, 3);
    insertAtEnd(head, tail, 5);
    insertAtEnd(head, tail, 8);
    insertAtEnd(head, tail, 9);



    insertAtEnd(head1, tail1, 2);
    insertAtEnd(head1, tail1, 4);
    insertAtEnd(head1, tail1, 6);
    insertAtEnd(head1, tail1, 7);
  


    print(head);
    print(head1);

    node* nH = mergeSortedLL(head,head1);
    print(nH);
   // node*X =mid(head);
   // cout<< X->data << endl; 


  
    

    return 0;
}
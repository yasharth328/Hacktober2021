#include<iostream>
using namespace std;

class Node{
private:
    int data;
    Node* next;
public:
    Node (int d){
        data=d;
        next=NULL;
    }
friend class LinkedList;
};

class LinkedList{
private:
    Node* head;
public:
    LinkedList(){
        head=NULL;
    }
    void InsertAtBegin(int d){
        Node* n=new Node(d);
        n->next=head;
        head=n;
    }
    void InsertAtEnd(int d){
        if (head==NULL){
            InsertAtBegin(d);
            return;
        }
        Node* n=new Node(d);
        Node* temp=head;
        while (temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
    void InsertAtK(int d,int k){
        if(head==NULL || k==1){
            InsertAtBegin(d);
            return;
        }
        int cnt=1;
        Node* temp=head;
        while(temp->next!=NULL && cnt<k-1){
            cnt++;
            temp=temp->next;
        }
        Node* n=new Node(d);
        n->next=temp->next;
        temp->next=n;
    }
    void DeleteAtBegin(){
        if(head==NULL){
            return;
        }
        Node* n=head;
        head=n->next;
        delete n;
    }
    void DeleteAtEnd(){
        if(head==NULL){
            return;
        }
        if(head->next==NULL){
            DeleteAtBegin();
            return;
        }
        Node* temp=head;
        while (temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    void DeleteAtK(int k){
        if(head==NULL || k==1){
           DeleteAtBegin();
           return;
        }
        int cnt=1;
        Node* temp=head;
        while(temp->next!=NULL && cnt<k-1){
            cnt++;
            temp=temp->next;
        }
        temp->next=temp->next->next;
    }
    void Print(){
        Node* temp=head;
        while (temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void Print(ostream &o){
        Node* temp=head;
        while (temp!=NULL){
            o<<temp->data<<" ";
            temp=temp->next;
        }
        o<<endl;
    }
};

ostream &operator<<(ostream &o, LinkedList &LL){
    LL.Print(o);
    return o;
}

int main(){
    LinkedList LL;
    LL.InsertAtBegin(1);
    LL.InsertAtBegin(2);
    LL.InsertAtBegin(3);
    LL.InsertAtBegin(4);
    LL.InsertAtEnd(5);
    LL.InsertAtEnd(8);
    LL.InsertAtEnd(9);
    LL.InsertAtK(6,3);
    LL.InsertAtK(10,5);
    LL.InsertAtK(7,6);
    cout<<LL;
    LL.DeleteAtBegin();
    cout<<LL;
    LL.DeleteAtEnd();
    cout<<LL;
    LL.DeleteAtK(3);
    cout<<LL;
}


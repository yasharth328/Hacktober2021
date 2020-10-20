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
    void Push(int d){
        Node* n=new Node(d);
        n->next=head;
        head=n;
    }
    void DeleteAtBegin(){
        if (head==NULL) return;
        Node* temp=head;
        head=head->next;
        delete temp;
    }

    void Pop(){
        if (head==NULL) return;
        if (head->next==NULL){
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

    int Top(Node* hd){
        return hd->data;
    }

    int Top(){
       return Top(head);
    }

    int Size(){
        int cnt=0;
        Node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        return cnt;
    }

    bool isEmpty(Node* hd){
        if(hd==NULL) return true;
        else return false;
    }

    bool isEmpty(){
        return isEmpty(head);
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
    LL.Push(1);
    LL.Push(2);
    LL.Push(3);
    LL.Push(4);
    cout<<LL<<endl;
    cout<<LL.Top()<<endl;
    LL.Pop();
    cout<<LL;
    cout<<LL.Size()<<endl;
    cout<<LL.isEmpty();
}

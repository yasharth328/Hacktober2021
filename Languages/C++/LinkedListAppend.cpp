#include<iostream>
using namespace std;

int k, length;

class Node
{
private:
    int data;
    Node* next;
public:
    Node (int d)
    {
        data=d;
        next=NULL;
    }
    friend class LinkedList;
};

class LinkedList
{

public:
    Node* head;
    LinkedList()
    {
        head=NULL;
    }
    void InsertAtBegin(int d)
    {
        Node* n=new Node(d);
        n->next=head;
        head=n;
    }

    int Length(){
        int cnt=0;
        Node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        return cnt;
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

    void OddEven(){
        head=OddEven(head);
    }

    void OddEven
    /*Node* OddEven(Node* hd){
        if(hd==NULL || hd->next==NULL) return hd;
        Node* prev=NULL,*cur = hd , *head=hd;
        int cnt=0;
        while(cur!=NULL && cnt<Length()){
            cnt++;
            if((cur->data)%2==0){
                prev->next=cur->next;
                InsertAtEnd(cur->data);
                cur=prev->next;
            }
            else{
                prev=cur;
                cur=prev->next;
            }
        }
        return head;
    }*/

    void SelectionSort(){
        head=SelectionSort(head);
    }

    Node* SelectionSort(Node* hd){
        if(hd==NULL || hd->next==NULL) return hd;
        Node* smallest=hd,*smallestprev;
        Node* prev=hd,*cur=prev->next;
        while(cur!=NULL){
            if(cur->data<smallest->data){
                smallest=cur;
                smallestprev=prev;
            }
            prev=cur;
            cur=prev->next;
        }
        if(smallest!=hd){
            smallestprev->next=smallest->next;
            smallest->next=hd;
        }
        smallest->next=SelectionSort(smallest->next);
        return smallest;
    }

    void kAppend(Node* hd, int cnt)
    {
        k=k%length;
        if(hd==NULL)return;
        cnt++;
        kAppend(hd->next, cnt);
        cnt = length-cnt+1;
        if(cnt<=k)
        {
            if(cnt==k)
                hd->next=NULL;
                else
            InsertAtBegin(hd->data);
        }
    }


    void Print(ostream &o)
    {
        Node* temp=head;
        while (temp!=NULL)
        {
            o<<temp->data<<" ";
            temp=temp->next;
        }
        o<<endl;
    }

};

ostream &operator<<(ostream &o, LinkedList &LL)
{
    LL.Print(o);
    return o;
}

int main()
{
    LinkedList LL;
    int n;
    length = 0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int vr;
        cin>>vr;
        length++;
        LL.InsertAtEnd(vr);
    }
    LL.OddEven();
    cout<<LL;
}

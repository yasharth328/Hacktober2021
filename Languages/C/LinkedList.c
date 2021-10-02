#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node* GetNode()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}
void insbeg(struct node **list,int x)
{
    struct node *temp;
    temp = GetNode();
    temp->info=x;
    temp->next=*list;
    *list=temp;
}
void insend(struct node **list,int x)
{
    struct node *p,*r;
    if(*list!=NULL)
    {
        p=*list;
    while(p->next!=NULL)
        p=p->next;

    r=GetNode();
    r->info=x;
    r->next=NULL;
    p->next=r;
    }
    else
        insbeg(list,x);

}
void insaft(struct node **list,int y,int x)
{
    struct node *p;
    struct node *q;
    if(*list!=NULL)
    {
        q=*list;
    while(q->info!=y)
        q=q->next;
    p=GetNode();
    p->info=x;
    p->next=q->next;
    q->next=p;
    }
    else
        printf("Void Insertion");
}
int delbeg(struct node **list)
{
    struct node *p;
    int x;
    if(*list!=NULL)
    {
        p=*list;
        *list=p->next;
        x=p->info;
        free(p);
        return x;
    }
    else
        printf("void deletion");
}
int delend(struct node **list)
{
    struct node *p;
    struct node *q;
    q=NULL;
    p=*list;
    int x;
    if(*list==NULL)
        printf("void deletion");
    else
    {
        while(p->next!=NULL)
       {
           q=p;
           p=p->next;
       }
       if(q==NULL)
       {
           delbeg(list);
       }
       else
       {
           q->next=NULL;
           x=p->info;
           free(p);
           return x;
       }
    }

}
int delaft(struct node **list,int y)
{
    struct node *p;
    struct node  *q;
    if(*list!=NULL&&(*list)->next!=NULL)
    {
        q=*list;
        while(q->info!=y)
        {
            q=q->next;
        }
           if(q->next!=NULL)
           {
                p=q->next;
            int x=p->info;
            q->next=NULL;
            free(p);
            return x;

           }
           else
            printf("void deletion");
    }
    else
        printf("void deletion");

}
void count(struct node **list)
{
    struct node *temp;
    temp=*list;
    int count = 0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    printf("Total no. of nodes is %d",count);
}
void traverse(struct node **list)
{
    struct node *t;
    t=*list;
    while(t!=NULL)
    {
        printf("%d\t",t->info);
        t=t->next;
    }
    printf("\n");
}
void main()
{
    struct node *START;
    START = NULL;
    int x;
    insbeg(&START,100);
    insbeg(&START,200);
    insend(&START,300);
    insaft(&START,200,400);
    traverse(&START);
    x=delbeg(&START);
    x=delend(&START);
    x=delaft(&START,400);
    insbeg(&START,700);
    insend(&START,300);
    traverse(&START);
    count(&START);
}

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;

    struct node *current=(struct node *)malloc(sizeof(struct node));
    current->data=20;
    current->link=NULL;
    head->link=current;

    current=(struct node *)malloc(sizeof(struct node));
    current->data=30;
    current->link=NULL;

    head->link->link=current;

    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
    
    printf("\n");
    
    struct node *prev=NULL;
    struct node *next=NULL;
    while(head!=NULL)
    {
        next=head->link;
        head->link=prev;
        prev=head;
        head=next;
    }
    ptr=prev;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}

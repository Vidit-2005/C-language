// wrtie a c program to create 2 single linkj list and creat a third linklist using alternate node of both the liunk list

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node* create(node *head)
{
    int n;
    printf("ENter the number of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        node *ptr=(node*)malloc(sizeof(node));
        printf("Enter the data: ");
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        if(head==NULL)
        {
            head=ptr;
        }
        else
        {
            node *p=head;
            while(p->next!=NULL)
                p=p->next;
            p->next=ptr;
        }
    }
    return head;
}
void display(node *head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
node* merge(node *head,node *head1)
{
    node *head2=(node*)malloc(sizeof(node));
    node *ptr=head2;
    int n=0;
    while(head!=NULL && head1!=NULL)
    {
        if(n==0)
        {
            ptr->data=head->data;
            head=head->next;
            n++;
        }
        else
        {
            ptr->data=head1->data;
            head1=head1->next;
            n--;
        }
        ptr->next=(node*)malloc(sizeof(node));
        ptr=ptr->next;
    }
    while(head!=NULL)
    {
        ptr->data=head->data;
        if(head1->next != NULL)
        {   ptr->next=(node*)malloc(sizeof(node));
            ptr=ptr->next;
        }
        else
            ptr->next=NULL;
        head=head->next;
    }
    while(head1!=NULL)
    {
        ptr->data=head1->data;
        if(head1->next != NULL)
        {   ptr->next=(node*)malloc(sizeof(node));
            ptr=ptr->next;
        }
        else
            ptr->next=NULL;
        head1=head1->next;
    }
    ptr->next=NULL;
    return head2;
}
int main()
{
    node *head=NULL,*head1=NULL,*head2=NULL;
    head=create(head);
    printf("link list 1: ");
    display(head);
    head1=create(head1);
    printf("link list 2: ");
    display(head1);
    head2=merge(head,head1);
    printf("merged link list : ");
    display(head2);
    return 0;
}

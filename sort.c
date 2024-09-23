#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
void sort(node *head)
{
    node *nex=NULL,*curr=head,*ptr=NULL;
    while(curr!=NULL)
    {
        ptr=curr->next;
        while(ptr!=NULL)
        {
            if(curr->data>ptr->data)
            {
                int x=curr->data;
                curr->data=ptr->data;
                ptr->data=x;
            }
            ptr=ptr->next;
        }
        curr=curr->next;
    }
}
node* insert(node *head)
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
    return head;
}
void display(node *head)
{
    node *ptr=head;
    printf("DATA: ");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
node* reverse(node *rev)
{
    node *pre=NULL,*curr=rev,*next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=pre;
        pre=curr;
        curr=next;
    }
    return pre;
}
node* copy(node *head)
{
    node *rev=NULL;
    node *ptr=head;
    while(ptr!=NULL)
    {
        node *p=(node*)malloc(sizeof(node));
        p->data=ptr->data;
        p->next=NULL;
        if(rev==NULL)
        {
            rev=p;
        }
        else
        {
            node *temp=rev;
            while(temp->next!=NULL)
                temp=temp->next;
            temp->next=p;
        }
        ptr=ptr->next;
    }
    return rev;
}
int main()
{
    node *head=NULL,*rev=NULL;
    int ch;
    printf("Enter the choise: ");
    scanf("%d",&ch);
    while(ch!=5)
    {
        switch (ch)
        {
            case 1:
                head=insert(head);
                break;
            case 2:
                display(head);
                break;
            case 3:
                rev=copy(head);
                rev=reverse(rev);
                display(rev);
                break;
            case 4:
                sort(head);
                break;
            default:
                break;
        }
        printf("Enter the choise: ");
        scanf("%d",&ch);        
    }
    return 0;
}

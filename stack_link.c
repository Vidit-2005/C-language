#include<stdio.h>
#include<stdlib.h>
 typedef struct node
 {
 	int data;
 	struct node *next;
 }node;
 
 node* push(node *top)
 {
 	node *temp=NULL;
 	temp=(node *)malloc(sizeof(node));
 	int x;
 	printf("Enter the data: ");
 	scanf("%d",&x);
 	temp->data=x;
 	temp->next=top;
 	top=temp;
 	return top;
 }
node* pushright(node *top)
{
	node *temp=NULL;
	temp=(node *)malloc(sizeof(node));
	int x;
 	printf("Enter the data: ");
 	scanf("%d",&x);
 	temp->data=x;
 	temp->next=top->next;
 	top->next=temp;
 	return top;
}
 node* pop(node *top)
 {
 	if(top==NULL)
 	{
 		printf("Empty\n");
 	}
 	else
 	{
	 	node *temp=top;
 		printf("data poped: %d\n",top->data);
 		top=top->next;
 		free(temp);
 	}
 	return top;
 }
 void display(node *top)
 {
 	while(top!=NULL)
 	{
 		printf("%d\t",top->data);
 		top=top->next;
 	}
 	printf("\n");
 }
 int main()
 {
 	node *top=NULL;
 	int ch;
 	printf("1: push\n2: pop\n3: display\n4: push from right \n5: exit\nEnter the choice: ");
 	scanf("%d",&ch);
 	while(ch!=5)
 	{
 		switch (ch)
 		{
 			case 1:
 				top=push(top);
 				break;
 			case 2:
 				top=pop(top);
 				break;
 			case 3:
 				display(top);
 				break;
 			case 4:
 				top=pushright(top);
 				break;
 			default:
 				printf("INVALID INPUT!!!!\n");
 				
 		}
 		printf("1: push\n2: pop\n3: display\n4: push from right \n5: exit\nEnter the choice: ");
 		scanf("%d",&ch);
 	}
 	return 0;
 }

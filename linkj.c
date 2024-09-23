#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    //struct node *pre;
    int ptime,pid;
    //int data;
    struct node *next;
}cpu;
void insert(cpu **l,cpu **r)
{
   cpu *p=(cpu*)malloc(sizeof(cpu));
   printf("Enter the process time and process id: ");
   scanf("%d %d",&p->ptime,&p->pid);
   p->next=*l;
   if(*l==NULL && *r==NULL)
   {
    *l=*r=p;
   }
    (*r)->next=p;
    *r=p;
}
void process(cpu **l,cpu **r)
{
    int cycle=1;
    cpu *ptr=*l,*pre=NULL;
    cpu *p=ptr;
    do
    {
        if((*l)->ptime<=10)
        {
           p=*l;
           (*r)->next=(*l)->next;
           *l=(*l)->next;
           ptr=*l;
           if(p->ptime==10)
                    printf("%d process has be completed in %dns\n",p->pid,(p->ptime)*cycle);
           else
                    printf("%d process has be completed in %dns\n",p->pid,10*(cycle-1) + (p->ptime));
           free(p);
        }
        else
        {
               if(ptr->ptime>=10)
               {
                ptr->ptime-=10;
                pre=ptr;
                ptr=ptr->next;                
               }
               else
               {
                 pre->next=ptr->next;
                 p=ptr;
                 ptr=ptr->next;
                 if(p->ptime==10)
                    printf("%d process has be completed in %dns\n",p->pid,(p->ptime)*cycle);
                 else
                    printf("%d process has be completed in %dns\n",p->pid,10*(cycle-1) + (p->ptime));
                 free(p);
               }        
        }        
        if(ptr->next==*l)
        {
            cycle++;
        }
    }
    while(*l!=NULL && *r!=NULL);   
}
int main()
{
    cpu *l=NULL,*r=NULL;
    int ch;
    printf("\npress\n1. to insert the process\n2. to calculate the process time\n3. EXIT : "); 
    scanf("%d",&ch);
    while(ch!=3)
    {
        switch (ch)
        {
        case 1:
            insert(&l,&r);
            break;
        case 2:
            process(&l,&r);
            break;
        default:
            break;
        }
        printf("\npress\n1. to insert the process\n2. to calculate the process time\n3. EXIT : ");
        scanf("%d",&ch);
    }
    return 0;
}

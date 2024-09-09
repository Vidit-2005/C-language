#include<stdio.h>
#include<stdlib.h>
struct Node {
	int cof;
	int power;
	struct Node* next;
};

struct Node* insert(struct Node* head) {
		struct Node* p;
		struct Node* last = NULL;
		for(int i=0;i<5;i++) {
			p = (struct Node*)malloc(sizeof(struct Node));
			if(p == NULL) {
			printf("Memory not allocated.try again");
			return head;
			}
				int x,n;
				printf("enter (cof)x^power : \n");
				scanf("%d",&x);
				scanf("%d",&n);
				p->cof = x;
				p->power = n;
				p->next = NULL;
		
		if(head == NULL && last == NULL) {
			head = p;
            		last = p;
		} else {
			last->next = p;
			last = p;
		}
	}
	return head;
}

struct Node* addPolynomial(struct Node* head1, struct Node* head2) {
    struct Node *p = head1, *p1 = head2;
    struct Node *newHead = NULL, *temp = NULL, *ptr = NULL;

    while (p != NULL && p1 != NULL) {
        ptr = (struct Node*)malloc(sizeof(struct Node));
        if (ptr == NULL) {
            printf("Memory not allocat4ed\n");
            return newHead;
        }

        if (p->power > p1->power) {
            ptr->cof = p->cof;
            ptr->power = p->power;
            p = p->next;
        } else if (p->power < p1->power) {
            ptr->cof = p1->cof;
            ptr->power = p1->power;
            p1 = p1->next;
        } else {
            ptr->cof = p->cof + p1->cof;
            ptr->power = p->power;
            p = p->next;
            p1 = p1->next;
        }
        ptr->next = NULL;
        
        if (newHead == NULL) {
            newHead = ptr;
            temp = ptr;
        } else {
            temp->next = ptr;
            temp = ptr;
        }
    }

    while (p != NULL) {
        ptr = (struct Node*)malloc(sizeof(struct Node));
        if (ptr == NULL) {
            printf("Memory allocation failed.\n");
            return newHead; 
        }
        ptr->cof = p->cof;
        ptr->power = p->power;
        ptr->next = NULL;
        
        if (newHead == NULL) {
            newHead = ptr;
            temp = ptr;
        } else {
            temp->next = ptr;
            temp = ptr;
        }
        p = p->next;
    }

    while (p1 != NULL) {
        ptr = (struct Node*)malloc(sizeof(struct Node));
        if (ptr == NULL) {
            printf("Memory allocation failed.\n");
            return newHead; 
        }
        ptr->cof = p1->cof;
        ptr->power = p1->power;
        ptr->next = NULL;
        
        if (newHead == NULL) {
            newHead = ptr;
            temp = ptr;
        } else {
            temp->next = ptr;
            temp = ptr;
        }
        p1 = p1->next;
    }

    return newHead;
}

int main() {
	struct Node *head = NULL,*head1 = NULL,*ans = NULL;
	printf("Enter the polynomial 1 : \n");

	head = insert(head);
	
	printf("Enter the polynomial 2 : \n");
	
	head1 = insert(head1);
	
	ans = addPolynomial(head,head1);
	struct Node *temp= NULL;
	temp = ans;
	printf("The sum of the two poly is ");
	while(temp != NULL) {
		printf("%d x ^ %d + ",temp->cof,temp->power);
		temp = temp->next;
	}
	printf("0");
	return 0;
}

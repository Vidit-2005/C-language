#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node* Insert(struct node *head, int k, int pos) {
    struct node* ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return head;
    }
    ptr->data = k;
    if (pos == 0) {
        ptr->next = head;
        return ptr;
    }
    struct node* temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; ++i) {
        temp = temp->next;
    }
    ptr->next = temp->next;
    temp->next = ptr;
    return head;
}

struct node* Reverse(struct node *head) {
    struct node* prev = NULL;
    struct node* curr = head;
    struct node* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void PrintList(struct node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main() {
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    printf("Original list: ");
    PrintList(head);
    head = Insert(head, 4, 1);
    printf("List after insertion: ");
    PrintList(head);
    head = Reverse(head);
    printf("Reversed list: ");
    PrintList(head);
    while (head != NULL) {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}


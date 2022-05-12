#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push_front(struct Node** head, int data);
void push_back(struct Node** head, int data);

void push_front(struct Node** head, int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;

    node->next = *head;
    *head = node;
        
}

void push_back(struct Node** head, int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->next = NULL; 
    node->data = data;

    struct Node* tail = *head;

    if ((*head)->next == NULL) {
        *head = node;
        return;
    }

    while(tail->next != NULL) {
        tail = tail->next;
    }
    
    tail->next = node;
}

//O(1)

int main() {
    struct Node* head = NULL;

    push_front(&head, 5);
    printf("%d\n", head->data);
    
    push_front(&head, 6);
    printf("%d\n", head->data);

    push_back(&head, 7);
    printf("%d\n", head->next->next->data);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push_front(struct Node** head, int data);
void push_back(struct Node** head, int data);
int get_node_by_index(struct Node** head, size_t index);
void print_list(struct Node* head);

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
//Big O annotation -> for this function it is O(1)

// Remember that there are no indexes in the linked list!
// Everything is done by using pointers!
// The idea of this funcion is to show a way of iteration
// though the usage of a counter.
// It gets the n-th node of the linked list and returns its data.
// If there is no such index, the funtion will return -1.
int get_node_by_index(struct Node** head, size_t index) {
    struct Node* node = *head;
    int count = 0;

    while (node != NULL) {
        if (count == index)
            return (node->data);
        count++;
        node = node->next;
    }

    return -1;
}

void print_list(struct Node *head)
{
  while (head != NULL)
  {
     printf("Node data: %d\n", head->data);
     head = head->next;
  }
}

int main() {
    struct Node* head = NULL;

    push_front(&head, 5);
    printf("Head data: %d\n", head->data);
    
    push_front(&head, 6);
    printf("Head data: %d\n", head->data);

    push_back(&head, 7);
    printf("Tail data: %d\n", head->next->next->data);

    int index = 2; //Change it to 3 to see how it works
    int result = get_node_by_index(&head, index);
    if (result != -1) {
        printf("Node at index %d has data: %d\n", index, get_node_by_index(&head, index));
    } else {
        printf("There is no node with index: %d\n", index);
    }

    print_list(head);
    return 0;
}
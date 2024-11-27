#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void appendNode(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void linearSearch(struct Node* head, int target) {
    struct Node* temp = head;
    int position = 0;
    int found = 0;

    while (temp != NULL) {
        if (temp->data == target) {
            printf("Found %d at node: %d\n", target, position+1);
            found = 1;
        }
        temp = temp->next;
        position++;
    }

    if (!found) {
        printf("%d not found in the list.\n", target);
    }
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int size, value, target;

    printf("Enter the linked list size: ");
    scanf("%d", &size);

    printf("Enter %d Linked list elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &value);
        appendNode(&head, value);
    }

    printf("The linked list elements are: \n");
    printList(head);

    printf("Enter the value to search: ");
    scanf("%d", &target);

    printf("Searching for %d in the list...\n", target);
    linearSearch(head, target);

    return 0;
}

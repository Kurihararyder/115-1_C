#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head;
    struct Node *Second;
    head = malloc(sizeof(struct Node));
    if (head == NULL) {
        printf("無效");
        return 1;
    }
    Second = malloc(sizeof(struct Node));
    if (Second == NULL) {
        printf("無效");
        free(head);
        return 1;
    }
    head->data = 20;
    head->next = Second;

    Second->data = 30;
    Second->next = NULL;

    printf("First Node :%d\n", head->data);
    printf("Second Node:%d\n", head->next->data);

    free(Second);
    free(head);

    return 0;
}

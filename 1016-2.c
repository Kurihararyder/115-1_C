
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
    struct Node *two;
    head = malloc(sizeof(struct Node));
    if (head == NULL) {
        printf("無效");
        return 1;
    }
    two = malloc(sizeof(struct Node));
    if (two == NULL) {
        printf("無效");
        free(head);
        return 1;
    }
    head->data = 20;
    head->next = two;

    two->data = 30;
    two->next = NULL;

    printf("%d\n", head->data);
    printf("%d\n", head->next->data);

    free(two);
    free(head);

    return 0;
}

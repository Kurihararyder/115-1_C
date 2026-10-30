#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
void push(int value)
{
    top++;
    stack[top] = value;
}
void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    display();
    return 0;
}

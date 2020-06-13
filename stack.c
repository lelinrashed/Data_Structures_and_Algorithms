#include <stdio.h>
#define CAPACITY 3

int stack[CAPACITY];
int top = -1;

void push(int x)
{
    if (top < CAPACITY - 1)
    {
        top = top + 1;
        stack[top] = x;
        printf("Successfully added item: %d\n", x);
    }
    else
    {
        printf("Exception! No spaces\n");
    }
}

int pop()
{
    if (top >= 0)
    {
        int topVal = stack[top];
        top = top - 1;
        return topVal;
    }
    printf("Exception from pop ! Empty stack \n");
    return -1;
}

int peek()
{
    if (top >= 0)
    {
        return stack[top];
    }
    printf("Exception from Peek! Empty Stack\n");
    return -1;
}

int main()
{
    printf("Implementing my stack datastructure in c.\n");
    peek();
    push(10);
    push(20);
    push(30);
    printf("Pop here value : %d\n", pop());
    push(40);
    printf("Top of stack: %d\n", peek());
    printf("Pop value : %d\n", pop());

    return 0;
}
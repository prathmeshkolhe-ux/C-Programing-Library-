#include <stdio.h>
#define SIZE 5
int stack[SIZE], top = -1;
void push()
{
    int x;
    if(top == SIZE-1)
        printf("Stack Overflow\n");
    else
    {
        printf("Enter element: ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if(top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("Deleted element = %d\n", stack[top]);
        top--;
    }
}
void display()
{
    int i;
    if(top == -1)
        printf("Stack is Empty\n");
    else
    {
        printf("Stack elements are:\n");
        for(i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}
int main()
{
    int ch;
    do
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: printf("Exit");
                    break;
            default: printf("Invalid Choice");
        }
    } while(ch != 4);
    return 0;
}

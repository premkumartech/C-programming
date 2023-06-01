#include <stdio.h>
int main()
{
    const int size = 10;
    int stack[size], top = -1, bottom = -1, i;
    char ch;
    printf("Do you want to insert in a stact (y/n) : ");
    scanf("%c", &ch);
    while (ch == 'y' || ch == 'Y')
    {
        if (top == (size - 1))
        {
            printf("Overflow");
            break;
        }
        else
        {
            top = top + 1;
            printf("Enter an item : ");
            scanf("%d", &stack[top]);
        }
        if (top == 0)
        {
            bottom = 0;
        }
        printf("\nDo you want to insert more element in a stack (y/n) : ");
        scanf("%c", &ch);
    } // end while
    if (top == -1)
    {
        printf("UnderFlow");
    }
    else
    {
        printf("\nDisplaying stact element : \n");
        for (i = 0; i < top; i++)
        {
            printf("%d\t", stack[i]);
        }
    }

    return 0;
}
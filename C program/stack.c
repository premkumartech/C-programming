#include<stdio.h>
void push();
int pop();
void traverse();
int stack[5];
int top=-1;
int main(){
    int choice;
    char ch;
    do{
        printf("\n 1. PUSH ");
        printf("\n 2. POP ");
        printf("\n 3. TRAVERSE ");
        printf("\n 4. EXIT ");
        printf("\n Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            printf("The deleted element is %d ", pop());
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
        }
    }
    while(choice!=4);
    // return 0;
}
void push(){
    int item;
    if(top==4){
        printf("The stack is full");
    }
    else{
        printf("Enter the element to be inserted");
        scanf("%d", &item);
        top = top+1;
        stack[top]=item;
    }
}
int pop(){
    int item;
    if(top==-1)
    printf("The stack is empty");
    else{
        item = stack[top];
        top=top-1;
    }
    return item;
}
void traverse(){
    int i;
    if(top==-1)
    printf("The stack is empty");
    else{
        for(i=top; i>=0; i--){
            printf("\n %d", stack[i]);
        }
    }
}

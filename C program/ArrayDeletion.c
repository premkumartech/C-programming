
// Program for deletion element from array list

#include<stdio.h>
int main()
{
    const int size = 5;  
    int list[size], i, pos;
    printf("Enter 5 array elment : ");
    for(i=0; i<size; i++){
        scanf("%d", &list[i]);
    }
    printf("Displaying array elment before deletion : ");
    for(i=0; i<size; i++){
        printf("%d\t", list[i]);
    }
    printf("\nEnter a possition for deletion : ");
    scanf("%d", &pos);
    if(pos>size){
        printf("Not Posible");
    }
    else{
        for(i=pos; i<(size-1); i++){
            list[i]=list[i+1];
        }
    }
    printf("\nDisplaying array element after deltion : ");
    for(i=0; i<(size-1); i++){
        printf("%d\t", list[i]);
    }
return 0;
}
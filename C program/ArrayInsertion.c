
// Programe for insertion element in array list.

#include<stdio.h>
int main()
{
    const int size = 5; 
    int list[size], i, ele, pos;
    printf("Enter 5 array element : ");
    for(i=0; i<size; i++){
        scanf("%d", &list[i]);
    }
    printf("Displaying array elment before insertion : ");
    for(i=0; i<size; i++){
        printf("%d\t", list[i]);
    }
    printf("\nEnter element to insert : ");
    scanf("%d", &ele);
    printf("\nEnter position index to insert : ");
    scanf("%d", &pos);
    if(pos>size){
        printf("Not posssible");
    }
    else{
        for(i=(size-1); i>=pos; i--){
            list[i+1] = list[i];
        }
        list[pos]=ele;
    }
    printf("\nDisplaying array element after insertion : ");
    for(i=0; i<(size+1); i++){
        printf("%d\t", list[i]);
    }
return 0;
}
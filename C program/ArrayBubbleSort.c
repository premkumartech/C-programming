#include<stdio.h>
int main()
{
    const int size = 5;
    int list[size], i, j, temp;
    printf("Enter 5 array element : ");
    for(i=0; i<size; i++){
        scanf("%d", &list[i]);
    }
    printf("Displaying 5 array element : ");
    for(i=0; i<size; i++){
        printf("%d\t", list[i]);
    }
    for(i=0; i<size; i++){
        for(j=0; j<(size-1); j++){
            if(list[j]>list[j+1]){
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
    printf("\nDisplaying 5 array list after sorting : ");
    for(i=0; i<size; i++){
        printf("%d\t", list[i]);
    }
return 0;
}
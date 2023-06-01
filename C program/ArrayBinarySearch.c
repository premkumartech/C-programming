
// Program for Binary Search in array list.

#include<stdio.h>
int main()
{
    const int size = 5;
    int list[size], i, item, flag=0, beg, last, mid;
    printf("Enter 5 sorted array element : ");
    for(i=0; i<size; i++){
        scanf("%d", &list[i]);
    }
    printf("Dispalay array element : ");
    for(i=0; i<size; i++){
        printf("%d\t", list[i]);
    }
    printf("\nEnter an item : ");
    scanf("%d", &item);
    beg=0, last=(size-1);
    while(beg<=last){
        mid = (beg+last)/2;
        if(list[mid]==item){
            flag=1;
            break;
        }
        if(list[mid]<item){
            beg=mid+1;
        }
        else{
            last=mid-1;
        }
    }
    if(flag==0)
    printf("%d is not exist in array list", item);
    else
    printf("%d is exist in array list", item);
return 0;
}

// Program for selection sort.

#include<stdio.h>
int main()
{
    const int size = 5; 
    int list[size], i, j, temp;
    printf("Enter 5 array element : ");
    for(i=0; i<size; i++){
        scanf("%d", &list[i]);
    }
    printf("\nDisplaying array element before sorting : ");
    for(i=0; i<size; i++){
        printf("%d\t", list[i]);
    }
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(list[i]>list[j]){
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }
    printf("\nDisplay array element after sorting asscending order : ");
    for(i=0; i<size; i++){
        printf("%d\t", list[i]);
    }
return 0;
}
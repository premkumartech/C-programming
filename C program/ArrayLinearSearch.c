
// Program for linear Search in array list for searching data element.

#include<stdio.h>
int main()
{
    const int size = 5;
    int list[size] , i, item, flag=0;
    printf("Enter 5 array element : ");
    for(i=0; i<size; i++){
        scanf("%d", &list[i]);
    }
    printf("Displaying 5 array elment : ");
    for(i=0; i<size; i++){
        printf("%d\t",list[i]);
    }
    printf("\nEnter an item for search : ");
    scanf("%d", &item);
    for(i=0; i<size; i++){
        if(list[i]==item){
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("%d is exist in array list", item);
    else
    printf("%d is not exist in array list", item);    
return 0;
}
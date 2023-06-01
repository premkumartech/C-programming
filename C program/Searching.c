
// Searching techinque

// Linear search

// #include<stdio.h>
// int main()
// {
//     const int size = 5;
//     int list[size], i, item, flag=0;
//     printf("Enter 5 array element : \n");
//     for(i=0; i<size; i++){
//         scanf("%d", &list[i]);
//     }
//     printf("Displaying entered array element : \n");
//     for(i=0; i<size; i++){
//         printf("%d\t", list[i]);
//     }
//     printf("\nEnter an item : ");
//     scanf("%d", &item);
//     for(i=0; i<size; i++){
//         if(list[i]==item){
//             flag = 1;
//             break;
//         }
//     }
//     if(flag==1)
//     printf("found");
//     else
//     printf("not found");
// return 0;
// }

// Binary search

#include<stdio.h>
int main()
{
    const int size = 5;
    int list[size], i, item, beg, last, mid, flag=0;
    printf("Enter 5 array element : \n");
    for(i=0; i<size; i++){
        scanf("%d", &list[i]);
    }
    printf("Displaying entered array element : \n");
    for(i=0; i<size; i++){
        printf("%d\t", list[i]);
    }
    printf("\nEnter an item : ");
    scanf("%d", &item);
    beg = 0, last = (size-1);
    for(i=0; i<size; i++){
        mid = (beg + last)/2;
        if(list[mid]==item){
            flag = 1;
            break;
        }
        if(list[mid]<item)
        beg = mid+1;
        else
        last = mid-1;
    }
    if(flag == 1)
    printf("found");
    else
    printf("not found");
return 0;
}




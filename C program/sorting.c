
// Sorting


// 1. Insertion sort

// #include<stdio.h>
// int main()
// {
//     const int size = 5;
//     int list[size], i, j, temp;
//     printf("Enter 5 array element : \n");
//     for(i=0; i<size; i++){
//         scanf("%d", &list[i]);
//     }
//     printf("Entered 5 array element is : \n");
//     for(i=0; i<size; i++){
//         printf("%d\t", list[i]);
//     }
//     for(i=1; i<=size; i++){
//         temp = list[i];
//         for(j=i-1; temp<list[j]; j--){
//             list[j+1]=list[j];
//         }
//         list[i+1]=temp;
//     }
//     printf("\nDisplaying array element after sorting : \n");
//     for(i=0; i<size; i++){
//         printf("%d\t", list[i]);
//     }
// return 0;
// }

// 2. Selection sort

// #include<stdio.h>
// int main()
// {
//     const int size = 5;
//     int list[size], i, j, temp;
//     printf("Enter 5 array element : \n");
//     for(i=0; i<size; i++){
//         scanf("%d", &list[i]);
//     }
//     printf("Displaying entered array element : \n");
//     for(i=0; i<size; i++){
//         printf("%d\t", list[i]);
//     }
//     for(i=0; i<size; i++){
//         for(j=i+1; j<size; j++){
//             if(list[i]>list[j]){
//                 temp = list[i];
//                 list[i] = list[j]; 
//                 list[j] = temp;
//             }
//         }
//     }
//     printf("\nDisplaying array element after sorting : \n");
//     for(i=0; i<size; i++){
//         printf("%d\t", list[i]);
//     }
//     return 0;
// }

// 3. Merge sort

// #include<stdio.h>
// int main()
// {
//     const int size = 5;
//     int list1[size], list2[size], i, j, temp;
// return 0;
// }

// 4. Bubble sort 

// #include<stdio.h>
// int main()
// {
//     const int size = 5;
//     int list[size], i, j, temp;
//     printf("Enter 5 array element : \n");
//     for(i=0; i<size; i++){
//         scanf("%d", &list[i]);
//     }
//     printf("Displaing entered array element : \n");
//     for(i=0; i<size; i++){
//         printf("%d\t", list[i]);
//     }
//     for(i=0; i<size; i++){
//         for(j=0; j<(size-1); j++){
//             if(list[j]>list[j+1]){
//                 temp=list[j];
//                 list[j]=list[j+1];
//                 list[j+1]=temp;   
//             }            
//         }
//     }
//     printf("\nDisplaying arrey element after sorting : \n");
//     for(i=0; i<size; i++){
//         printf("%d\t", list[i]);
//     }
// return 0;
// }






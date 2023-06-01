#include <stdio.h>
#include<stdlib.h>
int main() {
    int mat1[10][10], mat2[10][10], mult[10][10];
    int i, j, k, m, n, p, q;
    printf("Enter row for first matric : ");
    scanf("%d", &m);
    printf("Enter colum for second matric : ");
    scanf("%d", &n);
    printf("Enter row for second matric : ");
    scanf("%d", &p);
    printf("Enter colum for second matric : ");
    scanf("%d", &q);
    if(n==p){
        printf("Multiplication possible \n");
    }
    else{
        printf("Multiplication not possible\n");
        exit(0);
    }
    printf("Enter value of first matrix : \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter value of second matric : \n");
    for(i=0; i<p; i++){
        for(j=0; j<q; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("Multiplication of first matric and second matri : \n");
    for(i=0; i<m; i++){
        for(j=0; j<q; j++){
            mult[i][j]=0;
            for(k=0; k<n; k++){
                mult[i][j]=mult[i][j]+mat1[i][k]*mat2[k][j];
            }
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<q; j++){
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
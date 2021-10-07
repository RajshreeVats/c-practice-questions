
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    printf("no. of rows fixed\n\n");
    int *row[3],i,j,col;
    printf("enter the elements : ");
    for(i=0; i<3; i++) {
        col = 3*(i+1);
        row[i] = (int *)malloc(col*sizeof(int));
        for(j=0; j<col; j++) {
            scanf("%d", &row[i][j]);
        }

    }
    for(i=0; i<3; i++) {
        for(j=0; j<col; j++) {
            printf("%d\t", row[i][j]);
        }
        printf("\n");
    }
    printf("\n\n no. of columns fixed\n\n");
    int(*p)[3],rows;
    printf("enter the no. of rows : ");
    scanf("%d", &rows);
    p = (int(*)[3])malloc(rows*3*sizeof(int));
    printf("enter the elements : ");
    for(i=0; i<rows; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &p[i][j]);
        }

    }
    for(i=0; i<rows; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }
    printf("\n\n using double pointers \n\n");
    int **pt, rowss, column;
    printf("enter the no. of rows and columns : ");
    scanf("%d%d", &rowss, &column);
    pt = (int**)malloc(rowss*sizeof(int));
    printf("enter the elements : ");
    for(i=0; i<rowss; i++) {
        pt[i] = (int *)malloc(column*sizeof(int));
        for(j=0; j<column; j++){
            scanf("%d", &pt[i][j]);
        }
    }
    for(int i = 0; i < rowss; i++) {
        for(j=0; j<column; j++) {
            printf("%d\t", pt[i][j]);
        }
        printf("\n");
    }


   return 0;
}
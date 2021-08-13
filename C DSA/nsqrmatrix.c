#include<stdlib.h>
#include<stdio.h>
void nonzero(int **q,int r,int c){
    int count=0;
    int i,j;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if(q[i][j]!=0)
                count++;

    printf("\nThe number of nonzero elements are: %d",count);
}

void sumOfDiagonal(int **q,int r,int c){
    int rl;
    int i,j;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if(j<i)
                rl+=q[i][j];
    printf("\nThe sum of elements above the leading diagonal is: %d",rl)    ;        
}
void minorDiagonal(int **q,int r,int c){
    int i,j;
    printf("\nThe elements below the minor diagonal is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            if(i<j)
                printf("%d ",q[i][j]);
        printf("\n")        ;
    }
}
void product(int **q,int r,int c){
    int lp=1,rp=1;
    int i,j;
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
        if(i==j)
            rp*=q[i][j];
        if(i+j==r)
            lp*=q[i][j];

    }
    printf("\nThe product of right diagonal is: %d",rp);
    printf("\nThe product of left diagonal is: %d",lp);

}
int main(){
    int r=3,c=3;
    
    int **a;
    int i,j;
    a=(int **) malloc (r*sizeof(int *));
    for(i=0;i<r;i++)
        a[i] = (int *) malloc (c*sizeof(int));
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        {   
            printf("Enter the value of a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    printf("The original array is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");    
    }    
    nonzero(a,r,c);
    product(a,r,c);
    minorDiagonal(a,r,c);
    sumOfDiagonal(a,r,c);
}
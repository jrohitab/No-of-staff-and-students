//MATRIX ADDITION
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[100][100],b[100][100],sum[100][100],r,c,i,j;
    printf("Enter the desired No of rows : ");
    scanf("%d",&r);
    printf("Enter the desired no of columns : ");
    scanf("%d",&c);
    
    //First Matrix
    printf("\nEnter the elements of the 1st matrix\n");
    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
        printf("Enter element a[%d][%d] ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    }

    //Second Matrix
    printf("\nEnter the elements of the second matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element b[%d][%d]",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    //Sum Matrix
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    {
    sum[i][j]=a[i][j]+b[i][j];
    }
    }

    //Print sum
    printf("\nSum of two matrices: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    {
        printf("%d\t",sum[i][j]);
    }
     printf("\n\n");
    
    }
    
return 0;
}

    

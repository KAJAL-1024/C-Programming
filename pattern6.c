#include<stdio.h>
int main()
{
    int i,j,sum=0;
    int row=0;
    int column=0;
    printf("Enter Row and Column : ");
    scanf("%d%d",&row,&column);

    int matrix[row][column];
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&matrix[i][j]);
        }

        int i=0;
        int j=0;
        while((i<row)&&(j<column))
        {
            if(matrix[i][j]%2!=0)
            {
                sum+=matrix[i][j];
            }
            i++;
            j++;
        }

    }
    printf("%d",sum);

    return 0;
}

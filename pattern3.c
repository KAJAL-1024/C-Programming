#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        { if (j%2==0)
        {
            printf("%d",j);
        }
        }
        printf("\n");
    }
    return 0;
}


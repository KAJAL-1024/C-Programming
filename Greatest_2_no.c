#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter a Number : ");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
        printf("N1 is Greatest : %d ",n1);
    else
        printf("N2 is Greatest : %d ",n2);
    return 0;
}

#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter a Number : ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if((n1>n2)&&(n1>n3))
        printf("n1 is Greatest : %d",n1);
    else if (n2>n3)
        printf("n2 is Greatest : %d",n2);
    else
        printf("n3 is Greatest : %d",n3);
    return 0;
}

#include<stdio.h>
int main()
{
    int count=1,n;
    printf("Enter Your Number:\n");
    scanf("%d",&n);

    while(count<=10)

    {
        printf("%d*%d=%d\n",count,n,count*n);

        count++;
    }
    return 0;
}

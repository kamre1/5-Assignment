#include<stdio.h>
int main()
{
    int x=1, n;
     printf("Enter a Number:\n");
    scanf("%d",&n);


    while(x<=n)
    {
        printf("%d\n",x);

        x+=2;
    }
    return 0;

}

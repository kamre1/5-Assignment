#include<stdio.h>
int main()
{
    int x=1, N;
    printf("Enter a Number:\n");
    scanf("%d",&N);


    while(x<=N)
    {
        printf("%d\n",x*x);

        x++;


    }
    return 0;
}

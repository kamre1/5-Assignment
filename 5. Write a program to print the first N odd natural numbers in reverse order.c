#include<stdio.h>
int main()
{
    int count, N;
     printf("Enter a Number:\n");
    scanf("%d",&N);


    count=N;
    while(count>0)
    {
        printf("%d\n",count);

        count-=2;
    }
    return 0;

}

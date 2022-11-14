#include<stdio.h>
#include<math.h>
int main()
{
    int i=1, n;
    printf("Enter a Number:\n");
    scanf("%d",&n);

     while(i<=n)
     {
         printf("%d\n",i*i*i);

         i++;
     }
    return 0;
}

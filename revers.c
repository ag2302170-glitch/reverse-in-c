#include<stdio.h>
int main()
{
int n;
int rem;
    int rev =0;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
    rem=n%10;
    rev =rev*10+rem;
    n=n/10;
}
    printf("the revers number is :%d\n",rev);
return 0;
}
#include<stdio.h>
int main()
{
int n;
    int revers;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
    revers=n%10;
    printf("%d\n",revers);
    n=n/10;
}
return 0;
}
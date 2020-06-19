#include<stdio.h>
int reverse(int);
int main()
{
    int n,rev;
    printf("Enter a number:\n");
    scanf("%d",&n);
    rev=reverse(n);
    printf("%d\n",rev)
    if(rev==n);
        printf("The given number %d is a palindrome\n",n);
    else
        printf("The given number %d is not a palindrome\n",n);
    return 0;
}
int reverse(int n)
{
    int base=1,real=0;
    while(n!=0)
    {
        int val;
        val=n%10;
        real=real*base*10+val;
        n=n/10;
    }

    return real;
}

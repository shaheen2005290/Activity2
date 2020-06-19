#include<stdio.h> //BINARY TO DECIMAL
#include<math.h>
int bin2dec(long long n);//used long long to accommodate more binary digits
int main()
{
    long long n;//decimal number to be converted
    printf("Enter a number : ");
    scanf("%lld",&n);
    printf("%d",dec2bin(n));//calling function dec2bin to convert decimal n to binary
    return 0;
}
int dec2bin(long long n)
{
    int dec=0,i=0;//initializing bin and rem to 0 to avoid any garbage value to get added and i to 1 so that when multiplied in step 18
    while(n!=0)         //doesn't give 0..........keep the loop till n becomes 0 after repeated division
    {
        int rem=n%10;        //using simple method of DCD checking remainder if 0 or 1 and that is the binary equivalent
        n=n/10;          //reducing the number to get to next digit like from units->hundreds->thousands
        dec=dec+rem*pow(2,i);  //adding and shifting to get required binary number
        i++;         //multiplying i to change its position weight
    }

    return dec;          //return the value calculated
}

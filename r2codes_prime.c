//prime number program
#include<stdio.h>
#include<math.h>
int main()
{
    int i,num,prime=0;;
    printf("Enter the number to check it's prime or not : \n");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
if(num%i==0)
{
prime=1;

}
    }
    if(prime==0)
    {
        printf("It's  a  prime number.");
    }
 else
 {
     printf("It's not a prime number.");
 }

// main();++

}
#include<stdio.h>
int main(){
int a,b,c,i;
unsigned long long int fact=1;
printf("Enter the number by using for loop :");
scanf("%d",&a);
for ( i = 1; i <=a; i++)
{
    fact*=i;
}
printf("Factorial of %d is %llu \n",a,fact);
printf("\n Enter the number by using while loop :");
scanf("%d",&b);
int j=1,facts=1;
while (j<=b)
{
facts*=j;
j++;
}
printf("Factorial of %d is %llu \n",b,facts);
printf("\n Enter the number by using do while loop :");
scanf("%d",&c);
int k=1,fac=1;
do
{
 fac*=k;
k++;   
} while (k<=c);
printf("Factorial of %d is %llu \n",c,fac);
printf("\n");
}
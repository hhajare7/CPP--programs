#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,i;
printf(�\nEnter the number : �);
scanf(�%d�,&n);

for(i = 2; i <= n/2; i++)
{
if(n % i ==0)
{
break;
}
}
if(i > n/2)
printf(�\n%d is a Prime Number\n�,n);
else
printf(�\n%d is not a Prime Number\n�, n);
getch();
    return 0;
}

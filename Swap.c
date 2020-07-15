#include<stdio.h>
int main()
{
int a=2,b=1;//intializing two values it is before swapping
a=a+b;//now first we add both values and we initialize it as a becomes 3
b=a-b;//now subtract both the values and initialize that to b becomes 2
a=a-b;//a becomes 1
/* it can be done using product and division */
printf("after swapping: a=%d,b=%d",a,b);
return 0;
}
O/p:
After swapping a=1,b=2

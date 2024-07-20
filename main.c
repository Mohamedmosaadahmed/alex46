#include <stdio.h>
#include <stdlib.h>

int main()
{int a,i,f,fact=1;
printf("hello\n");
printf("enter your number");
scanf("%d",&a);
i=1;

while(a>0)
{f=a*i;
fact=fact*f;
    a--;
}
printf("the result is %d",fact);
    return 0;
}

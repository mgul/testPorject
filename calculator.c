#include<stdio.h>

int main ()
{
    int a,b,sum;
    char sign;
    
    scanf ("%i",&a);
    scanf ("%c",sign);
   scanf ("%i",&b);
    if (sign=='b')
    printf("=%d",a+b);
    else if(sign=='a')
    printf("=%d",a+b);
    else
    printf("nothing");
    
    getch();
    return 0;
}

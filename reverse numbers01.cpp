#include <iostream>
#include<conio.h>


int main()
{
    int a,b,temp;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d,b=%d",a,b);
    getch();
    
}

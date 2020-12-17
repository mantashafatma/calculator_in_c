#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a;
    int b;
    printf("enter the first number             ");
    scanf("%d",&a);
    printf("enter the second number            ");
    scanf("%d",&b);
    int sum=a+b;
    int sub=a-b;
    int multi=a*b;
    int div=a/b;
    int mod=a%b;
    int pw=pow(a,b);
    printf("addition of two integers           %d\n",sum);
    printf("subtraction of two integers        %d\n",sub);
    printf("multiplication of two integers     %d\n",multi);
    printf("division of two integers           %d\n",div);
    printf("modulos of two integers            %d\n",mod);
    printf("square of two integers             %d\n",pw);
    return(0);
}

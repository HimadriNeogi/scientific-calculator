#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void addition();
void substraction();
void multiplication();
void division();
void square();
void cube();
void power();
void square_root();
void cube_root();
void root();
void natural_log();
void log_base10();
void exponential();
void sine();
void cosine();
void tangent();
void factorial();
void sin_inverse();
void cos_inverse();
void tan_inverse();

void main()
{
    int choice;
    printf("PRESS 0 TO EXIT\n");
    printf("PRESS 1 FOR ADDITION\n");
    printf("PRESS 2 FOR SUBSTRACTION\n");
    printf("PRESS 3 FOR MULTIPLICATION\n");
    printf("PRESS 4 FOR DIVISION\n");
    printf("PRESS 5 FOR SQUARE\n");
    printf("PRESS 6 FOR CUBE\n");
    printf("PRESS 7 FOR Nth POWER\n");
    printf("PRESS 8 FOR SQUARE ROOT\n");
    printf("PRESS 9 FOR CUBE ROOT\n");
    printf("PRESS 10 FOR Nth ROOT\n");
    printf("PRESS 11 FOR NATURAL LOGARITHM\n");
    printf("PRESS 12 FOR LOGARITHM BASE 10\n");
    printf("PRESS 13 FOR EXPONENTIAL\n");
    printf("PRESS 14 FOR SINE FUNCTION\n");
    printf("PRESS 15 FOR COSINE FUNCTION\n");
    printf("PRESS 16 FOR TANGENT FUNCTION\n");
    printf("PRESS 17 FOR FACTORIAL\n");
    printf("PRESS 18 FOR INVERSE SINE FUNCTION\n");
    printf("PRESS 19 FOR INVERSE COSINE FUNCTION\n");
    printf("PRESS 20 FOR INVERSE TANGENT FUNCTION\n");
    
    while(1)
    {
        printf("\n\nEnter the operation you want to perform: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        addition();
        break;
        case 2:
        substraction();
        break;
        case 3:
        multiplication();
        break;
        case 4:
        division();
        break;
        case 5:
        square();
        break;
        case 6:
        cube();
        break;
        case 7:
        power();
        break;
        case 8:
        square_root();
        break;
        case 9:
        cube_root();
        break;
        case 10:
        root();
        break;
        case 11:
        natural_log();
        break;
        case 12:
        log_base10();
        break;
        case 13:
        exponential();
        break;
        case 14:
        sine();
        break;
        case 15:
        cosine();
        break;
        case 16:
        tangent();
        break;
        case 17:
        factorial();
        break;
        case 18:
        sin_inverse();
        break;
        case 19:
        cos_inverse();
        break;
        case 20:
        tan_inverse();
        break;
        case 0:
        exit(0);
        default:
        printf("Wrong input");
        }
    }
}

void addition()
{
    double a,b,sum;
    printf("Enter two number you want to add:");
    scanf("%lf%lf",&a,&b);
    sum=a+b;
    printf("Addition of two numbers=%lf",sum);
}
void substraction()
{
    double a,b,diff;
    printf("Enter two number you want to substract:");
    scanf("%lf%lf",&a,&b);
    diff=a-b;
    printf("Difference of two numbers=%lf",diff);
}
void multiplication()
{
    double a,b,product;
    printf("Enter two number you want to multiply:");
    scanf("%lf%lf",&a,&b);
    product=a*b;
    printf("Multiplication of two numbers=%lf",product);
}
void division()
{
    float a,b,div;
    printf("Enter two number you want to divide:");
    scanf("%f%f",&a,&b);
    div=a/b;
    printf("Division of two numbers=%f",div);
}
void square()
{
    double a,sq;
    printf("Enter any number:");
    scanf("%lf",&a);
    sq=a*=2;
    printf("Square of the number=%lf",sq);
}
void cube()
{
    double a,cb;
    printf("Enter any number:");
    scanf("%lf",&a);
    cb=a*=2;
    printf("Cube of the number=%lf",cb);
}
void power()
{
    double a,n,power;
    printf("Enter any number:");
    scanf("%lf",&a);
    printf("Enter the power raised to the number:;");
    scanf("%lf",&n);
    power=pow(a,n);
    printf("The number to the power n=%lf",power);
}
void square_root()
{
    double a,square_root;
    printf("Enter any number:");
    scanf("%lf",&a);
    square_root=sqrt(a);
    printf("Square root of the number=%lf",square_root);
}
void cube_root()
{
    double a,cube_root;
    printf("Enter any number:");
    scanf("%lf",&a);
    cube_root=cbrt(a);
    printf("Cube root of the number=%lf",cube_root);
}
void root()
{
    double a,n,root;
    printf("Enter any number:");
    scanf("%lf",&a);
    printf("Enter the power raised to the number:;");
    scanf("%lf",&n);
    root=pow(a,1/n);
    printf("The nth root of the number=%lf",root);
}
void natural_log()
{
    double a,ln;
    printf("Enter any number:");
    scanf("%lf",&a);
    ln=log(a);
    printf("Natural logarithm of the number=%lf",ln);
}
void log_base10()
{
    double a,log;
    printf("Enter any number:");
    scanf("%lf",&a);
    log=log10(a);
    printf("Logarithm of the number base 10=%lf",log);
}
void exponential()
{
    double a,expnt;
    printf("Enter the power:");
    scanf("%lf",&a);
    expnt=exp(a);
    printf("Exponential of the power=%lf",expnt);
}
void sine()
{
    double a,sine;
    printf("Enter any number:");
    scanf("%lf",&a);
    sine=sin(a);
    printf("Sine of the number=%lf",sine);
}
void cosine()
{
    double a,cosine;
    printf("Enter any number:");
    scanf("%lf",&a);
    cosine=cos(a);
    printf("Cosine of the number=%lf",cosine);
}
void tangent()
{
    double a,tangent;
    printf("Enter any number:");
    scanf("%lf",&a);
    tangent=tan(a);
    printf("Tangent of the number=%lf",tangent);
}
void factorial()
{
    int n,i,fact=1;
    printf("enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of the number is%d",fact);
}
void sin_inverse()
{
    double a,sininv;
    printf("Enter any number:");
    scanf("%lf",&a);
    if(a>=-1&&a<=1)
    {
        sininv=asin(a);
        printf("Sin inverse of the number=%lf",sininv);
    }
    else
    {
        printf("Out of range");
    }
}
void cos_inverse()
{
    double a,cosinv;
    printf("Enter any number:");
    scanf("%lf",&a);
    if(a>=-1&&a<=1)
    {
        cosinv=acos(a);
        printf("Cos inverse of the number=%lf",cosinv);
    }
    else
    {
        printf("Out of range");
    }
}
void tan_inverse()
{
    double a,taninv;
    printf("Enter any number:");
    scanf("%lf",&a);
    taninv=atan(a);
    printf("Tan inverse of the number=%lf",taninv);
}

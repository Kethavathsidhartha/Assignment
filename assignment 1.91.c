#include<stdio.h>
#include<math.h>
int main()
{
    double n,l,s;
    printf("enter the number:");
    scanf("%d",&n);
    int *ptr;
    ptr=&n;
    l=pow(*ptr,2);
    s=pow(*ptr,3);
    printf("square of number is:%lf",l);
    printf("\n cube of number is :%lf",s);
}

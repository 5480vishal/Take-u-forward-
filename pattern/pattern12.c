#include <stdio.h>
int main()
{
    int i;
    int d;
    int a;
    int N;
    printf("enter the first term: \n");
    scanf("%d", &i);
    printf("enter the common difference: \n");
    scanf("%d", &d);
    printf("enter the no. of terms you want to print: \n");
    scanf("%d", &N);
    printf("the series of %d no.s with first term as %d and common diffrence as %d is :\n", N,i,d);
     a=i;
    for (int  j=0; j<= N;j++)
    {
        printf("%d\n",a);
        a=a+d;
    }
    return 0;
}
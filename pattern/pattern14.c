#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of rows: ");
    scanf("%d",&n);

    // my method 
    // for (int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         printf("%c ",j+65);
    //     }
    //     printf("\n");
    // }


    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}
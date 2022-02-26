#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int i;
    int j;
   int s;
for(i=1;i<=10;i++){
    for(s=1;s<= (10-i);s++)
        printf(" ");
        for(j=1;j<= ((2*i)-1);j++)
            printf("*");
        printf("\n");
}*/
/*for(i=1;i<=5;i++){
        for(s=1;s<=5;s++)
        printf("");
    for(j=1;j<=5;j++)

        printf("*");
        printf("\n");


}*/
int i, j, rows;

    /* Input rows to print from user */
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        /* Print leading spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        /* Print stars */
        for(j=1; j<=(rows*2 -(2*i-1)); j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}

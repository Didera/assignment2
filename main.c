#include <stdio.h>


int main()
{
int m=6 ;//number of rows
int n=8 ;//number of columns
int sum;


printf("Number of rows in tableA are %d and number of columns are %d\n" , m , n);

//input for tableA
int tableA[m][n];
int i,j;
    for(i=0;i<m;i++){

        for (j=0;j<n;j++){
              printf("position of the digit in table [%d][%d]: ", i, j);
            scanf("%d", &tableA[i][j]);
       }
    }
//display tableA
printf("table A is \n");

 for(i=0;i<m;i++){

        for (j=0;j<n;j++){

            printf("%d  |  ", tableA[i][j]);
       }

       printf("\n");
    }
    printf("Number of elements in tableX are %d \n" , n);

int listX[n];
//input for listX
    for(j=0;j<n;j++){
        printf("position of the digit in table [%d]\n" , j);
       scanf("%d" ,&listX[j] );
    }
//display listX contents
printf("The List X is:\n");
 for(j=0;j<n;j++){

       printf("%d\n" ,listX[j] );
    }

   int listY[m];

//take input for listY
printf("ListY is : \n");
    for(i=0;i<m;i++){
            listY[i] = 0;
        for (j=0;j<n;j++){


            listY[i]+=tableA[i][j]*listX[j];

        }

    }

//display listY
 for(i=0;i<m;i++){

    printf("%d \n-\n", listY[i]);
    }


    return 0;
}

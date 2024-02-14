#include <stdio.h>
int main (void)
{

   int a[3][3]={2,3,4,5,6,7};
   int b[3][2]={0,1,2,3,4,5};
   int c[3][2]={0};
   int i,j,k,sum;

      for(i=0;i<3;i++)
      { //row of first matrix
        for(j=0;j<2;j++)
        {  //column of second matrix
           sum=0;
           for(k=0;k<3;k++)
               sum=sum+a[i][k]*b[k][j];

           c[i][j]=sum;
        }
      }

  printf("\nThe multiplication of two matrix is\n");
  for(i=0;i<3;i++){
      printf("\n");
      for(j=0;j<2;j++){
           printf("%d\t",c[i][j]);
      }
  }
}

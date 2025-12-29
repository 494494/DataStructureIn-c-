#include<stdio.h>

int matrix(int,int,int M[][100],char);
void addition(int , int , int M1[][100], int M2[][100]);
int main()
{
   int x,y,a,b;
    printf("row and column of 1st matrix= ");
    scanf("%d%d",&x,&y);
    printf("row and column of 2st matrix= ");
    scanf("%d%d",&a,&b);
    if (x == a && y == b) {
    int mat1[100][100],mat2[100][100];
    matrix(x,y,mat1,'A');
    matrix(a,b,mat2,'B');
    addition(x, y, mat1, mat2);
     } else {
    printf("Matrices must have the same dimensions for addition!\nBhai aaisa mat kr yrr");
     }
return 0;
}

int matrix(int x,int y,int mat1[][100],char z){
     int i,j;
    for ( i = 0; i <x; i++)
    {
      for ( j = 0; j <y; j++)
      {
        printf("your (%d,%d) element is =",i+1,j+1);
        scanf("%d",&mat1[i][j]);
      }
    }
    printf("your %c matrix is:\n",z);
  for ( i = 0; i < x; i++)
    {
      for ( j = 0; j < y; j++)
      {
        printf("%d    ",mat1[i][j]);
      }
    printf("\n");
    }
return 0;
}

void addition(int x,int y,int M1[][100],int M2[][100])
{
  int reslt[100][100],i,j;
  for ( i = 0; i < x; i++)
  {
    for ( j = 0; j <y; j++)
    reslt[i][j]=M1[i][j]+M2[i][j];
  }
  printf("your resultant martrix is :\n");
  for ( i = 0; i < x; i++)
  {
      for ( j = 0; j < y; j++)
        printf("%d  ",reslt[i][j]);
    printf("\n");
  }
}

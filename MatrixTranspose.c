#include < tdio.h>
int main ()
{
  int row , column , i, j;
  int  matrix[10][10], inverse[10][10];
  printf ("\n Enter  no of row :");
      scanf ("%d", &row );
  printf ("\n Enter no of column :");
      scanf ("%d", &column );
  printf ("\n Enter the element  of matrix:\n");
   for (i = 0; i < row ; i++)
   {
    for (j = 0; j < column ; j++)
     {
       scanf ("%d", &matrix[i][j]);
 }}
  printf ("\nTranspose of matrix is :\n");
   for (i = 0; i < column ; i++)
    {
      for (j = 0; j < row ; j++)
	{
	  inverse[i][j] = matrix[j][i] ;
	  printf ("%d ", inverse[i][j]);
	}
      printf ("\n");
    }

}

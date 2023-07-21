#include <stdio.h>
int main ()
{
  int rows, columns, i, j;
  int matrix_1[10][10], matrix_2[10][10], added_matrix[10][10];
  printf ("\nenter  no of rows:");
     scanf ("%d", &rows);
  printf ("\nenter no of columns:");
     scanf ("%d", &columns);
  printf ("\nenter the elements of matrix_1:\n");
   for (i = 0; i < rows; i++)
   {
    for (j = 0; j < columns; j++)
    {
      scanf ("%d", &matrix_1[i][j]);
      }}
  printf ("\n enter the elements of matrix_2:\n");
   for (i = 0; i < rows; i++)
   {
    for (j = 0; j < columns; j++)
    {
      scanf ("%d", &matrix_2[i][j]);
      }}
  printf ("\nAdded matrix is:\n");
   for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  added_matrix[i][j] = matrix_1[i][j] - matrix_2[i][j];
	  printf ("%d ", added_matrix[i][j]);
	}
      printf ("\n");
    }

}

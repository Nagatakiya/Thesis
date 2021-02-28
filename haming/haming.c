#include <stdio.h>

#define SIZE 1000
#define capmax 20

int main(int argc, char* argv[])
{
  FILE* fp;
  int i, j;
  int sum; // FFの個数
  int cap_times;
  int haming[capmax];
  char bit[capmax][SIZE];

  for (i = 0; i < capmax; i++) {
	  haming[i] = 0;
  }
  sum = 0;
  cap_times = 0;
  
  fp = fopen(argv[1], "r");
  if ( fp == NULL ){
	  printf("Not Found");
  }

  
  for(i = 0; i < capmax && fgets( bit[i] , sizeof(bit[i]) , fp ) != NULL; i++){
	  //printf( "FF[%d]=%s" , i, bit[i] );
  }
  cap_times = i;
  for (j = 0; bit[0][j] != '\0'; j++); {

  }
  sum = j-2;

  printf("FF[%2d]=%c", 0, bit[0][0]);
  printf("\n");
  printf("sum = %d", sum);
  printf("\n");



  fclose(fp);
  

  for (i = 1; i < cap_times; i++) {
	  for (j = 0; j < sum; j++) {
		  //printf("bit[ 0][%4d] : bit[%2d][%4d] = %c : %c\n", j, i, j, bit[0][j], bit[i][j]);
		  if (bit[i-1][j] != bit[i][j]) {
			  haming[i]++;
		  }
	  }
  }

  for (i = 1; i < cap_times; i++) {
	  //printf("Cap[%2d] haming = ", i, );
	  printf("%d\n", haming[i]);
	  //printf("Cap[%2d] haming = %d\n", i, haming[i]);
  }


  return 0;

}

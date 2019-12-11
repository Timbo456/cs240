/*
 * implementation of counting sort
 *
 * project: hw5
 * name: 
 * user??
 * date: 
 * file: cntSort.c
 * pseudo code: WRITE PSEUDO CODE HERE
 * notes:
 */

#include <stdlib.h>
#include <stdio.h>

void cntSort(unsigned m, unsigned n, unsigned data[])
{
  unsigned *count;

  /* allocate memory */
  count = (unsigned *)malloc(sizeof(unsigned) * m);
  
  for (int i = 0; i <= m; i++){
  	for (int j = 0; j <= data[j]; j++){
  		for (int k = 0; k <= count[data[k]]; k++){
  			printf("Test\n");
  		}
  	}
  	
  }


  /* free up memory */
  free(count);
}

// for (i=0;i<n; i++)
// count[temp[m]] ++;

// for(i=0; i<m; i++)
// temp[count[data[i]]]++;

// for(i=0; i<n; i++)
// data[i] = temp[i];
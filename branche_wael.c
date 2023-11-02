#include <stdio.h>

for(int i = 0; i < n; i++) {
  for(int j = 0; j < m; j++)
    if(m[i][j])
      printf(" x ");
    else
      printf(" 0 ");
  printf("\n");
}

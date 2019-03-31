#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int N, P;
  scanf("%i %i", &N, &P);
  int pilhamatrix[P][P];
  for (int a = 0; a < P; a++){
    scanf("%i", &pilhamatrix[a][0]);
    for (int b = 1; b < pilhamatrix[a][0]+1; b++){
      scanf("%i", &pilhamatrix[a][b]);
    }
  }
}
#include "func.h"

void add_floats(double * restrict  a, double * restrict  b, double * restrict  c, double * restrict  d, double * restrict  e, int n){
//void add_floats(double * a, double * b, double * c, double * d, double * e, int n){
  int i,j;

  for (j=1; j<n-1; j++){
    for (i=1; i<n-1; i++){
      a[i] =e[j-1] + (c[i] * d[j+1]) ;
    }
  }

}

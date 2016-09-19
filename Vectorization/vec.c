#include <time.h>

struct coordinate {
  float x, y, z;
} aosobj[60000];

struct coordinate2 {
  float x[60000], y[60000], z[60000];
} soaobj;

int main(){

  int i,j,k,msize;
  double randV;

  randV=0;

  srand(time(NULL));
  randV=rand();
  printf("randV %f\n", randV);


  for(i=0; i<60000; i++) {
    aosobj[i].z=randV;
  }
  for(i=0; i<60000; i++) {
    soaobj.z[i]=randV;
  } 

  for(j=0; j<60000; j++) {
    randV=rand();
    randV=randV*0.11;
    for(i=0; i<60000; i++) {
      aosobj[i].x=i*j- randV;
      aosobj[i].y=i+j* randV;
      aosobj[i].z=i-j+ randV;
    }
    for(i=0; i<60000; i++) {
      soaobj.x[i]=i*j- randV;
      soaobj.y[i]=i+j* randV;
      soaobj.z[i]=i-j+ randV;
    } 

    randV=rand();
    randV=randV*0.11;

    for(i=0; i<60000; i++) {
      aosobj[i].x=    aosobj[i].y+  aosobj[i].z + randV;
    }

    for(i=0; i<60000; i++) {
      soaobj.x[i]= soaobj.y[i]+ soaobj.z[i] + randV;
    }
  }
}
#include<stdio.h>
int main(){
  int ell; /* length*/
  int w;   /* width */
  int s;   /* area */
  
  ell = 10;
  w = 5;
  s = 0;
  while(ell <= 100)
  {
	  s = (ell * w);
	  printf("length:  %3d, width: %3d, area: %3d \n", ell, w, s);
	  ell += 10;
  }
  return 0; 
}
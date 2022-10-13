/* count lines, words, and characters in input */
#include <stdio.h>

#define IN 1    
#define OUT 0   


int main(void)
{
  int c, nl, nw, nc, np, state, state_p, blc;


  state = OUT;
  state_p = OUT;
  nl = nw = nc = np = 0;
  blc = 1;
  
  
  while((c = getchar()) != EOF){
    ++nc;
    if (c == '\n'){
      ++nl;
		if (state_p == OUT){
			++blc;
		}
		state_p = OUT;
	}
    if (c == ' ' || c == '\n' || c =='\t'){
      state = OUT;
	}
    else if (state == OUT){
      state = IN;
      ++nw;
    }
	
	if (state_p == OUT){
		if (!(c == ' ' || c == '\n' || c == '\t')){
			if (blc > 0){
			++np;
			}
			blc = 0;
			state_p = IN;
		}
	}
	else if (state_p == IN)
		if (c == '\n'){
			state_p = OUT;
		}
    /* You will need to add some new code here within the while loop to
       correctly count the number of paragraphs.  Feel free to introduce and
       initialize new variables at the beginning of the main function. */

  }

  /* Change this printf so that it can print the number of paragraphs as well*/
  printf("%d %d %d %d\n", nl, nw, nc, np); 
  
  return 0;
}

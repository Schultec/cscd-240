/* find and print all the lines that include the given patten that has no white space */


#include <stdio.h>

#define MAXLINE 1000



int my_getline(char line[], int maxline);
int check(char line[], char p[]);



int main(int argc, char **argv)
{
  char line[MAXLINE];       // current input line
  int len;
  
  while ((len = my_getline(line, MAXLINE)) > 0)

    if(check(line, argv[1]))
      printf("%s", line);
  
  return 0;
}

/* getline: read a line into s, return length */
int my_getline(char s[], int lim)
{
  int c, i;

  for (i = 0; (i < lim-1) && ((c = getchar()) != EOF) && (c != '\n'); ++i)
    s[i] = c;
  if (c == '\n')
    {
      s[i] = c;
      ++i;
    }
  s[i] = '\0';
  return i;
}


/* 
   Check if the string p shows up in string line. 
   Both line and p are terminated by '\0'. 
   The terminal character '\0' is not considered in the pattern search. 
   Return 1 if line includes p; return 0, otherwise 
*/

int check(char line[], char p[])
{
	int i, match_count, g;
	i = match_count = g = 0;

	for (i = 0; line[i] != '\0'; ++i){
		if (p[g] == line[i]){
			++match_count;
			++g;
			if (p[g] == '\0')
				return 1;
		}else {
			g = 0;
		}
	}
	return 0;
	
  /* Fill out this function. In this assignment, we do not mind to have a slow 
     algorithm for searching the pattern. So feel free to implement any idea you 
     have to conduct the search. */



}

#include<stdio.h>

#define LOW 1
#define HIGH 5
#define STEP 1

int main()
{
	int w, h, x, y; /* width/height */
	float s; /* area */

	w = 0;
	h = 0;
	s = 0.0;
	for(x = LOW; x <= HIGH; x += STEP)
	{
		h = x;
		for(y = LOW; y <= HIGH; y += STEP)
		{
			w = y;
			s = (h * w)/(float)2;
			printf("height:  %2d, width: %2d, area: %0.1f \n", h, w, s);
			
		}
	}
	return 0;
}

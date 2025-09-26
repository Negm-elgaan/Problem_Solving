#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a = 0 , b = 0 , e = 0;
    
    float c = 0 , d = 0 , f = 0;
    
    scanf("%i %i" , &a , &b);
    scanf("%f %f" , &c , &d);
    e = a + b ;
    f = c + d ;
    printf("%i %i" , a + b  , a - b);
    printf("\n%.1f %.1f" , c + d , c - d); 
    
    return 0;
}


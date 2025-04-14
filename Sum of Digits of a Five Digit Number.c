#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
 
    int r,s=0;
    while(n>0)
    {
        
         r=n%10;
         s=s+r;
         n=n/10;
    }
    printf("%d",s);
    return 0;
}

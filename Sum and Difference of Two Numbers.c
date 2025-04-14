#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n,m;
    float f,l;
    
    int s1=0;
    float s2=0;
    int d1=0;
    float d2=0;
    
    scanf("%d %d",&n,&m);
    
    scanf("%f %f",&f,&l);
    
    s1=n+m;
    d1=n-m;
    
    printf("%d %d",s1,d1);
    printf("\n");
    s2=f+l;
    d2=f-l;
    
    printf("%0.1f %0.1f",s2,d2);
    
    
    
    return 0;
}

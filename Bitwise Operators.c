#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  
  int i,j,or=0,and=0,xor=0,maxand=0,maxor=0,maxxor=0;
  
  for(i=1;i<=n;i++)
  {
    for(j=i+1;j<=n;j++)
    {
        or = i|j;
        and = i&j;
        xor = i^j;
        
        if(maxor<or && k>or)
        maxor = or;
        
        if(maxand<and && k>and)
        maxand = and;
        
        if(maxxor<xor && k>xor)
        maxxor = xor;
    }
  }
  printf("%d\n%d\n%d\n",maxand,maxor,maxxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

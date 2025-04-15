#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int size,i,j;
    scanf("%d",&size);    
    int A[size];
    int S[100];
    for(i=0;i<size;i++)
    {
    scanf("%d",&A[i]);
    }
    for(j=0,i=0;i<size;i++)
    {
        S[j]=S[j]+A[i];
    }
    for(i=0;i<1;i++)
    printf("%d",S[i]);
    return 0;
}

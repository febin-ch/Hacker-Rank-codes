#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    scanf("%d",&size);
    int A[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
    
    for(int i=size-1;i>=0;i--)
    {
        printf("%d ",A[i]);
        
    }
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int find_nth_term(int n, int a, int b, int c) {
    if (n == 1) return a;
    if (n == 2) return b;
    if (n == 3) return c;

    
    int term1 = a, term2 = b, term3 = c, next;

    for (int i = 4; i <= n; i++) {
        next = term1 + term2 + term3;
        term1 = term2;
        term2 = term3;
        term3 = next;
    }
    return term3;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

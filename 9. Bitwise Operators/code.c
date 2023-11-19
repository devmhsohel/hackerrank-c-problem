#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int result_and = i & j;
            int result_or = i | j;
            int result_xor = i ^ j;

            if (result_and < k && result_and > max_and) {
                max_and = result_and;
            }

            if (result_or < k && result_or > max_or) {
                max_or = result_or;
            }

            if (result_xor < k && result_xor > max_xor) {
                max_xor = result_xor;
            }
        }
    }

    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

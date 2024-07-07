#include <stdio.h>
 
void findMissing(int a[], int b[], int n, int m) {
    // Base case: if n is zero, then there are no more elements to check
    if (n == 0) {
        return;
    }
     
    // Recursive case: check if the first element of a[] is in b[]
    int i;
    for (i = 0; i < m; i++) {
        if (a[0] == b[i]) {
            break;
        }
    }
     
    // If the first element of a[] is not in b[], print it
    if (i == m) {
        printf("%d ", a[0]);
    }
     
    // Recursively call findMissing with the remaining elements of a[] and b[]
    findMissing(a+1, b, n-1, m);
}
 
int main() {
    int a[] = { 1, 2, 6, 3, 4, 5 };
    int b[] = { 2, 4, 3, 1, 0 };
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
     
    findMissing(a, b, n, m);
    printf("\n");
     
    return 0;
}

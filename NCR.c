#include <stdio.h>
unsigned long long nCr(int n, int r) {
    if (r > n) return 0;
    if (r > n - r) r = n - r;  // Use the smaller r for efficiency

    unsigned long long result = 1;
    for (int i = 1; i <= r; i++) {
        result = result * (n - r + i) / i;
    }
    return result;
}
int main() {
    int n, r;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    unsigned long long result = nCr(n, r);
    printf("C(%d, %d) = %llu\n", n, r, result);

    return 0;
}

#include <stdio.h>
int fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}
float power(int x, int n) {
    if (n == 0)
        return 1;
    return x * power(x, n - 1);
}
float series(int x, int n, int term) {
    if (n == 0)
        return 0;
    if (term == 1)
        return x + series(x, n - 1, 3);
    if (n % 2 == 0)
        return power(x, term) / fact(term) + series(x, n - 1, term + 2);
    else
        return -power(x, term) / fact(term) + series(x, n - 1, term + 2);
}
int main() {
    int x, n;
    float sum;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);
    sum = series(x, n, 1);
    printf("Sum of series = %.4f", sum);
    return 0;
}


//A"good number" here is defined by the problem statement linked above. Typically this problem uses modular exponentiation and pattern counting. Implement an efficient solu-tion that works for large n (up to 1018 in some versions).

//Notes: Describe algorithmic complexity and reason about large exponents using fast
//exponentiation and modular arithmetic.

#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long ans = 1;
    long long MOD = 1000000007;

    long long even = (n + 1) / 2;
    long long odd  = n / 2;

    long long a = 5, b = even;
    while (b > 0) {
        if (b % 2) ans = (ans * a) % MOD;
        a = (a * a) % MOD;
        b /= 2;
    }

    long long c = 4, d = odd;
    while (d > 0) {
        if (d % 2) ans = (ans * c) % MOD;
        c = (c * c) % MOD;
        d /= 2;
    }

    printf("%lld", ans);
    return 0;
}


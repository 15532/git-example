#include <stdio.h>
#include <stdbool.h>

#define MAXN 50000000  // 最大的 n 值

int primes[MAXN / 10];  // 存储素数数组（最大约500万个素数）
bool not_prime[MAXN + 1];  // 标记合数的数组
int prime_count[MAXN + 1]; // 统计每个位置 i 的素数个数
int total_primes = 0;  // 素数计数

void linear_sieve(int n) {
    for (int i = 2; i <= n; ++i) {
        if (!not_prime[i]) {
            primes[total_primes++] = i;  // i 是素数，存入数组
        }
        for (int j = 0; j < total_primes && i * primes[j] <= n; ++j) {
            not_prime[i * primes[j]] = true;  // 标记 i * primes[j] 为合数
            if (i % primes[j] == 0) {
                break;  // 保证每个数只被其最小质因子筛去一次
            }
        }
        prime_count[i] = prime_count[i - 1] + (!not_prime[i] ? 1 : 0);  // 累计素数个数
    }
}

int main() {
    int n;
    linear_sieve(MAXN);  // 预处理素数直到最大值 50,000,000

    // 输入 n
    while (scanf("%d", &n) != EOF) {
        // 输出素数个数
        printf("%d\n", prime_count[n]);
    }

    return 0;
}
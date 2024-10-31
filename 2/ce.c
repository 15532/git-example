#include <stdio.h>
#include <stdbool.h>

#define N 1000 // 定义筛选的范围

int pri[N];        // 存放质数的数组
bool not_prime[N]; // 标记合数的数组
int pri_count = 0; // 质数的个数

void pre(int n)
{
    for (int i = 2; i <= n; ++i)
    {
        if (!not_prime[i])
        {
            pri[pri_count++] = i; // 将质数加入到质数数组中
        }
        for (int j = 0; j < pri_count; ++j)
        {
            int pri_j = pri[j];
            if (i * pri_j > n)
                break;                   // 超出范围，退出循环
            not_prime[i * pri_j] = true; // 标记合数
            if (i % pri_j == 0)
            {
                break; // 避免重复标记，跳出循环
            }
        }
    }
}

int main()
{
    int n = 100; // 筛选 2 到 100 之间的质数
    pre(n);

    // 输出质数
    printf("Primes up to %d:\n", n);
    for (int i = 0; i < pri_count; i++)
    {
        printf("%d ", pri[i]);
    }
    printf("\n");

    return 0;
}

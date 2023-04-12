#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
// 蛇形填写数值
/*
int main() {
    int n = 0, count = 1;
    while (scanf("%d", &n) == 1) {
        printf("%d\n", n);
        int x, y;
        if (n < 1) {
            printf("n must bigger than 1\n");
            continue;
        }
        std::vector<std::vector<int>> nums(n, std::vector<int>(n, 0));
        nums[x = 0][y = n - 1] = 1;
        while (count < n * n) { // 注意越界问题
           while (x + 1 < n && !nums[x+1][y]) nums[++x][y] = ++count;
           while (y - 1 >= 0 && !nums[x][y - 1]) nums[x][--y] = ++count;
           while (x - 1 >= 0 && !nums[x-1][y]) nums[--x][y] = ++count;
           while (y + 1 < n && !nums[x][y+1]) nums[x][++y] = ++count;
        }
        for (x = 0; x < n; ++x) {
            for (y = 0; y < n; ++y) {
                printf("%3d", nums[x][y]);
            }
            printf("\n");
        }
    }
    return 0;
}
*/
# define maxn 20
int a[maxn][maxn];
int main() {
    int n, x, y, tot = 0;
    scanf("%d", &n);
    memset(a, 0, sizeof(a));
    tot = a[x = 0][y = n - 1] = 1;
    if (n < 1) {
        return 1;
    }
    while (tot < n * n) {
        while (x + 1 < n && !a[x + 1][y]) a[++x][y] = ++tot;

        while (y - 1 >= 0 && !a[x][y - 1]) a[x][--y] = ++tot;

        while (x - 1 >= 0 && !a[x - 1][y]) a[--x][y] = ++tot;

        while (y + 1 < n && !a[x][y + 1]) a[x][++y] = ++tot;
        printf("%d %d\n", tot, n * n);
    }
    printf("3%d\n", n);
    for (x = 0; x < n; ++x) {
        for (y = 0; y < n; ++y) {
            printf("%3d", a[x][y]);
        }
        printf("\n");
    }

}
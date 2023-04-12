#include <iostream>
#include <cstdio>
#include <vector>
#define maxn 1000;
int main() {
    int n = 0, k = 0;
    while (scanf("%d %d", &n, &k) == 2) {
        if (n == 0) {
            printf("this n is 0\n");
            break;
        }
        std::vector<bool> lium(n + 1, false);
        for (int i = 1; i <= k; ++i) {
            for (int j = 1; j < n + 1; ++j) {
                if (j % i == 0) {
                    lium[j] = !lium[j];
                }
            }
        }
        for (int i = 1; i <= n; ++i) {
            if (lium[i])
                printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}

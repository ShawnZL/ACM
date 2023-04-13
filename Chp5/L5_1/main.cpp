#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int N = 0, Q = 0;
    while (scanf("%d %d", &N, &Q) == 2) {
        int x;
        std::vector<int> nums(N, 0);
        for (int i = 0; i < N; ++i) {
            scanf("%d", &nums[i]);
        }
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < Q; ++i) {
            scanf("%d", &x);
            int p = std::lower_bound(nums.begin(), nums.end(), x) - nums.begin();
            if (nums[p] == x) printf("%d found at %d\n", x, p + 1);
            else printf("%d not found\n", x);
        }
    }
    return 0;
}

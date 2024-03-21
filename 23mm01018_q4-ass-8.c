#include <stdio.h>
#include <stdlib.h>

void findDuplicates(int* nums, int n) {
    printf("Duplicate numbers: ");

    for (int i = 0; i < n; ++i) {
        int index = abs(nums[i]) - 1;
        if (nums[index] >= 0)
            nums[index] = -nums[index];
        else
            printf("%d ", abs(nums[i]));
    }

    printf("\n");
}

int main() {
    int nums[] = {1, -2, 3, 4, -2,4};
    int n = sizeof(nums) / sizeof(nums[0]);

    findDuplicates(nums, n);

    return 0;
}
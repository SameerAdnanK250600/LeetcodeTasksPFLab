/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int numsSize, int* returnSize) {
    int *newArray = (int *)calloc(numsSize, sizeof(int));
    *returnSize = numsSize;

    int odds = 0;
    int evens = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2) {
            odds++;
        } else {
            evens++;
        }
    }

    int i = 0;
    while (i < evens) {
        newArray[i] = 0;
        i++;
    }
    while (i < numsSize) {
        newArray[i] = 1;
        i++;
    }

    return newArray;
}

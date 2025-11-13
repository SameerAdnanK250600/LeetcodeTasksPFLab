/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *newArray = (int *)calloc(numsSize, sizeof(int));
    *returnSize = numsSize;
    for (int i = 0, j = 0; i<n; i++, j+=2) {
        newArray[j] = nums[i];
    }
    for (int i = 1, j = 1; i<=n; i++, j+=2) {
        newArray[j] = nums[i+n-1];
    }
    return newArray;
}

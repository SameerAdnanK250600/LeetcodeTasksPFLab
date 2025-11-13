/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int *newArray = (int *)calloc(*returnSize, sizeof(int));
    
    for (int i = 0; i < *returnSize; i++) {
        for (int j = i; j < *returnSize; j++) {
            newArray[j] = nums[i] + newArray[j]; 
        }
    }
    return newArray;
}

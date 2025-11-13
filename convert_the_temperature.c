/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    static double temps[2] = {0};
    *returnSize = 2;
    temps[0] = celsius + 273.15;
    temps[1] = celsius * 1.80 + 32.00;

    return temps;
}

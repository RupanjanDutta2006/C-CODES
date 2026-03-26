//TWO SUM
#include <stdio.h>
#include <stdlib.h>

/*
 * Note: The returned array must be malloced,
 * assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int i, j;
    int* result = (int*)malloc(2 * sizeof(int));
    for(i = 0; i < numsSize; i++) 
        for(j = i + 1; j < numsSize; j++) 
            if(nums[i] + nums[j] == target) 
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
    *returnSize = 0;
    return NULL;
}
int main()
{
    int n, i, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter target value: ");
    scanf("%d", &target);
    int returnSize;
    int* answer = twoSum(arr, n, target, &returnSize);
    if(answer != NULL)
    {
        printf("Indices: %d and %d\n", answer[0], answer[1]);
        free(answer);
    }
    else
        printf("No pair found.\n");
    free(arr);
    return 0;
}
/*#include <stdio.h>
int n;
void ser(int data, int arr[])
{
    int i, j, found = 0;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < i; j++)   // Correct loop
        {
            if(arr[i] + arr[j] == data)
            {
                printf("The indices are %d and %d\n", i, j);
                found = 1;
            }
        }
    }
    if(found == 0)
        printf("No such pair found\n");
}
int main()
{
    int i, data;
    printf("Enter the Range = ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements of the Array = ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("The Array is = ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nEnter the Value to be Searched For = ");
    scanf("%d", &data);
    ser(data, arr);
    return 0;
}
*/
//Remove Duplicates from Sorted Array
#include<stdio.h>
#include<stdlib.h>
int removeDuplicates(int* nums, int numsSize) 
{
    if(numsSize == 0)
        return 0;
    int i = 0;   
    for(int j = 1; j < numsSize; j++)
        if(nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    return i + 1;   
}
int main()
{
    int n,i,numsSize=1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int* nums = (int*)malloc(n * sizeof(int));
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    printf("The Array is = \n");
    for(i=0;i<n;i++)
        printf("%d ",nums[i]);
    printf("\nThe Number of non-Duplicate element is = %d",removeDuplicates(nums,n));
    free(nums);
    return 0;
}
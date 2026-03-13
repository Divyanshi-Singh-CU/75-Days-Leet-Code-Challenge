bool containsDuplicate(int* nums, int numsSize){

    int compare(const void *a, const void *b)
    {
        return (*(int*)a - *(int*)b);
    }

    int i;

    qsort(nums, numsSize, sizeof(int), compare);

    for(i = 0; i < numsSize - 1; i++)
    {
        if(nums[i] == nums[i+1])
        {
            return true;
        }
    }

    return false;
}


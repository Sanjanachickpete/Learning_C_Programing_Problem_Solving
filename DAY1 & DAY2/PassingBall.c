
#include <stdbool.h>

bool canJump(int* nums, int numsSize)
{
    int max = 0;
    int i;

    for (i = 0; i < numsSize; i++)
    {
        if (i > max)
            return false;

        if (i + nums[i] > max)
            max = i + nums[i];
    }

    return true;
}

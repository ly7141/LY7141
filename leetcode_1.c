//给定一个整数数组和一个目标值，找出数组中和为目标值的两个数。
//
//你可以假设每个输入只对应一种答案，且同样的元素不能被重复利用。
//
//示例 :
//
//给定 nums = [2, 7, 11, 15], target = 9
//
//因为 nums[0] + nums[1] = 2 + 7 = 9
//所以返回[0, 1]
/**
* Note: The returned array must be malloced, assume caller calls free().
*/

#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target) //指针函数:返回某一类型的指针
{
	int i, j;
	int *a = (int*)malloc(2*sizeof(int));
	for (i = 0; i<numsSize; i++)
	{
		for (j = i + 1; j<numsSize; j++)
			if (nums[i] + nums[j] == target)
			{
				a[0] = i;
				a[1] = j;
				break;
			}
	}
	return a;
}

void main()
{
	int *num = (int*)malloc(4 * sizeof(int));
	int	target,i=0;
	do {
		scanf("%d", &num[i++]);
	} while (getchar() != '\n');
	/*for (int i = 0; i < 4; i++)
	{
		scanf("%d", &num[i]);
	}*/
	scanf("%d", &target);
	int *a = twoSum(num, i, target);
	printf("%d,%d", a[0], a[1]);
}
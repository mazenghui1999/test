#include "list.h"
//移除元素;
int Delete(int* a, int size, int val)
{
	int i = 0;
	int length = 0;
	while (i < size)
	{
		if (a[i] != val)
		{
			a[length] = a[i];
			++length;
		}
		++i;
	}
	return length;
}
void main(int argv,char* argc[])
{
	int a[] = { 3, 2, 2, 3 };
	int element;
	printf("请输入您要删除的元素：\n");
	scanf("%d", &element);
	int size = sizeof(a) / sizeof(a[0]);
	int length=Delete(a, size, 2);
	for (int i = 0; i < length; i++)
	{
		printf("%d  ", a[i]);
	}
	system("pause");
}




//删除排序数组中的重复项
/*int removeDuplicates(int *nums, int numsSize)
{
	int src1 = 0,src2 = 1;
	int dst = 0;

	while (src2 < numsSize)
	{
		nums[dst] = nums[src1];
		++dst;

		if (nums[src1] != nums[src2])
		{
			++src1;
			++src2;
		}
		else
		{
			while (src2 < numsSize && nums[src1] == nums[src2])
			{
				++src2;
			}
			src1 = src2;
			++src2;

		}
	}
	if (src1 < numsSize)
	{
		nums[dst] = nums[src1];
		++dst;
	}
	return dst;
}

void main(int argv, void* argc[])
{
	int a []= { 0,1, 1, 1, 2, 3, 3 };
	int size = sizeof(a) / sizeof(a[0]);
	/*for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		if (a[i] == a[i + 1])
		{
			size--;
		}
	}
	int length=removeDuplicates(a, size);
	printf("%d\n", length);
	for (int i = 0; i < length; ++i)
	{
		printf("%d  ", a[i]);
	}
	system("pause");
}*/


////////合并数组
/*void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
	//end1:nums1的末尾
	//end2:nums2的末尾
	//end:合并之后整个数组的末尾
	int end1 = m - 1;
	int end2 = n - 1;
	int end = m + n - 1;

	while (end1 >= 0 && end2 >= 0)
	{   //选出尾最大的元素，存放到整个数组的末尾
		//每存放一个元素，尾向前移动一个位置
		if (nums1[end1] > nums2[end2])
		{
			nums1[end--] = nums1[end1--];
		}
		else
		{
			nums1[end--] = nums2[end2--];
		}
	}
	//剩余元素依次向末尾存放
	while (end1 >= 0)
	{
		nums1[end--] = nums1[end1--];
	}

	while (end2 >= 0)
	{
		nums1[end--] = nums2[end2--];
	}
}
*/


///////合并两个有序数组
/*void merge(int*a, int*b, int sizea, int sizeb)
{
	int j=0;
	for (int i = 0; i < sizea; ++i)
	{
		if (a[i] == 0)
		{
			a[i] = b[j++];
		}
	}
}
void swap(int*a, int*b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void main(int argv,char* arhc[])
{
	int a[] = { 1,2,3,4,0,0 };
	int b[] = { 2,6};
	int sizea = sizeof(a) / sizeof(a[0]);
	int sizeb = sizeof(b) / sizeof(b[0]);
	merge(a, b, sizea, sizeb);
	for (int i = 0; i < sizea - 1; ++i)
	{
		bool is_swap = false;
		for (int j = i; j < sizea - i - 1; ++j)
		{
			if (a[j] > a[j + 1])
			{
				swap(&(a[j]), &(a[j + 1]));
				is_swap = true;
			}
		}
		if (!is_swap)
			break;
	}
	for (int i = 0; i < sizea; ++i)
	{
		printf("%d  ", a[i]);
	}
	system("pause");
}
*/
//////旋转数组
/*void rotate(int *a, size_t size,size_t k)
{
		k = k%size;
		int tmp;
		for (size_t i = 0; i < k; ++i)
		{
			tmp = a[size - 1];
			for (size_t j = size - 1; j > 0; --j)
			{
				a[j] = a[j - 1];
			}
			a[0] = tmp;
		}
}

void reverse(int* nums, int begin, int end)
{
	while (begin < end)
	{
		int tmp = nums[begin];
		nums[begin] = nums[end];
		nums[end] = tmp;

		++begin;
		--end;
	}
}

// 三趟逆置倒的思路
void rotate(int* nums, int numsSize, int k){
	if (k > numsSize)
	{
		k %= numsSize;
	}

	reverse(nums, 0, numsSize - 1);
	reverse(nums, 0, k - 1);
	reverse(nums, k, numsSize - 1);
}

void main(int argv, char* argc[])
{
	int select= 1;
	size_t k;
	int a[] = { 2, -1, 3, 5 };
	size_t size = sizeof(a) / sizeof(a[0]);
	while (select)
	{
		printf("请输入你要旋转的次数\n");
		scanf("%d", &k);
		rotate(a,size,k);
		for (size_t i = 0; i < size; ++i)
		{
			printf("%d  ", a[i]);
		}
	}
	system("pause");
}

*/

/*void reverse(int* nums, int begin, int end)
{
	while (begin < end)
	{
		int tmp = nums[begin];
		nums[begin] = nums[end];
		nums[end] = tmp;

		++begin;
		--end;
	}
}
int * add(int* a, int asize, int k, int* returnSize)
{
	//超出的情况
	int* addret = (int*)malloc(10001 * sizeof(int));
	//第i位的结果
	int reti = 0;
	//从低位开始相加
	int ai = asize - 1;
    
	int next = 0; //进位

	while (ai >= 0 || k > 0)
	{
		//取数组的值
		int x1 = 0;
		if (ai >= 0)
		{
			x1 = a[ai];
			--ai;
		}

		int x2 = 0;
		if (k > 0)
		{
			x2 = k % 10;
			k /= 10;

		}

		int ret = x1 + x2 + next;
		if (ret > 9)
		{
			ret %= 10;
			next = 1;
		}
		else
		{
			next = 0;
		}
		addret[reti++] = ret;
	}
	if (next == 1)
	{
		addret[reti++] = 1;
	}

	reverse(addret, 0, reti - 1);
	*returnSize = reti;
	return addret;

}


void main(int argv,char*argc[])
{

	int a[] = { 9, 3, 4 };
	int select = 1;
	size_t val;
	int* res;
	while (select)
	{
		int size = sizeof(a) / sizeof(a[0]);
		printf("请输入你要加的数据：\n");
		scanf("%d", &val);
	    res=add(a, size, val, &size);
		for (int i = 0; i < size ; ++i)
		{
		  printf("%d  ", (res[i]));
		}
		printf("\n");
	}

	system("pause");
}


*/
/*void main(int argv, char* argc[])
{
	Data Mdata;
	DataInit(&Mdata, 4);
	

	Elemtype item;
	int select = 1;
	while (select)
	{
		printf("================\n");
		printf("      1 push    \n");
		printf("      2 show    \n");
		printf("      0 quit    \n");
		printf("================\n");
		printf("请输入你的选择：\n");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			printf("请输入你的数组：\n");
			do
			{
				scanf("%d", &item);
				Datapush(&Mdata, item);
			} while (getchar() != '\n');
			break;
		case 2:
			DataShow(&Mdata);
		default:
			break;
		}
	}
	DataDestory(&Mdata);
	printf("bye!\n");
	system("pause");
}
*/

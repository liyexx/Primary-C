

#include <stdio.h>
int Binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid + 1;
		}
		else
		{
			return mid;
		}
	}
		return -1;

}
int main()
{
	int k = 7;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int pos=Binary_search(arr, k, sz);
	if (-1 == pos)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了，下标为%d\n", pos);
	}

	return 0;
}



#include <stdio.h>
void Add(int* p)
{
	*p = *p + 1;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
	return 0;
}
#include <stdio.h>
int Add(int n)
{
	n= n + 1;
	return n;
}
int main()
{
	int num = 0;
	num=Add(num);
	printf("%d\n", num);
	num = Add(num);
	printf("%d\n", num);
	num = Add(num);
	printf("%d\n", num);
	num = Add(num);
	printf("%d\n", num);

}



////实现一个整形有序数组的二分查找（函数）
//#include <stdio.h>
//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//
//
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//找到了
//		}
//	}
//	return -1;//没找到
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//找到返回下标，找不到返回-1
//	//计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int pos=binary_search(arr, k, sz);
//	if (-1 == pos)
//		printf("找不到\n");
//	else
//		printf("找到了，下标为:%d\n", pos);
//
//	return 0;
//}


//每调用一次函数，num+1
//#include <stdio.h>
//Add(int* p)
//{
//	*p = *p + 1;//or (*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//
//}
// 
// 
//#include <stdio.h>
//Add(int n)
//{
//	return n + 1;
//}
//int main()
//{
//	int num = 0;
//	num=Add(num);
//	printf("%d\n", num);
//	return 0;
//}
//
//


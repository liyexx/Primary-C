////ʵ��һ��������������Ķ��ֲ��ң�������
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
//			return mid;//�ҵ���
//		}
//	}
//	return -1;//û�ҵ�
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//�ҵ������±꣬�Ҳ�������-1
//	//���������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int pos=binary_search(arr, k, sz);
//	if (-1 == pos)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±�Ϊ:%d\n", pos);
//
//	return 0;
//}


//ÿ����һ�κ�����num+1
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


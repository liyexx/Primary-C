

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
		printf("û�ҵ�\n");
	}
	else
	{
		printf("�ҵ��ˣ��±�Ϊ%d\n", pos);
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




//ģ�鿪����test.c:����ģ�飬�����ú����Ļ���#include "xxxxx.h"
			//.c����������
            //.h:��������


//ǰ�������ʡ������

//�����ݹ�
//�Լ����Լ�
//������򵥻�

//���»�С

//ջ������������̬��
//ÿһ�ε��ú������������ڴ��ջ���ڿ���һ��ռ�

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
#include <stdio.h>

void Print(unsigned int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d ", n%10);
}

int main()
{
	unsigned int n = 0;
	scanf_s("%d", &n);
	Print(n);

	return 0;

}

//��д������������ʱ����������ַ������ȡ�
#include <stdio.h>

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "xxxczszcsx";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}

//��д��������������ʱ����������ַ������ȡ�
#include <stdio.h>
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
 }
int main()
{
	char arr[] = "asadadas";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}
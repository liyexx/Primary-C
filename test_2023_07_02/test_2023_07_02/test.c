

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




//模块开发，test.c:测试模块，这里用函数的话用#include "xxxxx.h"
			//.c：函数定义
            //.h:函数声明


//前定义可以省略声明

//函数递归
//自己调自己
//把问题简单化

//大事化小

//栈区，堆区，静态区
//每一次调用函数，都会在内存的栈区内开辟一块空间

//接受一个整型值（无符号），按照顺序打印它的每一位。
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

//编写函数允许创建临时变量，求出字符串长度。
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

//编写函数不允许创建临时变量，求出字符串长度。
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
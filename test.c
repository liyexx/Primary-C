//简单递归的代码复习


//接受一个整型值（无符号），按照顺序打印它的每一位
#include <stdio.h>
void Print(unsigned int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d ", n % 10);
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
		*str++;
	}
	return count;
}
int main()
{
	char arr[] = "ghjkl";
	int len = my_strlen(arr);
	printf("%d", len);
}

//编写函数不允许创建临时变量，求出字符串长度。
#include <stdio.h>
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return (1 + my_strlen(str + 1));
	}
	else
		return 0;
}
int main()
{
	char arr[] = "ghjkl";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}





//学习日常

//写一个函数求阶乘
   //递归的程度不能太深，程序会挂，需要用迭代的思维去解决（循环）
#include <stdio.h>
int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n* Fac(n - 1);
}

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int ret = Fac(n);
	printf("%d", ret);
	return 0;

}

//求第n个斐波那契数（兔子数列）
1，1，2，3，5，8，13
//前两个数相加等于第三个数
#include <stdio.h>
int Fib(int n)
{
	if (n <= 2)
		//前两个数已知。
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int main()
{
	int n = 0;
	//n是指第几个斐波那契数。
	scanf_s("%d", &n);
	//函数求
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}


#include <stdio.h>
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	//接下来要用一个循环表示
	//c=a+b
	//a=b
	//b=c
	while(n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	//n是指第几个斐波那契数。
	scanf_s("%d", &n);
	//函数求
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}
//非递归的形式更加适用于斐波那契数，递归容易出现stack overflow
//需要平衡程序运行时的简洁性与开销之间的关系来选择时递归还是迭代。


//分析汉诺塔和青蛙跳台阶问题


//�򵥵ݹ�Ĵ��븴ϰ


//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
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


//��д������������ʱ����������ַ������ȡ�
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

//��д��������������ʱ����������ַ������ȡ�
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





//ѧϰ�ճ�

//дһ��������׳�
   //�ݹ�ĳ̶Ȳ���̫������ң���Ҫ�õ�����˼άȥ�����ѭ����
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

//���n��쳲����������������У�
1��1��2��3��5��8��13
//ǰ��������ӵ��ڵ�������
#include <stdio.h>
int Fib(int n)
{
	if (n <= 2)
		//ǰ��������֪��
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int main()
{
	int n = 0;
	//n��ָ�ڼ���쳲���������
	scanf_s("%d", &n);
	//������
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
	//������Ҫ��һ��ѭ����ʾ
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
	//n��ָ�ڼ���쳲���������
	scanf_s("%d", &n);
	//������
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}
//�ǵݹ����ʽ����������쳲����������ݹ����׳���stack overflow
//��Ҫƽ���������ʱ�ļ�����뿪��֮��Ĺ�ϵ��ѡ��ʱ�ݹ黹�ǵ�����


//������ŵ����������̨������


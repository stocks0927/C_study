#define _CRT_SECURE_NO_WARNINGS1
//#include <stdio.h>
//int main()
//{
//	//char ch = 'A';
//	//printf(" % c\n", ch);
//	//int age = 20;
//	//printf("%d", age);
//	//double p = 2.352342446;
//	//printf("%lf", p);
//	/*printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));*/
//	int a;
//	int b;
//	int c;
//	scanf_s("%d%d" , &a, &b);
//	c = a + b;
//	printf("c=%d\n", c);
//	return 0;
//}20000209
//#include <stdio.h>
//int main()
//{
	/*int line = 0;
	printf("�������\n");
		while(line < 20000)
	{
		printf(" ��һ�д���:%d\n",line);
		line++;
	}
		if(line>=20000)
	printf("�õ�offer\n");*/
	/*int arr[5] = { 1,2,5,9,10 };
	int i = 0;
	while (i < 5)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	printf("%d\n", arr[4]);*/
	/*int a = 1;
	int b = a << 2;
	printf("%d\n", b);*/
//
//#include <stdio.h>
//void test()
//	{
//		static int a = 1;
//		a++;
//			printf("a=%d\n", a);
//	}
//int main()
///*{
////	int i = 0;
////	while (i < 5)
////	{
////		test();
////		i++;
////	}*/
////{
////	extern int a_hta;
////printf("a_hta =%d\n",a_hta);
////
////	return 0;
////}
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//����������1��������������0


//int is_prime(int n)
//{
//	//2~n-1
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		return 0;
//	}
//	if (j == n)
//	return 1;
//
//}
//
//int main()
//{//�ҳ�100-200֮�������
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ ����
//		if(is_prime(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}
#include <stdio.h>
//int binary_search(int arr[], int k,int sz)
//{
//	
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//�м�Ԫ���±�
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//
////���ֲ�����-�����������в��Ҿ���ĳ����-�ҵ�������������±꣬�Ҳ�������-1
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr, k,sz);
//
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
////	return 0;
//}

#include <stdio.h>
int jump(int n)
{
	if (n < 3)
	{
		//����n�ķ�Χ��[0, 3]
		return n;
	}
	else
	{
		//n>3��ʱ��
		return jump(n - 1) + jump(n - 2);
	}
}

int main()
{
	int num = 0;
	printf("������һ��̨����:> ");
	scanf_s("%d", &num);


	int ret = jump(num);

	printf("С������ %d�� ����\n", ret);
	return 0;
}

//#include<iostream>
//using namespace std;

//int main()
//{
//	//int i;
//	//cin >> i;
//	//cout << i << endl;
//	//return 0;
//	
//	//const int len = 10;
//	//int arr[5][len] = { 0 };
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 10; j++) {
//	//		arr[i][j] = i * 10 + j;
//	//		cout << " " << arr[i][j];
//	//	}
//	//	cout << endl;
//	//}
//
//	int arr[][10] = {
//		{2,3,5,6},
//		{22,33,452,76},
//		{42,83,35,46},
//		{92,53,75,26},
//		{62,983,785,776},
//		};
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 10; j++) {
//			//arr[i][j] = i * 10 + j;
//			cout << " " << arr[i][j];
//		}
//		cout << endl;
//	}
//	
//	int *p = arr[0];
//	cout << (*p) << " p: " << (*(p + 1)) << endl;
//	cout << (*(p + 13)) << " p: " << (*(p + 25)) << endl;
//
//	// ֱ�Ӷ���ָ�������ָ�룬���ָ��ָ����10��Ԫ�ص�һ������
//	//int(*pp)[10];
//	//pp = arr;
//	//cout << (**pp) << " pp: " << (**(pp + 1)) << endl;
//	//cout << (*(*(pp + 2))) << " pp: " << (*(*(pp + 2)+7)) << endl;
//
//	// ֱ�Ӷ���ָ�������ָ�룬���ָ��ָ��ڶ�����10��Ԫ�ص�һ������
//	int(*pp)[10];
//	pp = &arr[1];
//	cout << (**pp) << " pp: " << (**(pp + 1)) << endl;
//	cout << (*(*(pp + 2))) << " pp: " << (*(*(pp + 2) + 7)) << endl;
//
//	// �����������Ͳ���Ҫָ��ָ�������ָ�뵽��Ҫָ���������
//	// �����⣬�������������������Ҫ����ָ�������ָ�룬��Ϊ��ά����
//	// �У��ڶ�����������ָ������
//	//int**pp;
//	//int *np = arr[1];
//	//pp = &(np);
//	//cout << (**pp) << " pp: " << (**(pp + 1)) << endl;
//	//cout << (*(*(pp + 2))) << " pp: " << (*(*(pp + 2) + 7)) << endl;
//	return 0;
//}

#include<iostream>
#include <stdarg.h>
using namespace std;

int Sum(int n, ...);

int Sum(int n, ...)
{
	int i = 0;
	int sum = 0;
	va_list ptr;//����һ��char*��ָ��ptr
	va_start(ptr, n);//��ʼ��ָ��λ�ã�ָ��ָ������б��һ������Ҳ����n
	for (i = 0; i < n; i++) {
		sum += va_arg(ptr, int);//��ȡ��һ������
	}
	va_end(ptr);
	return sum;
}

int main()
{
	int sum1 = Sum(2,1,2);
	cout << "sum1:" << sum1 << endl;
	int sum2 = Sum(3, 1, 2, 5);
	cout << "sum2:" << sum2 << endl;
}













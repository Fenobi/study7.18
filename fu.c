#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stddef.h>

//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//#define OFFSETOF(type,m_name) (size_t)&(((type*)0)->m_name)
////����((type*)0)����˼���ڵ�ַ0����һ���ṹ�����
////Ȼ��((type*)0)->m_name����˼��ͨ���ṹ���ҵ���Ա
////֮�󽫳�Ա�ĵ�ַ�ҵ�������ǿ��ת��Ϊsize_t���ͣ���ʱ���Ǹó�Ա��ƫ����
//
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}

//#define SWAP(X) ((X & 0xaaaaaaaa) >> 1) ^ ((X & 0x55555555) << 1)
//
//int swap(int x)
//{
//	int a = x & 0xaaaaaaaa;
//	int b = x & 0x55555555;
//	x = (a >> 1) ^ (b << 1);
//	return x;
//	
//}
//
//int main()
//{
//	int a = 41;
//	printf("%d\n", SWAP(a));
//	printf("%d\n", swap(a));
//	
//	return 0;
//}
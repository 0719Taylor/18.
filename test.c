#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n",sizeof(s=a+5));  //2      sizeof()中的表达式不参与运算
//	printf("%d\n",s); //0	
//}



//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n",a);
//	a = a & (~(1 << 2));
//	printf("%d\n",a);
//	//00000000000000000000000000001011
//	//00000000000000000000000000000100    即1<<2
//	//00000000000000000000000000001111
//	//11111111111111111111111111111011    即~（1<<2）
//	//00000000000000000000000000001011
//	//~(1<<2)
//	/*int a = 0;
//	//~ 按（二进制）位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111  -- 补码
//	//11111111111111111111111111111110  -- 反码
//	//10000000000000000000000000000001  -- 原码
//	//-1
//	//printf("%d\n",~a);*/
//}







//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	struct Stu s1 = { "张三",18,"1907080701505"};
//	struct Stu* ps = &s1;
//	printf("%s\n",ps->name);
//	/*printf("%s\n",s1.name);
//	printf("%d\n",s1.age);
//	printf("%s\n",s1.id);*/
//	return 0;
//}






//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//由于a是char类型，只能存放一个字节，所以会发生截断，a=00000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//	
//	//a和b如何相加
//	//00000011 
//	//01111111
//	//整型提升 -- 参与表达式运算，就会发生整型提升，按照变量的数据类型的符号位来提升
//	//00000000000000000000000000000011 - a 
//	//00000000000000000000000001111111 - b
//	//00000000000000000000000010000010 - 相加的结果
//	//由于c是char类型，再次发生截断
//	char c = a + b;
//	//10000010 - c
//	//11111111111111111111111110000010 - 补码（整型提升）
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 原码
//	//-126
//	printf("%d\n",c);
//	return 0;
//}






//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)    //a会发生整型提升,所以不相等
//		printf("a"); 
//	if (b == 0xb600)  //b会发生整型提升,所以不相等
//		printf("b");
//	if (c == 0xb6000000) 
//		printf("c");
//}    //只会打印c







int main()
{
	char c = 1;
	printf("%u\n",sizeof(c));  //1
	printf("%u\n", sizeof(+c));//4   只要参与表达式运算,就会发生整型提升
	printf("%u\n", sizeof(!c));//1
	return 0;
}
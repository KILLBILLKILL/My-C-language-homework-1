/ #include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a=0;
//	for (a = 100; a < 201; a++)
//	{
//		int b=0;
//		for (b = 2; b < a; b++){
//
//			if (a%b ==0){
//
//				break;
//			}
//			if (b == a - 1){
//
//				printf("%d\n", a);
//
//			}
//
//		}
//	
//	}
//
//	system("pause");
//	return 0;
//}
//  这是求100 到 200 之间素数的C语言程序 ，其中的主要思想为 素数是只能被1和它本身整除的数，从2遍历到其本身减一；
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	for (a = 1; a < 10; a++){
//		
//		for (b = 1; b <= a; b++)
//		{
//
//			printf("%d*%d=%-2d ", a, b, a*b);
//		}
//
//		printf("\n");
//
//
//	}
//	system("pause");
//	return 0;
//
//
//
//}
//这是输出乘法口诀表的程序，其中 %d表示一般输出，%2d就是将数字按照宽度2采用右对齐的方式输出，若数据位不到两位则左边补空格，%-2d反之亦然；%02d和%d差不多只不过左边补0；
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a = 0;
//	for (a = 1000; a < 2001; a++)
//	{
//		if (a % 4 == 0 && a % 100 != 0 || a % 100 == 0)
//		{
//
//			printf("%d\n", a);
//		}
//	}
//	system("pause");
//	return 0;
//}
//这是输出1000到2000之间的闰年的函数 主要抓住两点 第一点：能被4整除不能被100整除 第二点：能被400整除的都是闰年
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a = 10;
//	int b = 9;
//	int c;
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d\nb=%d\n", a, b);
//	system("pause");
//	return 0;
//
//
//
//}
//给定两个整形变量的值，将两个值的内容进行交换。 
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a = 10;
//	int b = 9;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d\nb=%d\n", a, b);
//	system("pause");
//	return 0;
//
//}
//不允许创建临时变量，交换两个数的内容（附加题） 深刻理解了赋值的原理
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int i = 0;
//	int arr[10] = { 10.9, 8, 56, 8, 9, 45, 98, 45, 15 };
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//
//	}
//	printf("max=%d", max);
//
//	system("pause");
//	return 0;
//}
//.求10 个整数中最大值。
//#include<stdio.h>
//#include<stdlib.h>
//#define _CRT_SECURE_NO_DEPRECATE         
//int main(){
//	int a,b,c,t;
//	printf("先生请你输入三个数：\n");
//	scanf("%d %d %d",&a,&b,&c);
//	if (a < b){
//		t = b;
//		b = a;
//		a = t;
//}
//	if (a < c){
//		t = c;
//		c = a;
//		a = t;
//
//
//
//	}
//	if (b < c){
//		t = c;
//		c = b;
//		b = t;
//
//	}
//	printf("%d %d %d",a,b,c);
//	system("pause");
//	return 0;
//
//
//
//}
//将三个数按从大到小输出。
//#include<stdio.h>
//#include<stdlib.h>
//#define _CRT_SECURE_NO_DEPRECATE 
//int main(){
//	while (1){
//		int a, b, c;
//		printf("请输入两个数求它们的最大公约数(中间用空格隔开）\n");
//		scanf("%d %d", &a, &b);
//		c = a%b;
//		while (c != 0){
//			a = b;
//			b = c;
//			c = a%b;
//
//		}
//		printf("最大公约数是%d\n", b);
//	}
//		system("pause");
//		return 0;
//	
//
//}
//求两个数的最大公约数。利用辗转相除法
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int arr1[] = { 1, 5, 6, 7, 8, 9, 5, 7,8,};
//	int arr2[] = { 1, 5, 5, 8, 9, 8, 9, 10,9,};
//	int i, j, t, size;
//	size = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < size; i++){
//		t = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = t;
//	}
//	for (i = 0; i < size; i++){
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < size; i++){
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int sign=1;
//	double sum = 1,b,a;
//	for (a = 2; a < 101; a++)
//	{
//		sign = -sign;
//		b = sign*(1/a);
//		sum = sum + b;
//	}
//	printf("计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值;%0.8f ", sum);
//	system("pause");
//	return 0;
//}
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。0.8中的小数点前的数字表示总共多少位，0表示没限制；小数点后的数字表示浮点数精度是的多少位，也就浮点数的小数点后几位；例如：“12.6f%”表示总共12位，精度为6位。
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a;
//	int count=0;
//	for (a = 1; a < 101; a++)
//	{
//		if (a % 10 == 9){
//
//			count++;
//		}
//		if (a / 10 == 9){
//
//			count++;
//		}
//
//
//	}
//	printf("%d",count);
//
//	system("pause");
//	return 0;
//
//}
//编写程序数一下 1到 100 的所有整数中出现多少次数字9。
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	int line = 7;
//	for (a = 0; a < line; a++)
//	{
//		for (b = 0; b < 2 * a + 1; b++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	for (a = 0; a < line; a++)
//	{
//		for (b = 0; b < 2 *(line-a-1)-1 ; b++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	system("pause");
//	return 0;
//}
//.在屏幕上输出以下图案： 
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*
//#include<stdio.h>
//#include<stdlib.h> 
//int main()
//{
//	int i = 0;
//	int line = 7;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - i - 1) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//
//
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a,b,c,d;
//	for (a = 100; a < 1000; a++)
//	{
//		b = a /100;
//		c = a % 10;
//		d = (a/10)%10;
//		if (a == b*b*b + c*c*c + d*d*d)
//		{
//
//			printf("%d\n", a);
//
//		}
//
//	}
//
//
//
//
//
//	system("pause");
//	return 0;
//}
//求出0～999之间的所有“水仙花数”并输出。“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3?，则153是一个“水仙花数”。 

/*
在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
153 = 1^3 + 5^3 + 3^3。
370 = 3^3 + 7^3 + 0^3。
371 = 3^3 + 7^3 + 1^3。
407 = 4^3 + 0^3 + 7^3。
*/
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a;
//	printf("请输入一个数：");
//	scanf("%d",&a);
//	int b = 5;
//	int sum=0;
//	int c=0;
//	for (b = 0; b <= 5; b++)
//	{
//		c = c * 10 + a;
//		sum += c;
//
//
//	}
//	printf("%d", sum);
//
//
//
//	system("pause");
//	return 0;
//}
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，例如：2+22+222+2222+22222 
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int ch;
//	int count = 0;//定义一个计数器count
//
//	while ((ch = getchar()) != EOF)//循环输入，EOF结束
//	{
//		if (ch == '{')
//		{
//			count++;
//		}
//		//当遇到{时，计数器+1
//
//		if (ch == '}' && count == 0)
//
//		{
//			printf("不匹配\n");
//			return 0;
//		}
//
//		//当遇到}但计数器为0了，输出不匹配，即为}在{前边
//
//		if (ch == '}' && count != 0)
//		{
//			count--;
//		}
//
//		//当遇到}且计数器不为0时，计数器-1
//
//	}
//
//	if (count == 0)
//	{
//		printf("匹配!\n");
//	}
//	else
//	{
//		printf("不匹配!\n");
//	}//判断计数器count
//
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void meau()
//{
//	printf("***********************\n");
//	printf("***********************\n");
//	printf("*******play打字1*******\n");
//	printf("*******exit打字2*******\n");
//}
//void game()
//{
//	int a = 0;
//	int b = 0;
//	b = rand() % 100 + 1;
//	while (1)
//	{
//		printf("输入你想要输入的数;");
//		scanf("%d",&a);
//		if (a > b)
//		{
//			printf("你输入的数字大了\n");
//		}
//		else if (a < b)
//		{
//			printf("你输入的数字小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		meau();
//		printf("请选择;\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("游戏结束");
//			break;
//		default:
//			printf("输入有误，请重新输入");
//			break;
//		}
//
//	} while (input);
//	system("pause");
//	return 0;
//}
//完成猜数字游戏。 
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a ;
//	printf("输入你想要查找的数字");
//		scanf("%d", &a);
//	int arr[19] = { 1, 22, 66, 88, 99, 55, 21, 66, 77, 88, 99, 55, 66, 88, 99, 55, 44, 33, 66 };
//	int left, right;
//	left = 0;
//	right = 18;
//	
//	while(right >= left){
//		int mid = (right + left) / 2;
//
//		if (arr[mid] == a)
//		{
//			printf("a[%d]", mid);
//			break;
//		}
//		else if (arr[mid] > a){
//			right = mid - 1;
//		}
//		else{
//			left = mid + 1;
//		}
//	}
//	if (left > right)
//	{
//		printf("-1\n");
//	}
//	system("pause");
//	return 0;
//	}
//写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回-1.（折半查找） 
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int m = 0;
//	while(1){
//		printf("请输入密码;\n");
//		int password;
//		int Password = 123456;
//		scanf("%s", &password);
//		if (password == Password)
//		{
//			printf("恭喜你登录成功\n");
//			break;
//		}
//		else{
//			if (m == 2){
//				printf("麻烦您核对密码之后再输入\n");
//				break;
//			}
//		
//			printf("您还有%d次机会\n",2 - m);
//
//			m = m + 1;
//			
//		}
//	}
//	system("pause");
//	return 0;
//}
//编写代码模拟三次密码输入的场景。 
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int ch;
//	printf("请输入一个键盘上的字母\n");
//		if((ch = getchar())!=EOF)
//	{
//			if (ch >= 'a'&&ch  <='z'){
//
//				printf("%c\n", ch - 32);
//
//
//			}
//			else if (ch >= 'A'&&ch <= 'Z'){
//
//				printf("%c\n", ch +32);
//
//			}
//			else{
//
//				printf("输入错误，请重新输入\n");
//
//			}
//	}
//	system("pause");
//	return 0;
//}
// 编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。
//#include<stdio.h>
//#include<stdlib.h>
//void Table(int n)
//{
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//
//		}
//		printf("\n");
//
//	}
//
//
//
//}
//
//int main()
//{
//	int n;
//	printf("请输入你想要输入的表的范围:\n");
//	scanf("%d", &n);
//	Table( n);
//	system("pause");
//	return 0;
//}
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 
//输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//#include<stdio.h>
//#include<stdlib.h>
//void Switchdigital(int a, int b)
//{
//	int t;
//	t = a;
//	a = b;
//	b = t;
//	printf("%d %d\n", a, b);
//
//
//
//}
//
//int main()
//{
//	int a, b;
//	printf("请输入你想要交换的两个数中间用空格隔开\n");
//	scanf("%d %d", &a, &b);
//	Switchdigital( a,  b);
//	system("pause");
//	return 0;
//}
//使用函数实现两个数的交换。 
//#include<stdio.h>
//#include<stdlib.h>
//void Judge(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("%d年是闰年\n", year);
//
//
//
//	}
//	else{
//
//
//		printf("%d不是闰年",year);
//	}
//
//
//
//}
//int main()
//{
//	int year;
//	printf("请输入你想要查找的年份\n");
//	scanf("%d", &year);
//	Judge(year);
//
//	system("pause");
//	return 0;
//}
//实现一个函数判断year是不是润年。 
//#include<stdio.h>
//#include<stdlib.h>
//int Judge(int b)
//{
//	int i;
//	for (i = 2; i < b; i++)
//	{
//		if (b%i == 0){
//			return 0;
//		}
//		else{
//
//			return 1;
//		}
//	}
//
//
//
//
//}
//int main()
//{
//	int b;
//	printf("请输入一个数来让我们的程序判断\n");
//	scanf("%d", &b);
//	Judge(b);
//	int A = Judge(b);
//	if (A==0){
//
//		printf("这个数是素数\n");
//
//	}
//	else{
//
//		printf("这个数不是素数\n");
//
//	}
//	system("pause");
//	return 0;
//
//
//
//}
//实现一个函数，判断一个数是不是素数。
//#include<stdio.h>
//#include<stdlib.h>
//void printf()
//{
//	printf("*********************************\n");
//	printf("**********1.初始化数组***********\n");
//	printf("**********2.清空数组  ***********\n");
//	printf("**********3.清空数组  ***********\n");
//	printf("*********************************\n");
//}
//void innit(int arr[6], int n)
//{
//	printf("请先输入你想要输入的数组\n");
//	int i;
//	n = 6;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int a;
//	printf("输入的数组为;\n");
//	for (a = 0; a < n; a++){
//
//		printf("arr[%d]=%d\n",a,arr[a]);
//
//	}
//	printf("初始化数组后的值为：\n");
//		for (a = 0; a < n; a++)
//		{
//			printf("arr[%d]=%d\n", a, a);
//
//
//		}
//
//}
//void empty(int arr[6], int n)
//{
//	printf("请先输入你想要输入的数组\n");
//	int f = 0;
//	int i;
//	n = 6;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int a;
//	printf("输入的数组为;\n");
//	for (a = 0; a < n; a++){
//
//		printf("arr[%d]=%d\n", a, arr[a]);
//
//	}
//	printf("归零后数组后的值为：\n");
//	for (a = 0; a < n; a++)
//	{
//		printf("arr[%d]=%d\n", a, f);
//
//
//	}
//
//}
//void reverse(int arr[6], int n)
//{
//
//	printf("请先输入你想要输入的数组\n");
//	int d;
//	int t = 5;
//	int v = 0;
//	int i;
//	n = 6;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int a;
//	printf("输入的数组为;\n");
//	for (a = 0; a < n; a++){
//
//		printf("arr[%d]=%d\n", a, arr[a]);
//	}
//	printf("倒叙数组后的值为:\n");
//	int temp=0;
//	for (a = 0; a < n; a++){
//		while (t>v){
//			temp = arr[v];
//			arr[v] = arr[t];
//			arr[t] = temp;
//			t--;
//			v++;
//		}
//printf("arr[%d]=%d\n", a, arr[a]);
//	}
//	}
//
//int main()
//{
//	int arr[6];
//	int input;
//	int n=6;
//		printf();
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			innit(arr, n);
//			break;
//		case 2:
//			 empty( arr, n);
//			break;
//		case 3:
//			 reverse(arr, n);
//			break;
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int Fibonacci(int n)
//{
//	if (n == 1 || n == 2)
//	{
//
//		return 1;
//	}
//	else{
//
//
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//
//
//} 
//void c(int n)
//{
//	int a;
//	int num1=1;
//	int num2=1;
//	int num;
//	if (n == 1 || n == 2){
//
//		num = 1;
//	}
//	else
//	{
//		for (a = 3; a <= n; a++){
//			num = num1 + num2;
//			num1 = num2;
//			num2=num;
//
//		}
//		printf("第%d个斐波那契数列为%d",n,num);
//	}
//}
//int main()
//{
//	int n;
//	int sum;
//	printf("输入你想输入的第几个斐波那契数列\n");
//		scanf("%d", &n);
//	sum=Fibonacci( n);
//	printf("%d\n",sum);
//	c(n);
//	system("pause");
//	return 0;
//
//}
//递归和非递归分别实现求第n个斐波那契数
//#include<stdio.h>
//#include<stdlib.h>
//int capital(int n, int k)
//{
//	if (k <0){
//
//		return 1;
//	}
//	else{
//		return n*capital(n, k - 1);
//	}
//}
//int main()
//{
//	int n;
//	int k;
//	scanf("%d %d", &n,&k);
//	
//	int sum=capital(n, k - 1);
//	printf("n的K次方为%d", sum);
//
//	system("pause");
//	return 0;
//}
//编写一个函数实现n^k，使用递归实现 
//#include<stdio.h>
//#include<stdlib.h>
//int DigitSum(int n)
//{
//	while (n > 0)
//	{
//		return n % 10 + DigitSum(n / 10);
//
//
//	}
//
//
//	return 0;
//
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int b = DigitSum(n);
//	printf("结果是%d", b);
//
//
//	system("pause");
//	return 0;
//}
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19 
//#include<stdio.h>
//#include<stdlib.h>
//void everse_string(char * string)
//{
//
//
//	
//	if (*(++string) != '\0'){
//		everse_string(string);
//	}
//		printf("%c", *(string - 1));
//	
//
//
//	
//	
//
//}
//
//int main()
//{
//	char*string = "abcde";
//	everse_string( string);
//	printf("\n");
//	system("pause");
//	return 0;
//}
//这是字符串的反向输出
//#include<stdio.h>
//#include<stdlib.h>
//
//{
//	int num=0;
//	while (value != 0)
//	{if (value % 2 == 1)
//		{
//			num++;
//		}
//		value = value / 2;
//	}
//	return num;
//	// 返回 1的位数 
//}
//int main()
//{
//	printf("请输入你想要输入的整数\n");
//	int value;
//	int num;
//	scanf("%d", &value);
//	num =count_one_bits(value);
//	printf("%d二进制中1的个数为%d", value, num);
//
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int count_one_bits(unsigned int value)
//{
//	int num=0;
//	while (value != 0)
//	{
//		if (value & 1 == 1)
//		{
//
//			num++;
//		}
//		value >>= 1;
//	}
//	return num;
//
//
//}
//int main()
//{
//	printf("请输入你想要输入的整数\n");
//		int value;
//		int num;
//		scanf("%d", &value);
//		num =count_one_bits(value);
//		printf("%d二进制中1的个数为%d", value, num);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	printf("请输入你想要输入的整数:\n");
//	int num;
//	int c;
//	scanf("%d", &num);
//	while (num!= 0)
//	{
//		if (num < 0)
//		{
//			num = -num;
//		}
//		printf("%d\n", num % 10);
//		num = num / 10;
//
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int nua(int num)
//{
//	while (num != 0)
//	{
//		if (num < 0)
//		{
//			num = -num;
//
//		}
//		printf("%d\n", num % 10);
//		return nua(num / 10);
//	}
//	
//}
//int main()
//{
//	int num;
//	printf("请输入你想要输入的数字：\n");
//	scanf("%d", &num);
//	nua(num);
//
//
//
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++)
//	for (b = 1; b <= 5;b++)
//	for (c = 1; c <= 5;c++)
//	for (d = 1; d <= 5;d++)
//	for (e = 1; e <= 5;e++)
//	if (((b == 2) + (a == 3) == 1) &&
//		((b == 2) + (e == 4) == 1) &&
//		((c == 1) + (d == 2) == 1) &&
//		((c == 5) + (d == 3) == 1) &&
//		((e == 4) + (d == 1) == 1) == 1)
//	{
//
//		if ((a != b) && (a != c) && (a != d) && (a != e) && (b != c) && (b != d) && (b != e) && (c != d) && (c != e) && (d != e))
//		{
//			printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\n", a, b, c, d, e);
//
//		}
//	}
//	system("pause");
//	return 0;
//
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a=1, b=2, c=3, d=4, e;
//	for (e = 1; e <= 4; e++){
//
//		if ((e != a) + (e == c) + (e == d) + (e != d) == 3)
//		{
//
//			printf("%d", e);
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int killer;
//	char A, B, C, D;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//
//			printf("杀手是%c\n", killer);
//		}
//
//	}
//
//	system("pause");
//  return 0;
//    }
//#include<stdio.h>
//#include<stdlib.h>
//void Yangs_triangle(int k)
//{
//	int i, j, arr[100][100];
//	for (i = 0; i < k; i++)
//	{
//		arr[i][0]=1;//第二个数组是列；
//		arr[i][i]=1;
//	}
//	for (i = 2; i < k; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//
//	}
//	for (i = 0; i < k; i++)
//	{
//		for (j = 0; j < k-i; j++)
//		{
//			printf("   ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//
//			printf("%6d", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//
//
//
//
//}
//
//
//int main()
//{
//	printf("请输入你想要输入几行的杨式三角:\n");
//	int k;
//	scanf("%d", &k);
//	Yangs_triangle(k);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include <stdlib.h>
//unsigned int reverse_bit(unsigned int x){
//	unsigned int a = 0;
//	int b = 0;
//	for (int i = 0; i < 32; i++){
//
//		a = x & 1;//取出最后一位数
//		x = x >> 1;//把值右移一位
//		b = b + (a << (31 - i));//把每次末尾取出来的值都放在变量里，其实整体相当于把二进制数转置了一下
//	}
//	return b;
//}
//
//int main(){
//	int a = 0;
//	scanf("%d", &a);
//	printf("%u", reverse_bit(a));
//	system("pause");
//}
////k
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	printf("请输入你想要输入的两个数的值\n用空格将其隔开\n程序会对它们求平均数\n");
//	int a, b;
//	scanf("%d %d", &a, &b);
//		printf("%d\n", (a + b) >> 1);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int count_one_bits(unsigned int value)
//{
//	int i;
//	int num=0;
//	// 00000000 00000000 00000000 00000001
//	// 一直左移动 右边补 0
//	// 32次之后
//	// 00000000 00000000 00000000 00000000 这就是判断循环结束的条件 等于0的时候
//	for (i = 1; i != 0;i<<=1 )
//	{
//		if ((value&1)==1)
//		{
//			num++;
//		}
//		value  >>=1; 
//	}
//	
//	return num;
//	
//	
//	// 返回 1的位数 
//}
//int main()
//{
//	printf("输入一个你你想要判断的数让程序来判断它在二进制中1的个数\n");
//	int value,num;
//	scanf("%d", &value);
//	num = count_one_bits(value);
//	printf("这个数在二进制中1的个数为%d\n", num);
//	system("pause");
//	return 0;
//
//}
//#include<stdio.h>
//#include<stdlib.h>
//void Even_digit(int n)
//{
//	int i;
//	printf("偶数位是");
//	//从最高位置开始 31 到 0一共 32位置
//	// 一共要移动31次 移动32次就为0 了 默认了 第一位也就是0为奇数位
//	//所以最高为是 31 到0时不用移动 所以从0开始计数字
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		
//		printf("%d ",(n>>i)&1 );
//
//	}
//	printf("\n");
//
//}
//void Odd_digit(int n)
//{
//	printf("奇数位是");
//	int i;
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//
//	}
//	printf("\n");	
//
//}
//int main()
//{
//	printf("输入你想要判断的数字\n");
//	int n;
//	scanf("%d", &n);
//	Even_digit(n);
//	Odd_digit(n);
//	system("pause");
//	return 0;
//}
//////#include<stdio.h>
//////#include<stdlib.h>
//////int count_one_bits(unsigned int value)
//////{
//////	int num=0;
//////	while (value != 0){
//////		// 0000 1111  n=15
//////		// 
//////		//
//////		//
//////		//
//////		//
//////		//
//////		//
//////		//
//////		//
//////		//
//////
//////
//////		value = value&(value - 1);
//////		num++;
//////
//////	}
//////
//////
//////	return num;
//////	
//////}
//////int main()
//////{
//////	printf("输入一个你你想要判断的数让程序来判断它在二进制中1的个数\n");
//////	int value,num;
//////	scanf("%d", &value);
//////	num = count_one_bits(value);
//////	printf("这个数在二进制中1的个数为%d\n", num);
//////	system("pause");
//////	return 0;
//////
//////}
//////#include<stdio.h>
//////#include<stdlib.h>
//////int main()
//////{
//////	printf("请输入你想要输入的两个值(用空格隔开）\n");
//////	int m, n,c, i,v,num=0;
//////	scanf("%d %d",&m,&n);
//////	c = m^n;//按位异或 相同为不同为
//////	for (i = 0; i < 32; i++)
//////	{
//////		v = (c >> i) & 1;
//////		if (v == 1){
//////			num++;
//////
//////		}
//////
//////
//////	}
//////	printf("整数m和n的二进制表达中有%d个不同", num);
//////
//////
//////	system("pause");
//////	return 0;
//////
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	printf("请输入你想要输入的两个值(用空格隔开）\n");
//	int m, n, i, num=0;
//	scanf("%d %d", &m, &n);
//	for (i = 0; i < 32; i++)
//	{
//
//
//
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			num++;
//		}
//
//		
//
//
//	}
//
//	printf("整数m和n的二进制表达中有%d个不同", num);
//
//
//
//	system("pause");
//		return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++)
//	for (b = 1; b <= 5;b++)
//	for (c = 1; c <= 5;c++)
//	for (d = 1; d <= 5;d++)
//	for (e = 1; e <= 5;e++)
//	if (((b == 2) + (a == 3) == 1) &&
//		((b == 2) + (e == 4) == 1) &&
//		((c == 1) + (d == 2) == 1) &&
//		((c == 5) + (d == 3) == 1) &&
//		((e == 4) + (d == 1) == 1) == 1)
//	{
//
//		if (a*b*c*d*e==120)
//		{
//			printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\n", a, b, c, d, e);
//
//		}
//	}
//	system("pause");
//	return 0;
//
//}
//#include<stdio.h>
//#include<stdlib.h>
//void Yang_Huis_Triangle(int k)
//{
//	int arr[100][100];//行 和 列
//	int i, j;
//	for (i = 0; i < k; i++)
//	{
//		arr[i][0] =1;
//		arr[i][i] = 1;
//
//	}
//	for (i = 2; i < k; i++)
//	{
//		for (j = 1; j < i; j++){
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//
//	for (i = 0; i < k;i++)
//	{
//		for (j = 0; j <= 4*(k - i) / 2; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%4d", arr[i][j]);	
//		}
//		printf("\n");
//	}	
//}
//
//int main()
//{
//	printf("输入你想要输入的几行的杨辉三角:\n");
//	int k;
//	scanf("%d", &k);
//	Yang_Huis_Triangle(k);
//	system("pause");
//	return 0;
//}
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
//  ������100 �� 200 ֮��������C���Գ��� �����е���Ҫ˼��Ϊ ������ֻ�ܱ�1��������������������2�������䱾���һ��
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
//��������˷��ھ���ĳ������� %d��ʾһ�������%2d���ǽ����ְ��տ��2�����Ҷ���ķ�ʽ�����������λ������λ����߲��ո�%-2d��֮��Ȼ��%02d��%d���ֻ������߲�0��
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
//�������1000��2000֮�������ĺ��� ��Ҫץס���� ��һ�㣺�ܱ�4�������ܱ�100���� �ڶ��㣺�ܱ�400�����Ķ�������
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
//�����������α�����ֵ��������ֵ�����ݽ��н����� 
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
//����������ʱ���������������������ݣ������⣩ �������˸�ֵ��ԭ��
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
//.��10 �����������ֵ��
//#include<stdio.h>
//#include<stdlib.h>
//#define _CRT_SECURE_NO_DEPRECATE         
//int main(){
//	int a,b,c,t;
//	printf("��������������������\n");
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
//�����������Ӵ�С�����
//#include<stdio.h>
//#include<stdlib.h>
//#define _CRT_SECURE_NO_DEPRECATE 
//int main(){
//	while (1){
//		int a, b, c;
//		printf("�����������������ǵ����Լ��(�м��ÿո������\n");
//		scanf("%d %d", &a, &b);
//		c = a%b;
//		while (c != 0){
//			a = b;
//			b = c;
//			c = a%b;
//
//		}
//		printf("���Լ����%d\n", b);
//	}
//		system("pause");
//		return 0;
//	
//
//}
//�������������Լ��������շת�����
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
//������A�е����ݺ�����B�е����ݽ��н�����������һ����

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
//	printf("����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ;%0.8f ", sum);
//	system("pause");
//	return 0;
//}
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��0.8�е�С����ǰ�����ֱ�ʾ�ܹ�����λ��0��ʾû���ƣ�С���������ֱ�ʾ�����������ǵĶ���λ��Ҳ�͸�������С�����λ�����磺��12.6f%����ʾ�ܹ�12λ������Ϊ6λ��
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
//��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
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
//.����Ļ���������ͼ���� 
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
//���0��999֮������С�ˮ�ɻ��������������ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3?����153��һ����ˮ�ɻ������� 

/*
�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
153 = 1^3 + 5^3 + 3^3��
370 = 3^3 + 7^3 + 0^3��
371 = 3^3 + 7^3 + 1^3��
407 = 4^3 + 0^3 + 7^3��
*/
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a;
//	printf("������һ������");
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
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2+22+222+2222+22222 
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int ch;
//	int count = 0;//����һ��������count
//
//	while ((ch = getchar()) != EOF)//ѭ�����룬EOF����
//	{
//		if (ch == '{')
//		{
//			count++;
//		}
//		//������{ʱ��������+1
//
//		if (ch == '}' && count == 0)
//
//		{
//			printf("��ƥ��\n");
//			return 0;
//		}
//
//		//������}��������Ϊ0�ˣ������ƥ�䣬��Ϊ}��{ǰ��
//
//		if (ch == '}' && count != 0)
//		{
//			count--;
//		}
//
//		//������}�Ҽ�������Ϊ0ʱ��������-1
//
//	}
//
//	if (count == 0)
//	{
//		printf("ƥ��!\n");
//	}
//	else
//	{
//		printf("��ƥ��!\n");
//	}//�жϼ�����count
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
//	printf("*******play����1*******\n");
//	printf("*******exit����2*******\n");
//}
//void game()
//{
//	int a = 0;
//	int b = 0;
//	b = rand() % 100 + 1;
//	while (1)
//	{
//		printf("��������Ҫ�������;");
//		scanf("%d",&a);
//		if (a > b)
//		{
//			printf("����������ִ���\n");
//		}
//		else if (a < b)
//		{
//			printf("�����������С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
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
//		printf("��ѡ��;\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("��Ϸ����");
//			break;
//		default:
//			printf("������������������");
//			break;
//		}
//
//	} while (input);
//	system("pause");
//	return 0;
//}
//��ɲ�������Ϸ�� 
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a ;
//	printf("��������Ҫ���ҵ�����");
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
//д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ�������-1.���۰���ң� 
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int m = 0;
//	while(1){
//		printf("����������;\n");
//		int password;
//		int Password = 123456;
//		scanf("%s", &password);
//		if (password == Password)
//		{
//			printf("��ϲ���¼�ɹ�\n");
//			break;
//		}
//		else{
//			if (m == 2){
//				printf("�鷳���˶�����֮��������\n");
//				break;
//			}
//		
//			printf("������%d�λ���\n",2 - m);
//
//			m = m + 1;
//			
//		}
//	}
//	system("pause");
//	return 0;
//}
//��д����ģ��������������ĳ����� 
//����������������룬������ȷ����ʾ����¼�ɹ���, ������󣬿����������룬����������Ρ����ξ�������ʾ�˳�����
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int ch;
//	printf("������һ�������ϵ���ĸ\n");
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
//				printf("�����������������\n");
//
//			}
//	}
//	system("pause");
//	return 0;
//}
// ��дһ�����򣬿���һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������
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
//	printf("����������Ҫ����ı�ķ�Χ:\n");
//	scanf("%d", &n);
//	Table( n);
//	system("pause");
//	return 0;
//}
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� 
//����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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
//	printf("����������Ҫ�������������м��ÿո����\n");
//	scanf("%d %d", &a, &b);
//	Switchdigital( a,  b);
//	system("pause");
//	return 0;
//}
//ʹ�ú���ʵ���������Ľ����� 
//#include<stdio.h>
//#include<stdlib.h>
//void Judge(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("%d��������\n", year);
//
//
//
//	}
//	else{
//
//
//		printf("%d��������",year);
//	}
//
//
//
//}
//int main()
//{
//	int year;
//	printf("����������Ҫ���ҵ����\n");
//	scanf("%d", &year);
//	Judge(year);
//
//	system("pause");
//	return 0;
//}
//ʵ��һ�������ж�year�ǲ������ꡣ 
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
//	printf("������һ�����������ǵĳ����ж�\n");
//	scanf("%d", &b);
//	Judge(b);
//	int A = Judge(b);
//	if (A==0){
//
//		printf("�����������\n");
//
//	}
//	else{
//
//		printf("�������������\n");
//
//	}
//	system("pause");
//	return 0;
//
//
//
//}
//ʵ��һ���������ж�һ�����ǲ���������
//#include<stdio.h>
//#include<stdlib.h>
//void printf()
//{
//	printf("*********************************\n");
//	printf("**********1.��ʼ������***********\n");
//	printf("**********2.�������  ***********\n");
//	printf("**********3.�������  ***********\n");
//	printf("*********************************\n");
//}
//void innit(int arr[6], int n)
//{
//	printf("������������Ҫ���������\n");
//	int i;
//	n = 6;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int a;
//	printf("���������Ϊ;\n");
//	for (a = 0; a < n; a++){
//
//		printf("arr[%d]=%d\n",a,arr[a]);
//
//	}
//	printf("��ʼ��������ֵΪ��\n");
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
//	printf("������������Ҫ���������\n");
//	int f = 0;
//	int i;
//	n = 6;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int a;
//	printf("���������Ϊ;\n");
//	for (a = 0; a < n; a++){
//
//		printf("arr[%d]=%d\n", a, arr[a]);
//
//	}
//	printf("�����������ֵΪ��\n");
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
//	printf("������������Ҫ���������\n");
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
//	printf("���������Ϊ;\n");
//	for (a = 0; a < n; a++){
//
//		printf("arr[%d]=%d\n", a, arr[a]);
//	}
//	printf("����������ֵΪ:\n");
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
//		printf("��%d��쳲���������Ϊ%d",n,num);
//	}
//}
//int main()
//{
//	int n;
//	int sum;
//	printf("������������ĵڼ���쳲���������\n");
//		scanf("%d", &n);
//	sum=Fibonacci( n);
//	printf("%d\n",sum);
//	c(n);
//	system("pause");
//	return 0;
//
//}
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
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
//	printf("n��K�η�Ϊ%d", sum);
//
//	system("pause");
//	return 0;
//}
//��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� 
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
//	printf("�����%d", b);
//
//
//	system("pause");
//	return 0;
//}
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ����磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19 
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
//�����ַ����ķ������
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
//	// ���� 1��λ�� 
//}
//int main()
//{
//	printf("����������Ҫ���������\n");
//	int value;
//	int num;
//	scanf("%d", &value);
//	num =count_one_bits(value);
//	printf("%d��������1�ĸ���Ϊ%d", value, num);
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
//	printf("����������Ҫ���������\n");
//		int value;
//		int num;
//		scanf("%d", &value);
//		num =count_one_bits(value);
//		printf("%d��������1�ĸ���Ϊ%d", value, num);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	printf("����������Ҫ���������:\n");
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
//	printf("����������Ҫ��������֣�\n");
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
//			printf("ɱ����%c\n", killer);
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
//		arr[i][0]=1;//�ڶ����������У�
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
//	printf("����������Ҫ���뼸�е���ʽ����:\n");
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
//		a = x & 1;//ȡ�����һλ��
//		x = x >> 1;//��ֵ����һλ
//		b = b + (a << (31 - i));//��ÿ��ĩβȡ������ֵ�����ڱ������ʵ�����൱�ڰѶ�������ת����һ��
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
//	printf("����������Ҫ�������������ֵ\n�ÿո������\n������������ƽ����\n");
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
//	// һֱ���ƶ� �ұ߲� 0
//	// 32��֮��
//	// 00000000 00000000 00000000 00000000 ������ж�ѭ������������ ����0��ʱ��
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
//	// ���� 1��λ�� 
//}
//int main()
//{
//	printf("����һ��������Ҫ�жϵ����ó������ж����ڶ�������1�ĸ���\n");
//	int value,num;
//	scanf("%d", &value);
//	num = count_one_bits(value);
//	printf("������ڶ�������1�ĸ���Ϊ%d\n", num);
//	system("pause");
//	return 0;
//
//}
//#include<stdio.h>
//#include<stdlib.h>
//void Even_digit(int n)
//{
//	int i;
//	printf("ż��λ��");
//	//�����λ�ÿ�ʼ 31 �� 0һ�� 32λ��
//	// һ��Ҫ�ƶ�31�� �ƶ�32�ξ�Ϊ0 �� Ĭ���� ��һλҲ����0Ϊ����λ
//	//�������Ϊ�� 31 ��0ʱ�����ƶ� ���Դ�0��ʼ������
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
//	printf("����λ��");
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
//	printf("��������Ҫ�жϵ�����\n");
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
//////	printf("����һ��������Ҫ�жϵ����ó������ж����ڶ�������1�ĸ���\n");
//////	int value,num;
//////	scanf("%d", &value);
//////	num = count_one_bits(value);
//////	printf("������ڶ�������1�ĸ���Ϊ%d\n", num);
//////	system("pause");
//////	return 0;
//////
//////}
//////#include<stdio.h>
//////#include<stdlib.h>
//////int main()
//////{
//////	printf("����������Ҫ���������ֵ(�ÿո������\n");
//////	int m, n,c, i,v,num=0;
//////	scanf("%d %d",&m,&n);
//////	c = m^n;//��λ��� ��ͬΪ��ͬΪ
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
//////	printf("����m��n�Ķ����Ʊ������%d����ͬ", num);
//////
//////
//////	system("pause");
//////	return 0;
//////
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	printf("����������Ҫ���������ֵ(�ÿո������\n");
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
//	printf("����m��n�Ķ����Ʊ������%d����ͬ", num);
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
//	int arr[100][100];//�� �� ��
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
//	printf("��������Ҫ����ļ��е��������:\n");
//	int k;
//	scanf("%d", &k);
//	Yang_Huis_Triangle(k);
//	system("pause");
//	return 0;
//}
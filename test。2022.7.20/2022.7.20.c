//		��������

//											swap1�ڱ����õ�ʱ��ʵ�δ����βΣ���ʵ�βξ���ʵ�ε�һ����ʱ����
//											�ı��βΣ���Ӱ��ʵ��
//				��ֵ����

//	swap1(num1, num2);		ʵ�ʲ�������ʵ��
// 
//	printf("\n����ǰ�� num1=%d  num2=%d\n", num1, num2);
//	
//	swap2(&num1, &num2);	ʵ�ʲ�������ʵ��
//
//	printf("\n������ num1=%d  num2=%d\n", num1, num2);


//	�����ĵ���
//	��ֵ����   swap1   ��ֵ����ȥ
//	��ַ����   swap2   ��ַ����ȥ


//		дһ������ �ж�һ�����ǲ�������

//int is_prime(int x)
//{
//	//		�ı�num1����Ҫ&  �жϲ���Ҫ
//	int j = 0;
//	for (j = 2; j < x; j++)
//	{
//		if (x % j == 0)
//			return 0;
//		//������������Ͳ�������  һֱ++  ֱ����������ȥ
//	}
//	return 1;
//	//�����������������
//}
//
//
//int main()
//{
//	int num1 = 0;
//	
//	for (num1 = 100; num1 <= 200; num1++)
//	{
//		//�ж��Ƿ�Ϊ����
//		if (is_prime(num1) == 1)
//		{
//			printf("%d  ", num1);
//		}
//		else
//		{
//			;
//		}
//	}
//	return 0;
//}



	//		�Ż�
	//		ֱ�ӿ�ƽ��	sqrt(x)


//#include<math.h>
//
//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int num1 = 0;
//	for (num1 = 100; num1 <= 200; num1++)
//	{
//		if (is_prime(num1) == 1)
//		{
//			printf("%d  ", num1);
//		}
//	}
//	return 0;
//}



//		���Զ��庯�����ж�һ���ǲ�������

//		�����귵��1 ��Ȼ����0

//		����ܱ�4���������ܱ�100���� ���� �ܱ�400���� ����������������һ����Ϊ����

//int is_leap_year(int x)
//{
//	if ((x % 4 == 0) &&  (x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		;
//	}
//}

//			�Զ��庯���Ż�  
//			ֱ��return  

//int is_leap_year(int x)
//{
//	return ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0));
//}
//
//int main()
//{
//	int num1 = 0;
//	int conut = 0;
//	for (num1 = 1000; num1 <= 2000; num1++)
//	{
//		if (is_leap_year(num1) == 1)
//		{
//			printf("%d ", num1);
//			conut++;
//		}
//	}
//	printf("\ncount=%d\n ", conut);
//	return 0;
//}



//		дһ���Զ��庯��  ʵ��������������Ķ��ֲ���
// 
//		�Զ��庯�����治����Ԫ�صĸ���	Ҫ����������� �ٴ�		��̫��⣡
// 
//					����		 ֵ	   �����С
int binary_search(int x[], int y, int z)
{

	int left = 0;
	int right = z - 1;


	//		һ��ҪС�ڵ���

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (x[mid] > y)
		{
			right = mid - 1;
		}
		else if (x[mid] < y)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}

	return -1;	//�Ҳ���
}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int key = 6;

	int sz = sizeof(arr) / sizeof(arr[0]);
	//			�����ܴ�С         һ������Ĵ�С

	//�ҵ��ͷ���ֵ  �Ҳ�������һ��-1

	int ret = binary_search(arr, key, sz);

	if (-1 == ret)
	{
		printf("�Ҳ�����\n");
	}
	else
	{
		printf("�ҵ���:\n  key=%d\n ", key);
	}

	return 0;
}
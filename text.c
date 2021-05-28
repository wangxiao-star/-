#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int Num_Weishu( int num );
void Num_Geshu(int num);
int main()
{
	int num = 0;
	int N_num = 0;
	scanf("%d",&num);
	N_num = Num_Weishu(num);
	printf("%d\n", N_num);
	Num_Geshu(num);
	return 0;

}

int Num_Weishu(int num)
{
	int N_num = 0;
	do
	{
		N_num++;
		num = num / 10;
	} while (num);

	return N_num;
}
void Num_Geshu(int num)
{
	int N_0 = 0, N_1 = 0, N_2 = 0, N_3 = 0, N_4 = 0, N_5 = 0, N_6 = 0, N_7 = 0, N_8 = 0, N_9 = 0;
	int Flag_0 = 0, Flag_1 = 0, Flag_2 = 0, Flag_3 = 0, Flag_4 = 0, Flag_5 = 0, Flag_6 = 0, Flag_7 = 0, Flag_8 = 0, Flag_9 = 0;
	do
	{
		switch (num%10)
		{
		case 0: Flag_0 = 1;N_0++;break;
		case 1: Flag_1 = 1;N_1++;break;
		case 2: Flag_2 = 1;N_2++;break;
		case 3: Flag_3 = 1;N_3++;break;
		case 4: Flag_4 = 1;N_4++;break;
		case 5: Flag_5 = 1;N_5++;break;
		case 6: Flag_6 = 1;N_6++;break;
		case 7: Flag_7 = 1;N_7++;break;
		case 8: Flag_8 = 1;N_8++;break;
		case 9: Flag_9 = 1;N_9++;break;
		default:
			break;
		}
		num = num / 10;
	} while (num);
	if (Flag_0)
	{
		printf("0:%d\n", N_0);
	}
	if (Flag_1)
	{
		printf("1:%d\n", N_1);
	}
	if (Flag_2)
	{
		printf("2:%d\n", N_2);
	}
	if (Flag_3)
	{
		printf("3:%d\n", N_3);
	}
	if (Flag_4)
	{
		printf("4:%d\n", N_4);
	}
	if (Flag_5)
	{
		printf("5:%d\n", N_5);
	}
	if (Flag_6)
	{
		printf("6:%d\n", N_6);
	}
	if (Flag_7)
	{
		printf("7:%d\n", N_7);
	}
	if (Flag_8)
	{
		printf("8:%d\n", N_8);
	}
	if (Flag_9)
	{
		printf("9:%d\n", N_9);
	}
}
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<unordered_map>
#include<map>
#include<unordered_set>
#include <set>


#include <stdio.h>
#include <stdlib.h>



using namespace std;

#define MINS(a, b) (a) <= (b) ? (a) : (b)

#define offset(type , member)    &(((type*)0)->member)
#define container_of(ptr , type , member) (type*)((char*)ptr - (char*)offset(type , member))
#define print(x)   printf("the no, "#x"is ") 

struct test
{
	int a;
	int b;
};

char *GetMemory(void)
{
	char* p = "hello world";
	return p;
}
void Test(void)
{
	char *str = NULL;
	str = GetMemory();
	printf(str);
}
struct bs
{
	unsigned  a : 8;
	unsigned  b : 6;
	
	unsigned  d : 19;
	unsigned  c : 31;
	
};
struct bss
{
	unsigned char a;
	

};


int isprime(int num, int* mp, int cnt)
{
	for (int i = 0; i < cnt; i++)
	{
		if (num % mp[i] == 0)
		{
			return 0;
		}
	}
	return 1;
}
void move(char* str, int start, int end, int* xp, int* yp)
{
	int xx = 0, yy = 0;
	if (end - start > 2 || start >= end)
	{
		return;
	}
	if (str[start] == 'A')
	{
		xx = -1;
	}
	else if (str[start] == 'S'){
		yy = -1;
	}
	else if (str[start] == 'D'){
		xx = 1;
	}
	else if (str[start] == 'W'){
		yy = 1;
	}
	else{
		return;
	}
	start++;
	int tmp = 0;
	if (str[start] >= '0' && str[start] <= '9')
	{
		tmp *= 10;
		tmp += str[start] - '0';
	}
	else{
		return;
	}
	if (start == end)
	{
		*xp += xx*tmp;
		*yp += yy*tmp;
		return;
	}
	start++;
	if (str[start] >= '0' && str[start] <= '9')
	{
		tmp *= 10;
		tmp += str[start] - '0';
	}
	else{
		return;
	}
	*xp += xx*tmp;
	*yp += yy*tmp;
}


int max(int a, int b)
{
	return a > b ? a : b;
}
void up(int* arr, int* uparr, int size)
{
	uparr[0] = 1;
	for (int i = 1; i < size; i++)
	{
		int maxnum = 1;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
			{
				maxnum = max(maxnum, uparr[j] + 1);
			}
		}
		uparr[i] = maxnum;
	}
}
void down(int* arr, int* downarr, int size)
{
	downarr[size - 1] = 1;
	for (int i = size - 2; i >= 0; i--)
	{
		int maxnum = 1;
		for (int j = size - 1; j > i; j--)
		{
			if (arr[i] > arr[j])
			{
				maxnum = max(maxnum, downarr[j] + 1);
			}
		}
		downarr[i] = maxnum;
	}
}


char* add(char* num1, char* num2, char* res)
{
	int len1 = strlen(num1), len2 = strlen(num2);
	int gain = 0;
	int index1 = len1 - 1, index2 = len2 - 1;
	int index = 998;
	res[999] = '\0';
	while (index1 >= 0 && index2 >= 0)
	{
		int tmp = num1[index1] + num2[index2] - '0' - '0' + gain;
		gain = tmp / 10;
		tmp %= 10;
		res[index--] = tmp + '0';
		index1--;
		index2--;
	}
	while (index1 >= 0)
	{
		int tmp = num1[index1] - '0' + gain;
		gain = tmp / 10;
		tmp %= 10;
		res[index--] = tmp + '0';
		index1--;
	}
	while (index2 >= 0)
	{
		int tmp = num2[index2] - '0' + gain;
		gain = tmp / 10;
		tmp %= 10;
		res[index--] = tmp + '0';
		index2--;
	}
	if (gain)
	{
		res[index--] = gain;
	}
	return res + index + 1;
}
char* sub(char* num1, char* num2, char* res)
{
	return 0;
}
int main()
{
	vector<vector<int>> test;
	test  = { { 1, 1 }, { 2, 1 } };
	cout << test.size() << endl;
	while (1);
}
#include <iostream>
using namespace std;

int func(int arr[], int n)
{
	int INT_SIZE = sizeof(int);
	int result = 0;

	int x, sum;

	for (int i = 0; i < INT_SIZE; i++)
	{
		sum = 0;
		x = (1 << i);
		for (int j = 0; j < n; j++)
		{
			if (arr[j] & x)
				sum++;
		}

		if ((sum % 3) != 0)
			result = result | x;
	}

	return result;
}

int main()
{
	int arr[] = { 1,1,1,2,2,2,9,4,4,4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << func(arr, n);
}

//int func(int* arr, int size)
//{
//
//}

//int main()
//{
	// Massivin daxilinde tekrarlanmayan elementi tapan funksiya yaradin
	// 12, 12, 3, 12, 3, 2, 3, 12, 3

	//cout << (13 << 3) << endl;
	//cout << (156 >> 4) << endl;

	// 2^3 -> 8

	// 15 -> 11110
	// cout << (15 << 1) << endl;

	// 60 -> 111100
	// 61 -> 111101
	// 62 -> 111110
	// 63 -> 111111

	//cout << (60 >> 2) << endl;
	//cout << (61 >> 2) << endl;
	//cout << (62 >> 2) << endl;
	//cout << (63 >> 2) << endl;

	// cout << (~(-55)) << endl;
	// 5  -> 0000000000000000000000000000 0101
	// -6 -> 1111111111111111111111111111 1010

	//int a, b; // 14 5
	//cin >> a >> b;
	// a - 14 -> 1110
	// b - 5  -> 0101
	// a = 1011 -> 11

	// 1011
	// 1110
	// 0101

	//cout << a << "\t" << b << endl;

	//a = a ^ b; // a = 11, b = 5
	//b = a ^ b; // a = 11, b = 14
	//a = a ^ b; // a = 5,  b = 14

	//cout << a << "\t" << b << endl;

	//cout << (5 & 13) << endl;
	//cout << (5 | 13) << endl;
	//cout << (5 | 10) << endl;
	//cout << (5 & 10) << endl;
	//cout << (5 ^ 13) << endl;
	//cout << (12 ^ 6) << endl;


	// 1100 12
	// 0110 6
	// 1010 10

	// 5  - 0101
	// |
	// 13 - 1101
	//      1000 -> 8



	// her iki ededin daxilinde eyni yerde duran bitler ferqli olarsa
	// o zaman neticede alinan ededin hemin bitlerine 1 yerleshdirilir

	// 1010 -> 10
	// 0101 -> 5
	// 0000

	// 1 && 12 -> 1
	// 

	// 5  - 0101
	// |
	// 13 - 1101
	//      1101

	// 7, 5, 13, 8, 15

	// 7  - 0111
	// 5  - 0101
	// 13 - 1101
	// 8  - 1000
	// 15 - 1111

	// 128 64 32 16 8 4 2 1
	// 0    1  0  1 1 0 1 0
	// 43 - 0010 1011
	// 0101 1010
	// 2 + 8 + 16 + 64 = 90


	// 1 && 1 -> 1
	// 1 && 0 -> 0
	// 0 && 1 -> 0

	// bitwise operators
	/*
	
	& - bitwise AND
	| - bitwise OR
	~ - bitwise NOT
	^ - bitwise XOR

	<< - left shift
	>> - right shift

	*/


//}
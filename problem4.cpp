#include<iostream>
using namespace std;

int main()
{
	int biggest = 0;
	for(int i = 999; i >= 100; i--)
	{
		bool is_palindrome = true;
		for(int j = 999; j >= 100; j--)
		{
			is_palindrome = true;
			int pldrm = i*j;
			int len = 0;
			int tens = 1;
			//Get the length of the numbers
			int p = pldrm;
			while(p != 0)
			{
				p /= 10;
				len++;
				tens *= 10;
			}
			//Put the numbers into array
			int* palindrome = new int[len];
			for(int k = 0; k < len;k++)
			{
				tens /= 10;
				palindrome[k] = pldrm/tens;
				pldrm %= tens;
			}
			//If len is even
			int n = len-1;
			int idx = 0;
			while(idx <= len/2)
			{
				if(palindrome[n-idx] != palindrome[idx])
				{
					is_palindrome = false;
					break;
				}
				idx++;
			}
			if(is_palindrome == true)
			{
				if(biggest < i*j)
					biggest = i*j;
				break;
			}
			delete[] palindrome;
		}
	}
	cout << "the biggest palindrome is : " << biggest << endl;
	return 0;
}

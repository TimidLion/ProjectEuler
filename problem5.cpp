#include<iostream>
#define LEN 20
using namespace std;
int main()
{
	unsigned long long num = 1;
	int* primes = new int [LEN+1];
	primes[0] = 0;
	primes[1] = 0;
	bool is_prime = true;
	for(int i = 2; i <= LEN; i++)
	{
		for(int j = 2; j < i; j++)
		{
			if(i%primes[j] == 0)
			{
				is_prime = false;
			}
		}
		if(is_prime == true)
			primes[i] = i;
		else
			primes[i] = 0;
	}
	for(int i =0; i < LEN; i++)
	{
		if(primes[i] != 0)
		{
			num *= i;
		}
	}
	cout << num << endl;
}

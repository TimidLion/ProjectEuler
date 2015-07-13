#include<iostream>
#include<cmath>
using namespace std;
void prime_factor(unsigned long long);
int main()
{
	unsigned long long number = 600851475143;
	prime_factor(number);
}

void prime_factor(unsigned long long num)
{
	int i = 2;
	while(i < num)
	{
		if(num%i == 0)
		{
			cout << i << " ";
			num = num/i;
			continue;
		}
		i++;
	}
	cout << num << endl;
}

#include<iostream>
using namespace std;
int main()
{
	int three,five,sum = 0;
	for(int i = 1 ; i < 1000; i++)
	{
		if(i%15 == 0)
		{
			sum+=i;
			continue;
		}
		if(i%3 == 0)
			sum += i;
		if(i%5 == 0)
			sum += i;
	}
	cout << "The sum of all the multiple of 3 and 5 below 1000 is : " << sum<< endl;
}


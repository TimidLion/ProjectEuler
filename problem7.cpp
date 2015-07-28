#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class cheh
{
	private:
			long* prime;
			long size;
	public:
		cheh(int num)
		{
			this->size = num;
			prime = new long [num+1];
			prime[0] = 0;
			prime[1] = 0;
			for(long i = 2; i < size; i ++)
				prime[i] = 1;
		}
		~cheh()
		{
			delete[] prime;
		}
		void getSize()
		{
			cout << "Size of the cheh is : " << this->size << endl;
			return;
		}
		void docheh()
		{
			cout << "Doing cheh" << endl;
			for(long i = 2; (i*i) <= this->size ; i++)
			{
				for(long j = i*i; j <= this->size ; j+=i)
					prime[j] = 0;
			}
			return;
		}
		int getThPrime(int th = 0)
		{
			int counter = 0;
			bool flag = false;
			long manil;
			for(long i = 2; i < this->size; i++)
			{
				if(prime[i] == 1)
					counter++;
				if(counter == th)
				{
					manil = i;
					flag = true;
					break;
				}
			}
			if(flag)
				return manil;
			else
				return 0;
		}
};

int main()
{	
	int th = 0;
	int num = 10001;
	bool manilthprime = false;
	int size = 100000;
	while(!manilthprime)
	{
		cheh thousand(size);
		thousand.getSize();
		thousand.docheh();
		long ok = thousand.getThPrime(num);
		if(ok)
		{
			cout << ok << endl;
			manilthprime = true;
		}
		size *= 10;
	}
}

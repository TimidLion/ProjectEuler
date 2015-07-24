#include<iostream>
using namespace std;
int main()
{
	int sum_pw = 0,pw_sum = 0;
	for(int i = 1; i <= 100; i++)
	{
		pw_sum += i*i;
		sum_pw += i;
	}

	cout << pw_sum << endl;
	sum_pw *= sum_pw;
	cout << "diff is : " << sum_pw - pw_sum<< endl;
}

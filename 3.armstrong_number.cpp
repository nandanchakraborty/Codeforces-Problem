//3.problelm_name___find armstrong_number

#include<iostream>
using namespace std;

int main()
{
	int ord1, ord2, ord3, sum;

	cout << "All the Armstrong numbers between 1 to 1000 : ";

	for (int num = 1; num <= 1000; ++num)
	{

		if (num <= 9)
		{
			cout << num << " ";
		}
		else
		{
			ord1 = num % 10;
			ord2 = (num % 100 - ord1) / 10;
			ord3 = (num % 1000 - ord2) / 100;

			sum = ((ord1 * ord1 * ord1) +
						(ord2 * ord2 * ord2) +
						(ord3 * ord3 * ord3));
			if (sum == num)
			{
				cout << num << " ";
			}
		}
	}
	return 0;
}


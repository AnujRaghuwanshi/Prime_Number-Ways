#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	if (n <= 1)
		return false;

	for (int i = 2; i <= n / 2; i++)
		if (n % i == 0)
			return false;

	return true;
}

int main()
{
    int num;
    cout<<"Enter natural number: ";
    cin>>num;
	isPrime(num) ? cout << " Prime\n" : cout << " Not Prime\n";
	
	return 0;
}
//Time Complexity : O(n)
/*Run a loop from i=2 to n/2.
Inside the loop, check whether n is divisible by i.
If n is not divisible by i, it means n is a prime number.
If n is divisible by i, it means n has divisors other than 1 and itself, and thus, it is not a prime number.
*/

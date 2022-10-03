
#include <bits/stdc++.h>
using namespace std;


bool powerOf2(int n)
{
	
	if (n == 1)
		return true;

	
	else if (n % 2 != 0 || n == 0)
		return false;
	return powerOf2(n / 2);
}


int main()
{
	int n = 64; 
	int m = 12; 

	if (powerOf2(n) == 1)
		cout << "True" << endl;

	else
		cout << "False" << endl;

	if (powerOf2(m) == 1)
		cout << "True" << endl;

	else
		cout << "False" << endl;
}

// This code is contributed by Aditya Kumar (adityakumar129)

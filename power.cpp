#include <bits/stdc++.h>
using namespace std;

bool ispowerOf2(int n)
{
if(n&(n-1))
	return false;
return true;
}


int main()
{
int n;
cout<<"ENTER THE NUMBER U WANNA CHECK IS POWER OF 2 OR NOT:";
cin>>n;
if(ispowerOf2(n))
cout<<"YES IT IS POWER OF 2";
else
cout<<" IT IS NOT POWER OF 2";
return 0;
}



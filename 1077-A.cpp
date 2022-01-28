#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	long long int a,b,k,o,e,calc;
	cin >> t;
	for (i = 1;i<=t;i++){
		cin >> a >> b >>k;

		o = (k+1)/2;
		e = k/2;

		calc = ((a*o)-(b*e));
		 cout<<calc<<endl;


	}


	return 0;
}

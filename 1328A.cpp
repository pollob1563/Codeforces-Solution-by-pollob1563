#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    double a,b;
    cin >> t;
    for(i = 1; i<=t ; i++){
        cin >> a >> b;
        double ans = (ceil(a/b)*b)-a;
        cout<<(long long int)ans<<endl;
    }
    return 0;
}

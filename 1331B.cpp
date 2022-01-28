#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,p[1],q[1];
    cin >> a;
    for( i = 2; ; i ++ ){
        if((a%i)==0){
            break;
        }
    }
    int ans = a/i;
    cout<<i<<ans<<endl;

    return 0;
}


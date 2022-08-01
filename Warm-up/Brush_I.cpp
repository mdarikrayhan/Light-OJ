/***************************************************/
/*            Author : Md. Arik Rayhan             */
/*        Github : github.com/mdarikrayhan         */
/***************************************************/
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define multicase int NoOfTestCase = 1;cin >> NoOfTestCase;for(int testcaseno=1;testcaseno<=NoOfTestCase;testcaseno++)
int main() {
fastio
multicase
{
    int n;
    cin>>n;
    long long sum=0;
    bool flag=true;
    
    for(int i=0;i<n;i++){
       int a=0;
       cin>>a;
        sum=sum+a;
        if(a<0){
            flag=false;
        }
    }
    if(flag){
        cout<<"Case "<<testcaseno<<": "<<sum<<nl;
    }
    else{
        cout<<"Case "<<testcaseno<<": "<<0<<nl;
    }
}
return 0;
}

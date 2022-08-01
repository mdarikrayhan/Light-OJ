/***************************************************/
/*            Author : Md. Arik Rayhan             */
/*        Github : github.com/mdarikrayhan         */
/***************************************************/
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define multicase int NoOfTestCase = 1;cin >> NoOfTestCase;for(int testcaseno=1;testcaseno<=NoOfTestCase;testcaseno++)
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

int main() {
fastio
multicase
{
double r,sqr,circle,pi=(2*acos(0));
cin>>r;
sqr=(r*2)*(r*2);
circle=pi*r*r;
printf("Case %d: %.2lf\n",testcaseno,sqr-circle);
}
return 0;
}

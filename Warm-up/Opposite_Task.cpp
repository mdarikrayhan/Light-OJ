/***************************************************/
/*            Author : Md. Arik Rayhan             */
/*        Github : github.com/mdarikrayhan         */
/***************************************************/
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
#define multicase int NoOfTestCase = 1;cin >> NoOfTestCase;for(int testcaseno=1;testcaseno<=NoOfTestCase;testcaseno++)
int main() {
multicase
{
        int n;
        scanf("%d", &n);
        vector<int> res;
        if (n < 10)
        {
            res.push_back(0);
            res.push_back(n);
        }
        else
        {
            res.push_back(10);
            res.push_back(n - 10);
        }
       cout<<res[0]<< " "<<res[1]<<nl;
}
return 0;
}
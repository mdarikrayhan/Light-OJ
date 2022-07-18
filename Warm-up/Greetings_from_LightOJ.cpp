#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
int x=1;
void solve() {
int a,b;
cin>>a>>b;
cout<< "Case "<<x<<": "<<a+b<<nl;
x++;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int T = 1;
cin >> T;
while(T--) {
solve();
}
return 0;
}
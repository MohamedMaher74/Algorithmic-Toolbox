#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int n;
    cin >> n;
    vector < ll > v(n);
    for(auto & i : v) cin >> i;
    sort(v.begin() , v.end() , greater < int > ());
    cout << v[0] * v[1] << '\n';

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int n;
    cin >> n;
    
    vector < ll > v(n);
    for(auto & i : v) cin >> i;

    // search for the first-Maximum element in a vector : 

    int f_max = -1;
    for(int i = 0 ; i < n ; i++){
        if((f_max == -1) or (v[i] > v[f_max])) f_max = i;
    }
    
    // search for the second-Maximum element in a vector : 

    int s_max = -1;
    for(int i = 0 ; i < n ; i++){
        if(i != f_max and ((s_max == -1) or (v[i] > v[s_max]))) s_max = i;
    }

    cout << (ll) (v[f_max] * v[s_max]) << '\n';

    return 0;
}

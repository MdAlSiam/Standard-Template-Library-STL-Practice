#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <list>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dd double
#define scl(x) scanf("%lld", &x)
#define scd(x) scanf("%lf", &x)
#define pi acos(-1.0)
#define pb push_back
#define Sort(x) sort(x.begin(), x.end())
#define For(i, x, y) for(ll i = x; i < y; i++)
#define pii pair < int, int >
#define ppi pair < pii, int >
#define ff first
#define ss second

ll getans(ll n){
    string dimik = "", d1 = "", d2 = "", bin = "";
    while(1){
        dimik += ((n % 2) + '0');
        n /= 2;
        if(n == 0) break;
    }

    dimik += '0';

    reverse(dimik.begin(), dimik.end());

    //cout << "Bin = " << dimik << endl;

    ll len = dimik.length();

    for(ll i = len - 1; i >= 0; i--){
        if((dimik[i] == '1') && (dimik[i-1] == '0')){
                //cout << "dimik[i-1] = " << dimik[i-1] << " dimik[i] = " << dimik[i] << endl;
            dimik[i] = '0';
            dimik[i-1] = '1';
            for(ll k = 0; k <= i; k++) d1 += dimik[k];
            for(ll l = i+1; l < len; l++) d2 += dimik[l];
            sort(d2.begin(), d2.end());
            bin += (d1 + d2);
            break;
        }
    }

    //cout << bin << endl;

    len = bin.length();

    ll index = len - 1, p = 0, ans = 0;

    for(index = len-1; index >= 0; index--, p++){
            //cout << bin[index] << " x " << "2^" << p << endl;
        ans += ((bin[index] - '0') * (pow(2, p)));
    }

    //cout << ans << endl;

    return ans;
}

int main(){
	ll test, num;
	scl(test);
	For(i, 1, test+1){
        scl(num);
        printf("Case %lld: %lld\n", i, getans(num));
	}
	return 0;
}

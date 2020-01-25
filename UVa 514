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

int main(){
	ll target[1001], n, i;

	while(1){
		scanf("%lld", &n);
		if(n == 0) {break;}
		while(1){
			scanf("%lld", &target[0]);
			if(target[0] == 0) {printf("\n"); break;}
			for(ll i = 1; i < n; i++){
				scanf(" %lld", &target[i]);
			}

			stack <ll> station;

			ll coach = 1, index = 0;

			while(coach <= n){
				station.push(coach);
				while(!station.empty() && target[index] == station.top()){
					station.pop();
					index++;
					if(index >= n) break;
				}
				coach++;
			}
			if(station.empty()) printf("Yes\n");
			else printf("No\n");
		}
	}
	return 0;
}

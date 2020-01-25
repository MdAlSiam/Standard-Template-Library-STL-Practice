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
	ll n, item, i;

	while(1){
		scanf("%lld", &n);
		if(n == 0) break;

		queue <ll> q;
		for(i = 1; i <= n; i++) q.push(i);

		printf("Discarded cards:");
		while(q.size() > 1){
			printf(" %lld", q.front());
			q.pop();
			q.push(q.front());
			if(q.size() > 2) printf(",");
			q.pop();
		}
		printf("\nRemaining card: %lld\n", q.front());
	}
	return 0;
}

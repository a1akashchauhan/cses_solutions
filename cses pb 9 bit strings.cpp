#include<iostream>
#include<cmath>
#define ll long long
#define m (int)1e9+7

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main(){
	fio;

	ll n,r;
	cin>>n;
	r=1;
	while(n--){
		r<<=1;
		r%=m;

	}
	cout<<r<<"\n";
	return 0;
}
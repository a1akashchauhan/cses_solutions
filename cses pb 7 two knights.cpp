#include<bits/stdc++.h>
using namespace std;

int main(){
	long m;
	cin>>m;
	for(int n=1; n<=m;n++){
		long k= n*n;
		k=k*(n*n -1);
		k=k/2;
		long l= 4*(n-1);
		l=l*(n-2);
		cout<<k-l<<"\n";

	}
	
}
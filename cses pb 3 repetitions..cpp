#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	string s;
	cin>>s;

	long ans=1, c=1;

	for(long i=0; i< s.length()-1; i++){
		if(s[i]==s[i+1]){
			c++;
			ans= max(c,ans);
		}

		else if(s[i] != s[i+1]){
			ans= max(ans,c);
			c=1;
		}
	}

	cout<<ans;
}
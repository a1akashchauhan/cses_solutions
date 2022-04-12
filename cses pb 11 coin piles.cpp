#include<iostream>
using namespace std;
int main(){
	int t; 
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if((a+b)%3==0 and a*2>=b and b*2>=a){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
		
	}



}
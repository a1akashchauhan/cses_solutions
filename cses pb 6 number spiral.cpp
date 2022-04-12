#include<iostream>

using namespace std;


int main(){
	long long t;
	cin>>t;
	while(t--){
		long long x,y;
		cin>>y>>x;
		
		if(x==y){
			cout<<x*x+1-y<<"\n";
		}
		else if(x>y){
			long long ans;
			if(x%2==0){
				ans=((x-1)*(x-1))+y;

			}
			else{
				ans= x*x+1-y;
			}
			cout<<ans<<"\n";
		}
		else if(y>x){
			long long ans;
			if(y%2!=0){
				ans =(y-1)*(y-1) +x;

			}
			else{
				ans= y*y +1-x;
			}
			cout<<ans<<"\n";
		}
	}

}

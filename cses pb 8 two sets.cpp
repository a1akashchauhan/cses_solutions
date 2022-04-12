#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n%4==0 or (n+1)%4==0){
		cout<<"YES\n";
		if(n%2==0){
			cout<<n/2<<"\n";
			for(int i=0;i< n/4;i++){
				cout<<i+1<<" "<<n-i<<" ";
			}
			cout<<endl;
			cout<<n/2<<"\n";
			for(int i=n/4; i<n/2;i++){
				cout<<i+1<<" "<<n-i<<" ";
			}

		}

		else{
			cout<<(n-3)/2 +2<<"\n";
			cout<<1<<" "<<2<<" ";
			for(int i=0;i< (n-3)/4;i++){
				cout<<i+4<<" "<<n-i<<" ";
			}
			cout<<endl;
			cout<<(n-3)/2 +1<<"\n";
			cout<<3<<" ";
			for(int i=(n-3)/4; i<(n-3)/2;i++){
				cout<<i+4<<" "<<n-i<<" ";
			}

		}
	}
	else cout<<"NO \n";
}
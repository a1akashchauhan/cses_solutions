#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n<=3 and n!=1){
		cout<<"NO SOLUTION";
	}
    else {
    	int k=1;
	    int l =2;

		for(int i =0; i< n/2 ; i++){
			cout<<l<<" ";
			l+=2;
		}

		for(int i = n; i> n/2 ; i--){
			cout<<k<<" ";
			k+=2;
		}

    }
	// int k=1;
	// int l =2;

	// for(int i =0; i< n/2 ; i++){
	// 	cout<<l<<" ";
	// 	l+=2;
	// }

	// for(int i = n; i> n/2 ; i--){
	// 	cout<<k<<" ";
	// 	k+=2;
	// }


}
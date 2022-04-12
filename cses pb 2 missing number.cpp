#include<iostream>

using namespace std;

int main(){

	long long n,j,count;

	cin>>n;
	count=0; 

	for(int i=1;i<n;i++){
		cin>>j;
		count=count+j;


	}

	cout<<( n*(n+1)/2)- count;


}
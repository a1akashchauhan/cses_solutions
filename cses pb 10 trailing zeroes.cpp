#include<iostream>
using namespace std;
int main(){
	long n;
	cin>>n;
	int count;
	for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;

    cout<<count;
}
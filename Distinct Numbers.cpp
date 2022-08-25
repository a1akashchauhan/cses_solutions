#include <bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  vector<int>v(n);
  for(int &e:v){
    cin>>e;
  }
  map<int,int> mp;
  for(int i: v){
    mp[i]++;
  }
  cout<<mp.size();
  
  return 0;
}

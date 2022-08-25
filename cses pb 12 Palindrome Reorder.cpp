#include <bits/stdc++.h>
using namespace std;
int main(){
  string s; 
  cin>>s;
  
  unordered_map<char,int> ump;
  for(char i: s){
    ump[i]++;
  }
  int count=0;
  for(auto i: ump){
    if(i.second&1){
      count++;
    }
  }
  if(count>1){
    cout<<"NO SOLUTION";
      return 0;
  }
  string firsthalf = "";
  string oddpart = "";
  for(auto i: ump){
    if((i.second&1)==false){
      for(int j=0; j<i.second/2;j++){
        firsthalf+=i.first;
      }
    }
    else{
      for(int j=0;j<i.second;j++){
        oddpart+=i.first;
      }
    }
  }
  string secondhalf = firsthalf;
  reverse(secondhalf.rbegin(),secondhalf.rend());
  string ans= firsthalf+ oddpart + secondhalf;
  cout<<ans;







  return 0;
}

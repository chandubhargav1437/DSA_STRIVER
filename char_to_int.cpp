#include <iostream>
#include <vector>
using namespace std;
int main(){
  string s;
  cout<<"enter the string"<<endl;
  cin>>s;
  int sum=0;
  for(auto x:s){
    sum+=x-'0';
  }
  cout<<sum<<endl;
  return 0;
}

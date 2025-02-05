#include<iostream>

using namespace std;

int main(){
  int n,k,c=0;
  cin>>n>>k;
  int a[50];
  for (int  i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  if(a[k]==0){
    cout<<0;
  }else{
    for (int i = 0; i < n; i++)
    {
      if(a[i]>=a[k]){
        c++;
      }
    }
    cout<<c<<endl;
    
  }
  


  return 0;
}
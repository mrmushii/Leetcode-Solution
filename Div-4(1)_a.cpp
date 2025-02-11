#include<iostream>
#include<string.h>

using namespace std;

int main(){
  int n;
  cin>>n;
  string w;
  for(int i = 0;i<n;i++){
    cin>>w;
    int w_size = w.size();
    if(w_size==2){
      cout<<"i"<<endl;
    }else
    {
      for (int j = 0; j < w_size-2; j++)
      {
        cout<<w[j];
      }
      cout<<"i"<<endl;
      
    }
    
    
  }
  


  return 0;
}
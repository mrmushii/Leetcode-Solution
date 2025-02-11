#include<bits/stdc++.h>
using namespace std;
 
int main(){
string a,b;
cin>>a>>b;
int min_size =min(a.size(),b.size());
int flag;
for(long long i=0;i<min_size;i++){
    if(a[i]>b[i]){
        cout<<b<<endl;
        flag=0;
        break;
    }else if(b[i]>a[i]){
        cout<<a<<endl;
        flag = 0;
        break;
    }else
        flag=-1;
}
if(flag==-1){
    if(a.size()>b.size()){
        cout<<b<<endl;
    }else
        cout<<a<<endl;
}
 
 
return 0;
}

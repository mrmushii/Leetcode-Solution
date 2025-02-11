#include<bits/stdc++.h>
using namespace std;
 
int main(){
string a;
getline(cin,a);
for(long long i = 0;i<a.size();i++){
    if(a[i]=='\\'){
        cout<<endl;
        break;
    }else
        cout<<a[i];
}
 
return 0;
}
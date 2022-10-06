#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int i = 1;
   
    
    while(i<=n){
         char x = 65+i-1;
        int j=1;
        while(j<=n){
                cout<<x;
                j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
    
}
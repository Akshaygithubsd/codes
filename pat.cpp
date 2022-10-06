#include <iostream>
using namespace std;
int main(){
    int n;
  
    cout<<"enter the no."<<endl;
      cin>>n;
    int i=1;
      char ch='A';
    while(i<=n){
        int j=1;
      
        while(j<=n){
            
            cout<<ch;
            ch++;
            j++;
        }
        i++;
        cout<<endl;
    }
}
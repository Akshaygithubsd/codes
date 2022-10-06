#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int sum1 =0;
    int sum2 =0;

    while(n!=0){
        int digit = n%10;
        if(digit%2==0){
            sum1=sum1+digit;
            
        }
       else if (digit%2!=0){
            sum2=sum2+digit;
         
       }
       n=n/10;
        
    }
    cout<<sum1<<" "<<sum2;
}
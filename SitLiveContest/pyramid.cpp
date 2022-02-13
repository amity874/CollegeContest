#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int h=0,num=0,i=1;
    while(num<n){
        num=num+(i*i);
        if(num>n)
            break;
        i+=2;
        h++;
    }
    cout<<h;
    
    return 0;
    
}

#include<iostream>
using namespace std;
int main(){
    int min=1,max=1000;
    int guess=500,turn=0;
    string s;
    do{	
    	cout<<guess<<"\n";
    	cin>>s;
    	if(s=="lower"){
    		max=guess-1;
    		guess=(max+min)/2;
    	}
    	else if(s=="higher"){
    		min=guess+1;
    		guess=(max+min)/2;
    	}
    	turn++;

    }
    while(s!="correct" && turn<=10);

    return 0;  
}

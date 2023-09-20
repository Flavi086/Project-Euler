#include<iostream>
using namespace std;

int main(){
    unsigned long long out_1=0;
    unsigned long long out_2=0;
    for(int i=1; i<=100;++i){
        out_1+=(i*i);
        out_2+=i;
    }
    cout<<(out_2*out_2) - out_1 <<endl;
    return 0;
}
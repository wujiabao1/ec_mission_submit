#include <iostream>
using namespace std;
int main() {  
    int last=1;
    int n;
    for(n=9;n>=1;n--){
        last=(last+1)*2; 
        
    }
    cout<<"第一天摘了"<<last<<"个桃子"<<endl;
    return 0;
}

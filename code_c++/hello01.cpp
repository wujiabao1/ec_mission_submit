#include <stdio.h>
int main(){ 
int count=0; 
int a,b,c;
for(a=1;a<=4;a++){
    for(b=1;b<=4;b++){
        for(c=1;c<=4;c++){
            if(a!=b&&a!=c&&b!=c){
                int num=a*100+b*10+c;
                printf("%d\n",num);
                count++;
                
            }
        }
    }
}
}
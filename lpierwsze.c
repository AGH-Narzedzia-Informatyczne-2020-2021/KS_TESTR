

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i,j;
    for(i=1;i<=50;++i){
        
        for(j=2;j<i;++j){
            if(i%j==0) break;
        }
    
    if(i==1) printf("%d nie jest liczbą pierwszą\n",i);
    else if(i==j) printf("%d jest liczbą pierwszą\n",i);
        
    
    }
    
    return 0;
}

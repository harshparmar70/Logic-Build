#include <stdio.h>

void main(){
    int rimainder , revnum = 0;
    int num = 1234;
    while (num>0)
    {
        rimainder = num %10;
        revnum = revnum*10 +  rimainder;
        // printf("%d",revnum);
        num= num/10; 
    }
    printf("%d",revnum);
    return;
}
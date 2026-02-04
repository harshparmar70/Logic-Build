#include <stdio.h>

void main(){
    int rimainder , revnum = 0;
    int Originalnum = 12321;
    int num = Originalnum;
    while (num>0)
    {
        rimainder = num %10;
        revnum = revnum*10 +  rimainder;
        // printf("%d",revnum);
        num= num/10; 
    }
    // printf("%d",revnum);
    if(Originalnum == revnum){
        printf("palindrome No");
    }
    else{
        printf("not palindrome No");
    }
    return;
}
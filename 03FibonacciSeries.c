#include <stdio.h>
void main(){

    int num = 5; //0 1 1 2

    int a =0;
    int b=1;
    for (int i = 0; i < num; i++)
    {
        printf("%d ",a);
        int c = a+b; //1 2 3
        a=b; //1 1 2
        b=c; //1 2 3   
    }
    printf("\n");
    
    int n= 5;
    // First two terms of the series
    int prev1 = 1;
    int prev2 = 0;
    // for loop that prints n terms of fibonacci series
    for (int i = 1; i <= n; i++) {
      	// Print current term and update previous terms
        if (i > 2) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
            printf("%d ", curr);
        }
		else if (i == 1)
            printf("%d ", prev2);
        else if (i == 2)
            printf("%d ", prev1);
    }
    return; 
}
#include <stdio.h>

int main()
{
    int num = 151;
    int flage = 0;
    for (int i = 2; i*i <= num; i++)
    {
        if(num%i==0){
            flage=1;
            break;
        }
    }

    if (flage==0)
    {
        printf("Prime Number : %d",num);
    }else{
        printf("Not Prime Number : %d",num);
    }
    
    

    return 0;
}

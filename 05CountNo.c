#include <stdio.h>

int main() {
    int num = 5;
    int count = 0;
    int temp = num; 

    do {
        temp /= 10;
        ++count;
    } while (temp != 0);

    printf("Total digits: %d\n", count);
    
    return 0;
}
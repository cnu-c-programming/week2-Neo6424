#include <stdio.h>

int main()
{
    int n;
    int divisor = 0;

     if(n==1){
        printf("false");
        break;
    }

    scanf("%d", &n);
    for(int i =2; i * i <= n; i++){
        int test = n % i;
        if(test == 0){
            divisor++;
        }
        if(divisor > 1){
            printf("false");
            break;
        }

    }
    if(divisor == 0){
        printf("true");
    }
    return 0;
}


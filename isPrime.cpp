#include <cstdio>
#include <cmath>

bool isPrime(int data);

int main()
{
    int data(0);
    bool isPrim(false);

    do {
        printf("input a number bigger than two: ");
        scanf("%d", &data);
    }while(data <= 2);
    
    isPrim=isPrime(data);
    
    if(isPrim) {
        printf("%d is a prime\n", data);
    }
    else {
         printf("%d is not a prime\n", data);
    }
}

bool isPrime(int data)
{
    int sdata = int(sqrt(data));
    for(int i = 2; i <= sdata; i++){

    if(!(data % i)){
        return false;
    }

    }
    return true;
}
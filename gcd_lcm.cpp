#include <cstdio>

int gcd(int numa, int numb);
int lcm(int numa, int numb);

int main()
{
    int numa(0), numb(0), gcdNum =(1), lcmNum(1);

    printf("input two positive numbers: ");
    scanf("%d %d", &numa, &numb);

    if(numa <= 0 || numb <= 0){
        printf("The numbers input is negative");
    }

    gcdNum = gcd(numa, numb);
    lcmNum = lcm(numa, numb);

    printf("The gcm between %d and %d is: %d\n",numa, numb, gcdNum);
    printf("The lcm between %d and %d is: %d\n",numa, numb, lcmNum);
}


int gcd(int numa, int numb)
{
    int tmp(0), q(0);
    if(numa < numb){
        tmp = numa;
        numa = numb;
        numb = tmp;
    }
    while(numb != 0){
        q = numa % numb;
        numa = numb;
        numb = q;
    }
    return numa;
}

int lcm(int numa, int numb)
{
    return numa * numb / gcd(numa, numb);
}
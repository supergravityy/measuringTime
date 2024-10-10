#define _CRT_SECURE_NO_WARNINGS
#include "ItrTimer/ItrTimer.h"

void main(int ArgsNum, char** Args)
{
    int repeatNum = 0;
    long long sum = 0;  // n(n+1)/2 �̱⿡

    do
    {
        printf("Enter the number of times to repeat : ");
        scanf("%d", &repeatNum);
        printf("\n");
    } while(repeatNum >= INT_MAX);
    
    printf("Now timer has been set!\n");
    ItrTime_SetStartTime();
    
    for(int n = 0; n < repeatNum; n++)
        sum += n;
    
    printf("And your Task has been done! sum : %lld\n", sum);
    printf("Time taken for the requested Task : %lf(sec)\n",ItrTime_GetElapsedTime());
}
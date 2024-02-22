#include <stdio.h>
#include <limits.h>
int main()
{
    int max, smax, arr[7] = {7,7,5,4,3,2,8};
    max = INT_MIN;
    smax = INT_MIN;
    for (int i = 0; i < 7; i++)
    {
        if (max < arr[i])
        {
            smax=max;
            max = arr[i];
        // printf("%d \n",smax);
        }
        else if(smax<arr[i]&& arr[i]!=max){
            smax=arr[i];
        }
    }
    printf("The smax is %d ",smax);







    // ******************* OR ********************** //

    // int  max, smax, arr[7]={8,2,3,6,5,4,6};
    // max = INT_MIN;
    // smax = INT_MIN;
    // for (int i = 0; i < 7; i++)
    // {
    //     if (max < arr[i])
    //     {
    //         max = arr[i];
    //     }
    // }
    // printf("max is:%d \n", max);
    // for (int i = 0; i < 7; i++)
    // {
    //     if(smax<arr[i] && arr[i]!=max){
    //         smax=arr[i];
    //     }
    // }
    // printf("smax is:%d \n", smax);

    return 0;
}
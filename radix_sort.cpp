#include<iostream>
using namespace std;

void display(int arr[], int len)
{
    cout<< "array display : ";
    for(int i=0; i<len; i++)
        cout<<arr[i]<< " ";
    cout<< endl;
}

int main()
{
    int arr[] = {234,746, 982, 467, 783, 925, 379, 982, 1234};
    int i, len;
    len = sizeof(arr)/sizeof(arr[0]);
    cout<< len <<endl;

    int maxx = arr[0];
    for (i=1; i<len; i++)
    {
        if(maxx<arr[i]) maxx = arr[i];
    }

    cout<<"Max : "<<maxx<<endl;

    for(int exp =1; maxx/exp >0 ; exp *=10)
    {
        // here n = 10, max will be number
        int n = 10;

        int count[n] = {0};
        for(i=0;i<len;i++)
        {
            count[(arr[i]/exp)%10] ++;
        }

        for(i=1; i<10; i++)
            count[i] += count[i-1];


        int output[len];
        for(i=len-1; i>=0; i--)
        {
            output[count[(arr[i]/exp)%10]-1] = arr[i];
            count[(arr[i]/exp)%10]--;
        }

        for(i=0; i<len; i++)
        {
            arr[i] = output[i];
        }
    }

    display(arr, len);

    return 0;
}
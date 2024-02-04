#include<stdio.h>
#include <iostream>
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
    int arr[] = {10, 80, 40, 20, 90, 30, 50, 70, 40};
    int i, j, len;
    len = sizeof(arr)/sizeof(arr[0]);
    cout<< len <<endl;
    for(i=0; i<len; i++)
    {
        j=0;
        while(j<len-i){
            if(arr[j]> arr[j+1])
            {
                int tmp = arr[j];      
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
            j++;
        }
    }

    display(arr, len);
    return 0;
}
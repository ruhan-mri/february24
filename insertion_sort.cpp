#include<stdio.h>
#include<iostream>
using namespace std;

void display(int arr[], int len)
{
    cout<< "array display : ";
    for(int i=0; i<len; i++)
        cout<<arr[i]<< " ";
    cout<< endl;
}

void swapValue(int &a, int &b)
{
    int z = a;
    a = b;
    b= z;
}

int main()
{
    int arr[] = {10, 80, 40, 20, 90, 30, 50, 70, 20};
    int i, j, len;
    len = sizeof(arr)/sizeof(arr[0]);
    cout<< len <<endl;
    
    for(i=1; i<len; i++)
    {
        int key = arr[i];
        j = i-1;
        while(key <arr[j] && j>=0){
            arr[j+1] = arr[j];  // bam e copy korteci
            j--;
        }
        arr[j+1] = key;
    }

    display(arr, len);
    return 0;
}
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

void swapValue(int &a, int &b)
{
    int z = a;
    a = b;
    b= z;
}

int main()
{
    int arr[] = {10, 80, 40, 20, 90, 30, 50, 70, 10};
    int i, j, len;
    len = sizeof(arr)/sizeof(arr[0]);
    cout<< len <<endl;
    
    for(i=0; i<len-1; i++)
    {
        int min = i;
        for(j=i+1; j<len; j++)
        {
            if(arr[j]<arr[min]) min = j;
        }
        swapValue(arr[min], arr[i]);
    }

    display(arr, len);
    return 0;
}
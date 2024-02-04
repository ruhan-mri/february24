#include<iostream>
#include<stdio.h>
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
    int arr[] = {10, 80, 40, 20, 90, 30, 50, 70, 90};
    int i, len;
    len = sizeof(arr)/sizeof(arr[0]);
    cout<< len <<endl;
    
    //step 1 : find max vlaue
    int max = arr[0];
    for(i=1; i<len; i++)
    {
        if(max < arr[i]) max = arr[i];
    }
    cout<<"Max : "<<max<<endl;

    //step 2 : count array
    max++;
    int count[max] = {0};
    for(i  = 0; i<len; i++)
    {
        count[arr[i]]++;
    }

    //step 3: cumulative count array
    for(i=1; i<max; i++)
    {
        count[i] += count[i-1];
    }

    //step 4: output array
    int output[len];
    for(i=len-1; i>=0; i--)
    {
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }

    display(output, len);
    return 0;
}
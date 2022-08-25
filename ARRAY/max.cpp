#include<iostream>
#include<stdlib.h>

using namespace std;

int max1(int a[], int n)
    {
        int max = a[0];
        for(int i=1;i<n;++i)
            {
                if(a[i]>max)
                    max = a[i];
            }
        return max;
    }

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
    int max =0;
    max = max1(a,n);
    cout<<max;




return 0;
}
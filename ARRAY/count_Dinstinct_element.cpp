#include<iostream>
//#include<stdlib.h>

using namespace std;

int countDis1(int arr[],  int t)
{
    int count=0;
    bool flag=true;
    for(int i=0;i<t;i++)
        {  flag=true;
            for(int j=i-1;j>=0;j--)
                {
                    if(arr[i] == arr[j])
                        {
                            flag=false;
                            break;
                        }
                }
            if(flag == true)
                count++;
        }
    return count;
}

int main()
{
 int t;
 cin>>t;
 int arr[t];
for(int i=0;i<t;++i)
    cin>>arr[i];
cout<<countDis1(arr,t);




return 0;
}
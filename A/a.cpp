#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,m,n,z=1;
    cin>>a>>m;
    int arr[m]={0};
    for(int i=0;i<m;i++)
        cin>>arr[i];
    cin>>n;
    for(int i=m;i<(m+n);i++)
        cin>>arr[i];
    sort(arr,arr+(m+n));
    int arr1[100]={0},x=0;
    arr1[x]=arr[0];
    for(int i=1;i<(m+n);i++)
    {
        if(arr[x]!=arr[i])
        {
            ++x;
            arr1[x]=arr[i];
        }
    }
    for(int i=1;i<=a;i++){
        cout << arr1[i-1];
        if(arr1[i-1]!=i)
            z=0;
    }
    if(z==0)
        cout<<"Oh, my keyboard!";
    else
        cout<<"I become the guy.";
    return 0;
}
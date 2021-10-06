#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int nums[n];
    cout<<"enter the elements of array"<<endl;
    int i;


    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    cout<<"after remove the elements of array is "<<endl;
    for(i=0;i<n;i++)
    {
       if(nums[i] != nums[i+1])
       {
           cout<< nums[i]<<" ";
       }
    }
    
    

    cout<<"the length of final array is "<<endl;


}


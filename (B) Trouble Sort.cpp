#include<iostream>using namespace std;int main(){    int t;    cin >>t;    while(t--)    {        int a;        cin>>a;        int arr[a];        bool sorted=true;        cin>>arr[0];        for(int i=1;i<a;i++)        {            cin>>arr[i];            if(arr[i]<arr[i-1]) sorted=false;        }        int brr[a];        bool zero=false;        bool one =false;        for(int i=0;i<a;i++)        {            cin>>brr[i];            if(brr[i]==0) zero=true;            if(brr[i]==1) one =true;        }        if(sorted==true)        {            cout<<"Yes"<<endl;        }        else        {            if(one== false || zero==false )            cout<<"No"<<endl;            else cout<<"Yes"<<endl;        }    }}
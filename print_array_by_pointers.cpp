#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    //cout<<ptr+1<<endl<<&a<<endl<<*ptr;
    *ptr =77;
    //cout<<a<<endl;
    int arr[]={10,20,30,40};
    
    for(int i =0 ;i<=3;i++)
    {
        cout<<*(arr+i)<<endl;
    }
    cout<<endl;
    int *aptr=arr;
    for(int i =0 ;i<=3;i++)
    {
        cout<<*(aptr+i)<<endl;
    }
    

}
#include<iostream>
using namespace std;

void swap(int *aaptr , int *bbptr)
{
    int temp = *aaptr;
    *aaptr=*bbptr;
    *bbptr=temp;
}

void swap2(int *aaptr , int *bbptr)
{
    int temp = *aaptr;
    *aaptr=*bbptr;
    *bbptr=temp;
}

int main()
{
    int a = 20,b=10;
    int *aptr = &a , *bptr=&b;
    //swap by giving pointer
    swap(aptr,bptr);
    cout<<a<<" "<<b<<endl;
    //swap by giving address
    swap2(&a , &b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
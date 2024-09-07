#include<iostream>
using namespace std;
// int main()
// {
//     int n1,n2,n3;
//     int *ptr1,*ptr2,*ptr3;
//     cout<<"enter 3 numbers"<<endl;
//     cin>>n1>>n2>>n3;
//     ptr1=&n1;
//     ptr2=&n2;
//     ptr3=&n3;
//     cout<<"sum = "<<*ptr1+*ptr2+*ptr3;

// }

// call by value
// void swap(int &x,int &y)
// {
//     int temp=x;
//     x=y;
//     y=temp;
    
// }
// int main()
//     {
//         int x=10,y=20;
//         cout<<"before "<<x<<","<<y<<endl;
//         swap(x,y);  //CALLING BY VALUE 
//         cout<<"after "<<x<<","<<y<<endl;

//     }

//call by refrence

// void swap(int *x,int *y)
// {
//     int temp=*x;
//     *x=*y;
//     *y=temp;
    
// }
// int main()
//     {
//         int x=10,y=20;
//         cout<<"before "<<x<<","<<y<<endl;
//         swap(&x,&y);CALL BY REFRENCE
//         cout<<"after "<<x<<","<<y<<endl;

//     }

//size = 5 elements 1,3,2,5


int main()
{
    int n,i,count=0;
    cout<<"enter the size"<<endl;
    cin>>n;
    int arr[n-1];
    for(i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(count==0)
        {
            cout<<"missing number is "<<arr[i];
        }
    }
}




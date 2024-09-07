//Linear Search
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i,s,c=0,inx;
//     cout<<"enter size of the array"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements in an array "<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"enter the element to be searched "<<endl;
//     cin>>s;
//     i=0;
//     while(i<n)
//     {
//         if(arr[i]==s)
//         {
//             c++;
//             inx=i;
//         }
//         i++;
//     }
//     if(c==0)
//     {
//         cout<<"element not found"<<endl;
//     }
//     else if (c>0)
//     {
//         cout<<"element found at index "<<inx<<endl;;
//     }
// }

//Binary Search
// #include<iostream>
// using namespace std;
// int binarysearch(int arr[],int start,int end,int s)
// {
//     while(start<=end)
//     {
//         int mid = start + ((end- start )/2);
//         if(arr[mid]==s)
//         {
//             return mid;
//         }
//         if(arr[mid]<s)
//         {
//             start = mid+1;
//         }
//         if(arr[mid]>s)
//         {
//             end = mid-1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int n,i,s,c=0,inx;
//     int start,end;
//     cout<<"enter size of the array"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements in an array "<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"enter the element to be searched "<<endl;
//     cin>>s;
//     int res = binarysearch(arr,0,n-1,s);
//     if(res==-1)
//     {
//         cout<<"element not found in the array"<<endl;
//     }
//     else{
//         cout<<"element found in array at index "<<res<<endl;
//     }
// }



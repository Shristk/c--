// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={100,200,300};
//     cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     for( int i=0;i<3;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
//     for(int j:arr)
//     {
//         cout<<j<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//      int n,i,s=0;
//      cout<<"enter ther size of array\n";
//      cin>>n;
//      int arr[n];
//      for (i = 0;i<n;i++)
//      {
//         cout<<"enter the elements"<<endl;
//         cin>>arr[i];
//      }
//      for(int j = 0;j<n;j++)
//      {
//         s = s+arr[j];
//      }
//      cout<<"sum of array "<<s<<endl;
//      return 0;
// }

// #include<iostream>
// using namespace std;
// int biggest(int arr[n])
// {
//    int i,arr[n],c=0,m=0,m1,n;
//     for (i = 0;i<n;i++)
//      {
//         if(m<arr[i])
//         {
//          m = arr[i];
//         }
//      }
//      return m;
// }
// int smallest(int arr)
// {
//    int i,arr[n],c=0,m=0,m1;
//      m = arr[0];
//      for(i=0;i<n;i++)
//      {
//       if(m>arr[i])
//       {
//          m = arr[i];

//       }
//      }

//      return m;
// }
// int main()
// {
//      int n,i,s=1;
     
//      cout<<"enter ther size of array\n";
//      cin>>n;
//      int arr[n];
//      for (i = 0;i<n;i++)
//      {
//         cout<<"enter the elements"<<endl;
//         cin>>arr[i];
//      }
//      cout<<"biggest element is = "<<biggest(arr[n])<<endl;
//      cout<<"smallest element is ="<<smallest(arr[n])<<endl;
//      return 0;

// }




// #include<iostream>
// using namespace std;
// int main()
// {
//      int n,i,s=0;
//      cout<<"enter ther size of array\n";
//      cin>>n;
//      int m=n;
//      int arr[n],ar[n];
//      for (i = 0;i<n;i++)
//      {
//         cout<<"enter the elements"<<endl;
//         cin>>arr[i];
//         ar[m-1] = arr[i];
//         m--;
//      }
//      cout<<"reversed array ="<<endl;
//      for(i=0;i<n;i++)
//      {
//         cout<<ar[i]<<endl;
//      }
     

// }



// #include<iostream>
// using namespace std;
// int array(int n)
// {
//    int i,arr[n],c=0;
//     for (i = 0;i<n;i++)
//      {
//         cout<<"enter the elements"<<endl;
//         cin>>arr[i];
//         if(arr[i]==0)
//         {
//          c++;
//         }
//      }
//      return c;
// }
// int main()
// {
//      int n,i,s=1;
//      cout<<"enter ther size of array\n";
//      cin>>n;
//      cout<<"number of zeros is = "<<array(n)<<endl;
//      return 0;

// }


// #include<iostream>
// using namespace std;
// int main()
// {
//      int n,i,s=1;
//      cout<<"enter ther size of array\n";
//      cin>>n;
//      int arr[n];
//      for (i = 0;i<n;i++)
//      {
//         cout<<"enter the elements"<<endl;
//         cin>>arr[i];
//      }
//      for(int j = 0;j<n;j++)
//      {
//         s = s*arr[j];
//      }
//      cout<<"sum of array "<<s<<endl;
//      return 0;

// }

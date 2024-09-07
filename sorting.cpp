//BUBBLE SORT
// #include<iostream>
// using namespace std;
// void bubblesort(int arr[],int n)
// {
//     int c;
//     // int n = sizeof(arr);
//     for(int j=0;j<n;j++)
//     {
//     for(int i=0;i<n;i++)
//     {
//             if(arr[i+1]<arr[i])
//             {
//                 c = arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=c;
//             }
//     }
//     }
// }
// int main()
// {
//     int n,i;
//     cout<<"enter the size of the array"<<endl;
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     bubblesort(arr,n);
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i]<< " ";
//     }
// }


//Selection Sort
// #include<iostream>
// using namespace std;
// void selectionsort(int arr[],int n)
// {
//     int c;
//     for(int i=0;i<n;i++)
//     {
//         int min = i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[min]>arr[j])
//             {
//                 min=j;
//             }
//         }
//         if(min!=i)
//         {
//             swap(arr[min],arr[i]);
//         }
//     }
// }
// int main()
// {
//     int n,i;
//     cout<<"enter the size of the array"<<endl;
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     selectionsort(arr,n);
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i]<< " ";
//     }
// }



//Insertion sort
// #include<iostream>
// using namespace std;
// void insertionsort(int arr[],int n)
// {
//     for(int i=1;i<n;i++)
//     {
//         int key = arr[i];
//         int j=i-1;
//         while(j>=0 && arr[j]>key)
//         {
//             arr[j+1]=arr[j];
//             j=j-1;
//         }
//         arr[j+1]=key;
//     }
// }
// int main()
// {
//     int n,i;
//     cout<<"enter the size of the array"<<endl;
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     insertionsort(arr,n);
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i]<< " ";
//     }
// }







//Quick Sort
// #include<iostream>
// using namespace std;
// int partition(int arr[],int low,int high)
// {
//     int pivot = arr[high];
//     int i = low-1;
//     for(int j = low;j<high;j++)
//     {
//         if(arr[j]<=pivot)
//         {
//             i+=1;
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[i+1],arr[high]);
//     return i+1;
// }
// void quicksort(int arr[],int low,int high)
// {
//     if(low<high)
//     {
//         int pi = partition(arr,low,high);
//         quicksort(arr,0,pi-1);
//         quicksort(arr,pi+1,high);
//     }
// }
// int main()
// {
//     int n,i;
//     cout<<"enter the size of the array"<<endl;
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     quicksort(arr,0,n-1);
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i]<< " ";
//     }
// }


















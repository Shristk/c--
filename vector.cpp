#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>

// int main()
// {
//     int i;
//     vector <int> arr{1,4,1,6,7,};
//     // for (int i:arr)
//     // {
//     //     cout<<i<<endl;
//     // }

//     // //SIZE CALCULATION
//     // cout<<"size of array"<<arr.size()<<endl;
//     // cout<<arr.capacity()<<endl;

//     //INSERTION
//     arr.push_back(100);
//     arr.insert(arr.begin()+2,500);
//     arr.insert(arr.end()-1,20);
//     arr.emplace_back(200);
//PUSHBACK MAKES A COPY OF THE DATA TO BE INSERTED IN THE VECTOR SO WE USE 
//EMPLACE_BACK OR IMPROVE THE CODE EFFIFCINECY 


//     for(int j:arr)
//     {
//         cout<<j<<endl;
//     }
//     // vector<double>d;
//     // d={1.2,8,5,4,7,4};
//     // cout<<d[1]<<endl;
//     // vector<string>s;
//     // s={"hello"};
//     // for (string st:s)
//     // {
//     //     cout<<st<<endl;
//     // }  
// }


// #include<iostream>
// using namespace std;
// #include<vector>
// int main()
// {
//     int i,n;
//     vector<int>a{};
//     for(i=0;i<10;i++)
//     {
//         cin>>n;
//         if(n%3==0&&n%6==0&&n%12==0)
//         {
//             int k=0;
//             a.insert(a.begin()+k,n);
//             k+=1;
//         }
//     }
//     cout<<"output"<<endl;
//     for (int j:a)
//     {
//         cout<<j<<endl;
//     }
// }

//SORTING
// int main()
// {
//     vector <int> v{1,4,2,1,7,6};
//     sort(v.begin(),v.end());
//     for (int j:v)
//     {
//         cout<<j<<",";
//     }
//     cout<<endl;
//     cout<<"reverse"<<endl;
//     reverse(v.begin(),v.end());
//     for (int k:v)
//     {
//         cout<<k<<",";
//     }
//     cout<<endl;
//     v.erase(v.begin());
//     cout<<"after erase:"<<v[0];
// }


//PROGRAM TO SORT A VECTOR AND REMOVE DUPLICATED ELEMENTS
// int main()
// {
//     int n,i,n1;
//     cin>>n;
//     vector <int> a{};
//     for(i=0;i<n;i++)
//     {
//         cin>>n1;
//         a.push_back(n1);
//     }
//     cout<<"sorted array "<<endl;
//     sort(a.begin(),a.end());
//     for(int k:a)
//     {
//         cout<<k<<",";
//     }
//     i=0;
//     while(i<=a.size())
//     {
//         if(i+1>=a.size())
//         {
//             break;
//         }
//         if(a[i]==a[i+1])
//         {
//             a.erase(a.begin()+(i+1));
//         }
//         else{
//             i+=1;
//         }
//     }
//     cout<<endl;
//     cout<<"without duplicatees"<<endl;
//     for(int m:a)
//     {
//         cout<<m<<",";
//     }
// }


//ITERATORS
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>arr;
//     arr={10,20,30};
//     vector<int>::iterator itr = arr.begin();
//     cout<<*itr<<endl;
//     itr=arr.end()-1;
//     cout<<*itr<<endl;
//     return 0;
// }

// //SETS
// #include<iostream>
// #include<vector>
// #include<set>
// using namespace std;
// int main()
// {
//     set<int> s{1,2,3,1,2};
//     cout<<s.size()<<endl;
//     s.insert(s.begin(),10);
//     if(s.find(3)==s.end())
//     {
//         cout<<"no"<<endl;
//     }
//     else{
//         cout<<"yes"<<endl;
//     }
// }


// number of arrays 2 length 1 where array element lie betwenn 1 to n


// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n,k,i,j;
//     cin>>n;
//     cin>>k;
//     int ar[k];
//     vector<int>arr;
//     vector<int>arr1;
//     for(i = 0;i<k;i++)
//     {
//         // arr1.insert(ar);
//         for(j=1;j<=n;j++)
//         {
//             if((j+1)%j)
//             {
//                 ar[i]=j;
//             }
//         }
//     }
//     for(int j1:arr)
//     {
//         cout<<j1<<",";
//     }
// }


// after creating two vectors find out the common elements between the arrays
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
// vector<int>arr;
// vector<int>arr1;
// arr={1,2,3};
// arr1={5,3,2,7,8};
// int n = arr1.size();
// int i=0;
// vector<int>::iterator itr = arr.begin();
// while(i<n-1)
// {
//     if(*itr==arr1[i])
//     {
//         cout<<arr1[i]<<endl;
//         i++;
//         itr=arr.begin();
//     }
//     else if (itr==arr.end())
//     {
//         i++;
//     }
//     itr++;
// }
// }




#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>arr;
vector<int>arr1;
arr={1,2,3,4,5};
arr1={1,4,3,5,2};
int n = arr1.size();
int m = arr.size();
if(n!=m)
{
    cout<<"False"<<endl;
}
else
{
int i=0;
int count =0;
vector<int>::iterator itr = arr.begin();
while(i<n-1)
{
    if(*itr==arr1[i])
    {
        count++;
        i++;
        itr=arr.begin();
    }
    else if (itr==arr.end())
    {
        i++;
    }
    itr++;
}
if(count<n)
{
    cout<<"False"<<endl;
}
else if(count==n-1)
{
    cout<<"True"<<endl;
}
}
}
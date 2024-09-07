// #include<iostream>
// using namespace std;
// #include<string>
// int main()
// {
//      int n,i,s=0;
//      cout<<"enter ther size of array\n";
//      cin>>n;
//      char arr[n];
//      for (i = 0;i<n;i++)
//      {
//         cout<<"enter the characters "<<endl;
//         cin>>arr[i];
//      }
//      cout<<"the characters in the array are\n";
//      for(i=0;i<n;i++)
//      {
//          cout<<arr[i];
//      }
// }


// #include<iostream>
// using namespace std;
// #include<string>
// int main()
// {
//     string s1;
//     char c;
//     int i,s=0;
//     cout<<"enter the string"<<endl;
//     cin>>s1;
//     cout<<"enter the character to be found"<<endl;
//     cin>>c;
//     int n = s1.length();
//     cout<<"lenght of string "<<n<<endl;
//     for(i=0;i<n;i++)
//     {
//         if(s1[i]==c)
//         {
//             s=s+1;
//         }
//     }
//     cout<<"the number of times the charcter is present is "<<s;
// }

#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int main()
{
    string s1;
    char c;
    int i,s=0;
    // cout<<"enter the string"<<endl;
    // cin>>s1;
    string s2 = "happy,feet";
    // cout<<s1.length()<<endl;
    // cout<<s1.size()<<endl;
    // cout<<s1.find('t')<<endl;
    // cout<<s1.append(" is tasty")<<endl;
    // cout<<s1.at(5)<<endl;
    // cout<<s1.replace(0,2,"school")<<endl;
    // cout<<s1.substr(0,5)<<endl;
    // cout<<s1.compare(s2)<<endl;
    // reverse(s1.begin(),s1.end());
    cout<<s2.substr(4,2);
    cout<<s1;


}








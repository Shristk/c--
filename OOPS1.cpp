#include<iostream>
using namespace std;
#include<string>
// class bird
// {
//     public:
//     string name1 ="parrot";
//     int speed1 = 10;
//     string name2 = "eagle";
//     int speed2 = 30;
//     void flying( int hours)
//     {
//         int total1 = speed1*hours;
//         int total2 = speed2*hours;
//         cout<<"parrot covers "<<total1<<endl;
//         cout<<"eagle covers "<<total2<<endl;
//     }
// };
// int main()
// {
//     int n;
//     cout<<"enter time in hours "<<endl;
//     cin>>n;
//     bird obj;
//     obj.flying(n);
//     return 0;
//}


// class car
// {
//     public:
//     string name1,name2;
//     int speed1;
//     int speed2;
//     void distance( int hours)
//     {
//     cout<<"enter name and speed of car 1\n";
//     cin>>name1;
//     cin>>speed1;
//     cout<<"enter name and speed of 2\n";
//     cin>>name2;
//     cin>>speed2;
//         int total1 = speed1*hours;
//         int total2 = speed2*hours;
//         cout<<name1<<" covers "<<total1<<" kms in "<<hours<<"hours"<<endl;
//         cout<<name2<<" covers "<<total2<<" kms in "<<hours<<" hours"<<endl;
//     }
// };
// int main()
// {
//     int n;
//     cout<<"enter total travel time of both cars in hours "<<endl;
//     cin>>n;
//     car obj;
//     obj.distance(n);
//     return 0;
// }


// class frooti
// {
//     public:
//     int i,count=1;
//     void machine(int ic)
//     {
//         frooti obj;
//         if(ic>0)
//         {
//          int n,t=ic;
//     cout<<"enter the number of frootis you want\n";
//     cin>>n;
//         if(n>0)
//         {
//         if(n>ic)
//         {
//             while(ic>0)
//             {
//                 cout<<"take frooti "<<count<<endl;
//                 count = count+1;
//                 ic--;
//             }
//             cout<<"shortage of "<<n-t<<endl;
//             ic=0;
//             cout<<"final capacity = "<<ic<<endl;
//             obj.machine(ic);
//         }
//         else if(n<ic)
//         {
//             for( i=0;i<n;i++)
//             {
//                 cout<<"take frooti "<<count++<<endl;
//             }
//             ic = ic-n;
//             cout<<"final capactiy = "<<ic<<endl;
//             obj.machine(ic);
//         }
//         else if(n==ic)
//         {
//             for(i=0;i<n;i++)
//             {
//                 cout<<"take frooti "<<count++<<endl;
//             }
//             ic=0;
//             cout<<"final capactiy = "<<ic<<endl;
//             obj.machine(ic);
//         }
//         }
//         else if(n==0)
//         {
//             cout<<"thanks for coming"<<endl;
//             cout<<"initial capactiy "<<ic<<endl;
//         }
//         else if(n<0)
//         {
//             cout<<"invalid inuput"<<endl;
//             obj.machine(ic);
//         }
//         }
//         else{
//             cout<<"out of stock"<<endl;
//             cout<<"enjoy your drinks"<<endl;
//         }
//     }
// };
// int main()
// {
//     frooti obj;
//     int ic;
//     cout<<"enter the capacity of the machine \n";
//     cin>>ic;
//     obj.machine(ic);
//     return 0;
// }




//NAME: Varnika Maurya
//PRN: 24070123160
//Exp-3
//Program 1
#include<iostream>
using namespace std;
int main()
{
    int n, rn;
    cout<<"Enter last 5 digits of PRN: ";
    cin>>n;
    cout<<"Digits of PRN are: "<<endl;
    while(n>0){
        rn=n%10;
        cout<<rn<<endl;
        n=n/10;
    }
    return 0;
}
/*
PS C:\Users\DELL\Desktop\C++> g++ Lab_3.cpp -o Lab_3     
PS C:\Users\DELL\Desktop\C++> .\Lab_3.exe        
Enter last 5 digits of PRN: 23160
Digits of PRN are: 
0
6
1
3
2
  */

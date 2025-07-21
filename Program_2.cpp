//NAME: Varnika Maurya
//PRN: 24070123160
//Exp-3

//Program 2
#include<iostream>
using namespace std;
int main()
{
    int m1, m2, m3, m4, m5,total;
    float avg;
    cout<<"Enter marks of 5 subjects: ";
    cin>>m1>>m2>>m3>>m4>>m5;
    cout<<"Marks of 5 subjects are: "<<m1<<" "<<m2<<" "<<m3<<" "<<m4<<" "<<m5<<endl;
    total = m1 + m2 + m3 + m4 + m5;
    avg = total / 5.0;
    cout<<"Total marks = "<<total<<endl;
    cout<<"Average marks = "<<avg<<endl;
    if(avg >= 90)
        cout<<"Result: Grade O"<<endl;
    else if(avg >= 85&& avg < 90)
        cout<<"Result: Grade A+"<<endl;
    else if(avg >= 75 && avg < 85)
        cout<<"Result: Grade A"<<endl;
    else if(avg >= 65 && avg < 75)
        cout<<"Result: Grade B+"<<endl;
    else if(avg >= 55 && avg < 65)
        cout<<"Result: Grade B"<<endl;
    else if(avg >= 45 && avg < 55)
        cout<<"Result: Grade C"<<endl;
    else
        cout<<"Result: Fail"<<endl;
    return 0;
}
/*
PS C:\Users\DELL\Desktop\C++> g++ l3.cpp -o l3
PS C:\Users\DELL\Desktop\C++> .\l3.exe        
Enter marks of 5 subjects: 78
45
98
68
75
Marks of 5 subjects are: 78 45 98 68 75
Total marks = 364
Average marks = 72.8
Result: Grade B+
  */

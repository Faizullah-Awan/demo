#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"Enter a 3-digit number";
cin>>num;
int last_num     = num%10;
int middle_number= (num/10)%10;
int first_num    = (num/100);
int reversed_num = last_num*100+middle_number*10+first_num;
if(reversed_num==num)
{
    cout<<"The number is palindrome number";
}else{
    cout<<"The number is not palindrome";
}
return 0;
}
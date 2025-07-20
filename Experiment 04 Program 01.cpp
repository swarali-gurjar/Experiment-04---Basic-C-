#include<iostream>
using namespace std;
int main()
{
    int a=6;// 101
    int b=4;// 011
    //Bitwise AND
    int bitwise_and=a&b;
    //Bitwise OR
    int bitwise_or=a|b;
    //Bitwise XOR
    int bitwise_xor=a^b;
    //Bitwse NOT
    int bitwise_not=~a;
    //Bitwise Left shift
    int left_shift=a<<1;
    //Bitwise Right shift
    int right_shift=a>>1;
    //Printing the results of 
    //Bitwise operators
cout<<"AND:"<<bitwise_and<<endl;
cout<<"OR:"<<bitwise_or<<endl;
cout<<"XOR:"<<bitwise_xor<<endl;
cout<<"NOT a:"<<bitwise_not<<endl;
cout<<"Left shift:"<<left_shift<<endl;
cout<<"Right shift:"<<right_shift<<endl;

return 0;
}

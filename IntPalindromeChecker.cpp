#include <iostream>
#include <cmath>
using namespace std;
//better integer palindrome checker





string isIntPalindrome(int input){
int rinput = 0;
int x = input;

    while(x>0){
        int addednumber = x%10;
        rinput = rinput*10 + addednumber;
        x = x/10;
    } if(rinput==input){
        return "Congrats you did it!";
    }else{return "nah input is not a palindrome.";}
}

int main()
{
    cout<<isIntPalindrome(12321);
}

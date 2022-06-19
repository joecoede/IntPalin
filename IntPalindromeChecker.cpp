#include <iostream>
#include <cmath>
using namespace std;
//integer palindrome checker


string isIntPalindrome(int input){
 string answer = "Congrats! Input is a palindrome!";
 int b;
 int a;
 int c = input;
 int intlength = 0;

    for(int x = input; x>0; intlength++){
        x = x/10;
    }

    for(int i = intlength-1; i>-1; i--){
        int z = trunc(input/pow(10,i));
        b = z%10;
        a = c%10;
        if(a!=b){
            answer = "Input is not an integer Palindrome.";
            i = -1;
        }
        c = c/10;
    } return answer;
}

int main()
{
    cout<<isIntPalindrome(244);
}
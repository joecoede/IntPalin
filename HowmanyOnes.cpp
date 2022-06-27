#include <iostream>

using namespace std;
//f(5) = 2; 5 is 101 in binary therefore 2 1's

// 3 = 0011 in binary
// 7 = 0111
// 10 = 1010

int howmany1s(int input){
    int counted1s = 0;
    while(input != 0){
        if((input&1)==1){
            counted1s++;
        }
        input = (input>>1);
    }
    return counted1s;
}



int main()
{
    cout<<howmany1s(11);

    return 69;
}

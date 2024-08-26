/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
void recover(char signal[]) {
    int i =0;
    while(signal[i] != '\0') {
        if(signal[i] >= 'A' && signal[i] <= 'Z') {
            signal[i] +=32;
        }
        else if(signal[i] >= 'a' && signal[i] <= 'z') {
            signal[i] -=32;
        }
        i+=1;
    }
}
int main()
{
    char signal[] = "HeLLo WoRLD!";
    recover(signal);
    std::cout << signal;
    return 0;
}

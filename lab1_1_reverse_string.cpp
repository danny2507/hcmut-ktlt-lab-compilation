/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
void reverse(char str[]) {
    int n = 0;
    while(str[n] != '\0') {
        n++;
    }
    int left = 0;
    int right = n-1;
    
    while(left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}
int main()
{
    char str[] = "Hello, World!";
    reverse(str);
    std::cout<<str;

    return 0;
}


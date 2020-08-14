#include<iostream>

using namespace std;

int repeatedTwice(int number)
    {
        int digitOne= number % 10;
        number = number/10;
        int digitTwo = number%10;
        if ( digitOne == digitTwo )
        {
            return 1;   
        } else {
            return 0;
        }
    }

int main()
{
    int index=0;
    int array[20];
    for(int i = 1;i <= 99;i++){
        if(repeatedTwice(i) == 1)
        {
            array[index++] = i; 
        }
    }
    for(int i = 0;array[i] != '\0';i++){
        cout <<array[i] <<endl;
    }

    return 0;
}
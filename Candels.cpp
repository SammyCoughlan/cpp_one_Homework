#include<iostream>
#include<string>
#include<cstdio>

int main (int arg, char ** argv)
{
    std::cout << "How old is the child?: " << std::endl;
    int n = 0;
    std::cin >> n;


    int candels[n];
    int tallest = 0;
    int counter = 0;

    for(int i = 0; i < n; i++)
    {
        std::cout << "please enter a candel height: " << std::endl;
        std::cin >> candels[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(candels[i] > tallest)
        {
            tallest = candels[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(tallest == candels[i])
        {
            counter = counter + 1;
        }
    }

    std::cout << "\n" << counter;

}

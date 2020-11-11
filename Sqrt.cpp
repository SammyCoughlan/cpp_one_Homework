#include<iostream>

int main()
{
    int num;

    std::cout << "Please insert the number you would like to square root: \n" << std::endl;
    std::cin >> num;

    long double sqrt = num/2;
    long double temp = 0;

    while(sqrt != temp)
    {
        temp = sqrt;
        sqrt = (num/temp + temp)/2;
    }

    std::cout << "Input: " << num << "\n" << std::endl;

    if(int(sqrt) != sqrt)
    {
        std::cout << "Output: " << int(sqrt) << "\n" << std::endl;
        std::cout << "The square root of " << num << " is " << sqrt << ", and since the decimal part is truncated, " << int(sqrt) << " is returned.\n";
    }else
    {
        std::cout << "Output: " << int(sqrt) << "\n" << std::endl;

    }


}

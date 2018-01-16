#include <iostream>

int main()
{
    long long int number{600851475143};
    int first_prime{2};

    int i = first_prime;
    while (number != 1)
    {
        if (number % i == 0)
        {
            number = number / i;
        }
        else
        {
            ++i;
        }
    }

    std::cout << "Largest prime factor is: " << i << std::endl;
}
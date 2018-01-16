#include <iostream>

bool isPalindrome(int number)
{
    int digits[16];

    int i = 0;
    for (; number != 0; ++i)
    {
        digits[i] = number % 10;
        number /= 10;
    }

    for (int j = 0, k{i - 1}; j < (i / 2); ++j, --k)
    {
        if (digits[j] != digits[k])
        {
            return false;
        }
    }

    return true;
}

int getLargestPalindromeProduct()
{
    int largets_palindrome_product = -1;

    for (int i{999}; i > 99; --i)
    {
        for (int j{999}; j > 99; --j)
        {
            int product = i * j;

            if (isPalindrome(product) && product > largets_palindrome_product)
            {
                largets_palindrome_product = product;
            }
        }
    }

    return largets_palindrome_product;
}

int main()
{
    std::cout << "Largest palindrome product is: " << getLargestPalindromeProduct() << std::endl;

    return 0;
}
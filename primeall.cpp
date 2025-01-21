#include <iostream>

int main()
{
    int loli ;int hili;
    std::cout << "Enter the low limit: ";
    std::cin >> loli;
    std::cout << "Enter the upper limit: ";
    std::cin >> hili;
    std::cout << "List of prime numbers between this range is:\n";
    for(int i = loli ; i <= hili ; i++)
    { 
        int flag = 0;
        for(int j = 2 ; j < i ; j++)
        {
            if(i%j==0)
            {   flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            std::cout << i << "\n";
        }
    }
    

    return 0;
}

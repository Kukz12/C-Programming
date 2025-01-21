#include <iostream>

int main()
{
    int limit;
    std::cout << "Enter the limit: ";
    std::cin >> limit;
    int x=0;
    int y=1;
    std::cout << "The series is: "
    std::cout << x << "\n"; 
    std::cout << y << "\n";
    while(true)
    { 
        
        int temp=y;
        y=x+y;
        x=temp;
        if(y>=limit)
        {
            break;
        }
        std::cout << y << "\n"; 
        
    }

    return 0;
}

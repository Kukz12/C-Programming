#include <iostream>

int main()
{
    int arr[7] = {2,3,5,8,6,9,1};
    int choice;
    std::cout << "1.To find the sum of elements \n2.To search for an element \nENTER YOUR CHOICE: ";
    std::cin >> choice;
    if (choice == 1)
    {
        int sum = 0;
    
    for(int i=0; i<=6 ; i++)
    {
       sum = sum + arr[i]; 
    }
    std::cout << "The sum of elements of the array is: " << sum << "\n";
    }
    else if (choice == 2)
    {
        int ele;
        std::cout << "Enter the element u want to search for: ";
        std::cin >> ele;
        int f = 0;
    for(int i=0; i<=6 ; i++)
    {  
       if(arr[i]==ele)
       {
          std::cout << "The element is at index:" << i << "\n";
          f = 1;
          break;
       }
    }
    if(f==0)
    {
         std::cout << "Element not found";
    }
    }
    else
    {
       std::cout << "WRONG CHOICE MA DUDE!!"; 
    }
    return 0;
}

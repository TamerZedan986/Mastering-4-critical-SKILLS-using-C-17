#include <iostream>

int main()
{
    int A = 0,B = 0 ;
    bool A_check= false , B_check = false;
    std::cout << "Enter the two Numbers A B : ";
    std::cin>> A >> B;
    A_check = ((A % 2)==0);
    B_check = ((B % 2)==0);
    if (A_check && B_check)
    {
        std::cout << A/B << "/n";
    }
    else if (!(A_check || B_check))
    {
        std::cout << A * B << std::endl;
    }
    else if (A_check && (!B_check))
    {
        std::cout << A + B <<std::endl;
    }
    else
    {
        std::cout << A - B <<std::endl;
    }

    return 0;
}
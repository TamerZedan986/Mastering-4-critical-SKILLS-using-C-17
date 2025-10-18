#include<iostream>

int main()
{
    int A = 0 , B = 0 , C = 0 , Temp =0 ;
    std::cin >> A >> B >> C;
    if ( A > B)
    {
        Temp = A;
        A = B;
        B = Temp;
    }

    if ( B > C )
    {
        Temp = B;
        B = C;
        C = Temp;

        if ( A > C )
        {
            Temp = A;
            A = C;
            C = Temp;
        }
    }
    std::cout << A << " " << B << " " << C <<std::endl;
    return 0;
}
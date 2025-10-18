#include<iostream>

int main()
{
    int A = 0 , B = 0 , C = 0;
    std::cin >> A >> B >> C;

    std::cout << std::max((( A <= 100)? A : -1 ) , std::max ( (( B <= 100)? B : -1 ) , (( C <= 100)? C : -1 ) ));

}
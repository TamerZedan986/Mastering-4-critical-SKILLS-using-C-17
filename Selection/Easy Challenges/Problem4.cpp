#include<iostream>

int main ()
{
    int x = 0 , A1 = 0 , A2 = 0, A3 = 0 , A4 = 0 , A5 = 0 , Counter_Of_Max = 0 , Counter_Of_Min = 0;
    std::cin >> x;
    std::cin >> A1 >> A2 >> A3>> A4 >> A5;

   Counter_Of_Min += ( A1 <= x);
   Counter_Of_Max += ( A1 > x);
   Counter_Of_Min += ( A2 <= x);
   Counter_Of_Max += ( A2 > x);
   Counter_Of_Min += ( A3 <= x);
   Counter_Of_Max += ( A3 > x);
   Counter_Of_Min += ( A4 <= x);
   Counter_Of_Max += ( A4 > x);
   Counter_Of_Min += ( A5 <= x);
   Counter_Of_Max += ( A5 > x);

   std::cout << Counter_Of_Max << " " << Counter_Of_Min <<std::endl;
}
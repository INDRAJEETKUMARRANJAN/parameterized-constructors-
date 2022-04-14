parameterized constructor

#include <iostream>
class point 
{
    int x, y;
    public:
       point (int a, int b) // inline parameterized constructor definition
       
    { x = a;
      y = b;
      
      }
     
  void display ()
  {
      std::cout <<"("<<x<<" , "<<y<<")\n";
      
  }
};
   
     
     int main ()
     { 
         point p1(1,2);   // invokes parameterized constructor 
         point p2(5,10);
        std ::cout<<"point p1 =";
         
         p1.display();
        std ::cout<<"point p2 =";
         p2.display();
         return 0;
     }
     
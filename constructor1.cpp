//A copy constructor is a member function 
#include<iostream>

using namespace std;

class con{
    
    public:
        int a,b;
        //default constructor
        con()
        {
            a=10;
            b=20;
        }

        //parameterised constructor
        con(int c, int d)
        {
            a=c;
            b=d;
        }
        
};
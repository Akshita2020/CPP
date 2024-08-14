//Overload polymorphism
#include <iostream>
using namespace std;
class Areacal {
    public:
    /*
    compile time polymorphism -- Function overloading
    Rules--->
    1. Number of parameters or the the type of data must be different
    2. Return type dosen't matter
    */
    void Area(double radius){
        cout<<"\n Area of circle is:"<<3.14*radius*radius;
        
    }
    void Area(int side){
        cout<<"\n Area of square is:"<<side*side;
    }
    void Area(int length, int breadth){
        cout<<"\n Area of rectangle is:"<<length*breadth;
    }
    void Area(double base, double height){
        cout<<"\n Area of triangle is:"<<0.5*base*height;
    }
};

int main() {
   Areacal a;
   a.Area(3.5);//circle
   a.Area(5); //sqaure
   a.Area(7.5);//rectangle
   a.Area(3.2,6.4);//triangle
    return 0;
}
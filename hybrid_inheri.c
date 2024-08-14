// Hybrid inheritance
#include <iostream>
using namespace std;
class potato{
    public:
    void frenchfries(){
        cout<<"\n Fresh Frenchfries";
    }
};
class tomato: public potato {
    public:
    void sauce(){
       cout<<"\n tommata sauce"; 
    }
};
class Masala: public tomato{
    public:
    void periper(){
        cout<<"\n periper";
    }
};
class paneer{
    public:
    void Tikka(){
       cout<<"\n Paneer tikka";
    }
};
class Akshita: public paneer, public Masala{
    public:
    void water(){
        cout<<"\n complete";
    }
   
};
int main() {
   Akshita a;
   a.frenchfries();
   a.sauce();
   a.periper();
   a.Tikka();
   a.water();

    return 0;
}
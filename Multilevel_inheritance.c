
#include <iostream>
using namespace std;
class laptop{
    public:
    void Dell() {
        cout<<" \n Dell vostro 14";
    }
    void Asus() {
        cout<<"\n vivobook asus";
    }
};
class Mobile: public laptop{
    public:
    void samsung(){
        cout<<"\n s23 ultra";
    }
    void Apple(){
        cout<<"\n Iphone 15 pro max ultra";
    }
};
    class RelianceDigital:public Mobile{ //Multilevel inhertance
};
int main() {
   RelianceDigital r;
   r.Dell();
   r.Asus();
   r.samsung();
   r.Apple();
  
    return 0;
}
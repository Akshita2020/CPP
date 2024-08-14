
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
    class RelianceDigital: public laptop{
};
int main() {
   RelianceDigital r;
   r.Dell();
   r.Asus();
   laptop l;
   l.Dell();
   l.Asus();

    return 0;
}
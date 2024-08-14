
#include <iostream>
using namespace std;
class google{
    public:
    void gemini() {
        cout<<"\n we are about to launch gemini";
    }
    void microsoft() {
        cout<<"\n we are about to beat you";
    }
};
class googlebest:public google{
    
};
int main() {
    googlebest g;
    g.gemini();
    g.microsoft();

    return 0;
}
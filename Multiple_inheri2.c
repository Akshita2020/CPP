// Multiple inheritance
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
class chatgpt{
    public:
    void search() {
        cout<<"\n we are about to beat gemini";
    }
        void bar() {
            cout<<"\n we are working hard";
        
    }
};
class googlebest:public google, public chatgpt{
    
};
int main() {
    googlebest g;
    g.gemini();
    g.microsoft();
    g.search();
    g.bar();
    return 0;
}
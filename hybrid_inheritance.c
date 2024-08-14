// Hybrid inheritance
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
class chatgpt: public google{
    public:
    void search() {
        cout<<"\n we are about to beat gemini";
    }
        void bar() {
            cout<<"\n we are working hard";
        
    }
};
class googlebest:public chatgpt{
    public:
    void welcome() {
        cout<<"hello world";
    }
};
class goodbye: public googlebest{
    
};
int main() {
    googlebest g;
    g.gemini();
    g.microsoft();
    g.search();
    g.bar();
    return 0;
}
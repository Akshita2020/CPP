
#include <iostream>
using namespace std;
class Bank {
    long long int Acc_Bal=15000;//Declared private here
    public:
    void cashier(int cash) { //publically declared here
        Acc_Bal=Acc_Bal+cash; //Class member can access private property
        cout<<"Account statement"<<Acc_Bal;
    }
};
int main() {
    int cash;
    Bank b;
    cout<<"Enter a number";//Taking input from user
    cin>>cash;
    b.cashier(cash);

    return 0;
}
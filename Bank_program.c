
#include <iostream>
using namespace std;
class Bank {
    long long int Acc_Bal=15000;//Declared private here
    public:
    void cashier(int cash) { //publically declared here
        int op;
        cout<<"1.Credit\n 2.Debit \n";
        cin>>op;
        if(op==1) {
            Acc_Bal=Acc_Bal+cash;
    cout<<"Enter a number"<<Acc_Bal;        
        }
        else if(op==2) {
            Acc_Bal=Acc_Bal-cash;
        cout<<"Enter a number"<<Acc_Bal;
            
        }
    }
};
int main() {
    int cash;
    Bank b;
    cout<<"Enter cash amount ";//Taking input from user
    cin>>cash;
    b.cashier(cash);

    return 0;
}
#include<iostream>
using namespace std;

class Bank{
    private:
        int accNumber;
        string accHolder;
        double balance;
    
    public:
        Bank(int accNo, string accH, double bal = 0){
            accNumber = accNo;
            accHolder = accH;
            balance = bal;
        }

        void deposit(){
            double amount;
            cout<<"Enter the amount you want to insert: ";
            cin>>amount;

            if(amount > 0){
                balance += amount;
                cout<<"Amount inserted successfully!";
            }
            else{
                cout<<"Invalid amount!";
            }
        }

        void withdraw(){
            double amount;
            cout<<"Enter the amount you want to withdraw: ";
            cin>>amount;

            if(amount > 0){
                balance -= amount;
                cout<<"Amount withdrawn successfully!";
            }
            else{
                cout<<"Invalid amount!";
            }
        }

        void display() {
            cout << "Account Number: " << accNumber << endl;
            cout << "Account Holder: " << accHolder << endl;
            cout << "Balance: " << balance << endl;
        }

};

int main(){
    Bank a(12345, "Ashwin", 5000);
    a.display();
    a.deposit();
    a.display();

    return 0;
}
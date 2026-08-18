#include<iostream>
using namespace std;

class ATM{
    private:
        int pin;
        double accNumber;
        double balance;
    
    public:
        ATM(int p, int a, double b = 0){
            pin = p;
            accNumber = a;
            balance = b;
        }

        void deposit(double amount){
            if(amount > 0){
                balance += amount;
                cout<<"Amount inserted successfully!\n";
            }
            else{
                cout<<"Invalid amount!\n";
            }
        }

        void withdraw(double amount){
            if(amount > 0){
                balance -= amount;
                cout<<"Amount withdrawn successfully!\n";
            }
            else{
                cout<<"Invalid amount!\n";
            }
        }

        void display() {
            cout << "Account Number: \n" << accNumber << endl;
            cout << "Balance: \n" << balance << endl;
        }

        void changePin(int pinR){
            pin = pinR;
            cout<<"Pin changed successfully!\n";
        }

};

int main(){
    ATM a(1234, 98765, 5000);
    a.display();
    a.deposit(5000);
    a.display();
    a.changePin(2728);

    return 0;
}
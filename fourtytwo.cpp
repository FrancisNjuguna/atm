// WITHDRAWALS 
// DEPOSITS
// CHECK BALANCE
// TRANSACTION HISTORY

#include<iostream>

using namespace std;

int main () {
    int choice;
      int password, pin, enter_amount, deposit_amount;
    cout<<"\n ******** WELCOME TO AEES BANK BACHEZ ********" <<endl;
    float withdrawal_amount;
    cout<<"Enter your PIN:- " <<endl;
    cin>>password;
    cout<<"Enter Amount to Activate Your Account" <<endl;
    cin>>enter_amount;
    cout<<"Enter PIN for Confirmation "<<endl;
    cin>>pin;

    if (password == pin)
    {
        cout<<" CHOOSE ANY ONE OF THEM ::--"<<endl;
        cout<<" 1. For Withdraw "<<" 2. For Deposit"<<" 3. Check Balance "<<" 4. FOR CHANGE PIN" <<endl;
        cin>>choice;
        switch(choice) {

            case 1: 
            {
                cout<<"Enter Amount For Withdrawal "<<endl;
                cin>>withdrawal_amount;
                float balance_after_withdrawal = enter_amount - withdrawal_amount;
                cout<<"After withdrawing your amount is :- " <<balance_after_withdrawal<<endl;
break;
            }

            case 2: 
            {
cout<<"Enter Amount to deposit in your Account "<<endl;
cin>>deposit_amount;
float balance_after_deposit = enter_amount + deposit_amount;
break;
            }

            case 3:
            {
               cout<<"Your Balance in Your Account is :- "<<endl;
               cout<<enter_amount<<endl;
break; 
            }

            case 4: 
            {
cout<<"Enter Your Current PIN :- "<<endl;
cin>>pin;

if (pin == password) {
    cout<<"Enter New PIN :- "<<endl;
    cin>>pin;
    cout<<"Changed PIN SUCESSFULLY :- "<<endl;
} else 
 cout<<"YOUR PIN Doesn't Match:- "<<endl;
 break;
            }
            default:
            cout<<"SORRY you have entered invalid input "<<endl;

        }
    }

    else 
    cout<<"SORRY, PIN doesn't match plz try again"<<endl;
    return 0;
}

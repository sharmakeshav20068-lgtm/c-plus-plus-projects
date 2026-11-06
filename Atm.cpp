#include <iostream>

int main(){
    /*initializing account state variables*/
    double balance{}; /*starting bank balance*/
    double amount{};  /*temporary variable to hold deposit/withdrawal amounts*/
    char selection{};  /*stores user's menu choice*/

    do{
        /*Displaying the main menu option for user*/
        std::cout<<"WELCOME TO THE ATM/BANKING SYSTEM"<<std::endl;
        std::cout<<"1. check balance(B)"<<std::endl;
        std::cout<<"2. Enter deposits(D)"<<std::endl;
        std::cout<<"3. Money withdrawal(w)"<<std::endl;
        std::cout<<"4. exit(E)"<<std::endl;
        std::cout<<"Please enter your selection here: ";
        std::cin>>selection;

        if(selection == 'b' || selection == 'B'){

            std::cout<<"Your current balance: "<<balance<<std::endl;

        } else if(selection == 'd' || selection == 'D'){
            
                std::cout<<"Please enter an amount to deposit: ";
                std::cin>>amount;
                balance += amount;
                std::cout<< amount <<" added to current balance"<<std::endl;
          
            } else if(selection == 'w' || selection == 'W'){
                std::cout<<"Please enter an amount to withdraw: ";
                std::cin>>amount;
                /*checking: checking if user has enough balance for withdrawing*/
                if (balance >= amount){
                    balance -= amount;
                    std::cout<<amount<<" is withdrawed from the current balance"<<std::endl;
 
                } else{
                    std::cout<<"low balance - withdrawl not possible"<<std::endl;
                } 
            } else if(selection == 'e' || selection == 'E'){
                std::cout<<"Thank you for using ATM/BANKING SYSTEM - Please come again"<<std::endl;
            } else{
                std::cout<<"invalid selection - please try again"<<std::endl;
            }
  
    }while (selection != 'e' && selection !='E');
}

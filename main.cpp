#include <iostream> // for time()
#include <cstdlib> // for rand()
#include <string>
#include "sha256.h"

using namespace std;

class Transaction {
    private:
        /* data */
        Transaction *prev;
        int amount;
        string sender;
        string receiver;
        string nonce;
        string hash;

    public:
        void add(int amount, string sender, string receiver);
        void getBalance(string person);
        void printChain();
        Transaction();

};

//  Transaction: Transaction(/* args */)
// {
// }
Transaction::Transaction(void){
}

void Transaction::add(int amount, string sender, string receiver){


}

void Transaction::getBalance(string person){
    //search through tree and add all values with the reciver == name

}

void Transaction::printChain(){
    //
    while(0/*Not last node*/){
        cout << "Amount: " << endl;
        cout << "Sender: " << endl;
        cout << "Receiver: " << endl;
        cout << "Nonce: " << endl;
        cout << "Hash: " << endl;

        //go to next node
    }
}


int main() {
    //srand(time(NULL)); //generates a differnt number everytime its run
    //cout << char(rand() % 26 + 97) << endl;
    //cout << sha256("h") << endl;
    int choice;

    int amount;
    string sender;
    string reciver;

    string name;

    Transaction transaction;

    while(1){
        cout << "Welcome to the Transaction Chain..." << endl;
        cout << "1) Add a transaction to the chain" << endl;
        cout << "2) Find Balance of a Person" << endl;
        cout << "3) Print the Chain" << endl;
        cout << "4) Exit." << endl;
        cout << "What operation do you want to make? (1, 2, 3, 4)" << endl;

        cin >> choice;
        if (choice == 1){
            cout << "Interger amount of money: " << endl;
            cin >> amount;
        
            cout << "Name of Sender: " << endl;
            cin >> sender;

            cout << "Name of Reciver: " << endl;
            cin >> reciver;

            //create a transation node 
            transaction.add(amount, sender, reciver);
        }
        else if (choice == 2){
            cout << "Person's Name: " << endl;
            cin >> name;

            //get balance from transaction chain
            transaction.getBalance(name);
        }
        else if (choice == 3){
            //print cahin
            transaction.printChain();
        }
        else if (choice == 4){
            return 0;
        }
        else {
            cout << "Wrong Operation!" << endl;
        }
    }

    return 1;
}

/******************************************************************************
 CSCI 240         Program 10         Fall 2014
 
 Programmer:Michael Rizza
 
 Section:1
 
 Date Due:Dec 5
 
 Purpose:A piggy bank that can hold different bank accounts.
 ******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

//*************** Place your class description after this line ***************

class PiggyBank
{
public:
    PiggyBank();
    PiggyBank(int, int, int, int);
    
    void printPiggyBank();
    void printPiggyBankValue();
    
    void emptyTheBank();
    
    void addCoins(int, int, int, int);
    
    void addPennies(int);
    void addNickels(int);
    void addDimes(int);
    void addQuarters(int);
    
    bool isEqual(PiggyBank);
    bool isLessThan(PiggyBank);
    bool isGreaterThan(PiggyBank);
    
    PiggyBank sumPiggyBanks(PiggyBank);
    
    
    
private:
    float calcPiggyBankValue();
    
    int numOfPennies;
    int numOfNickels;
    int numOfDimes;
    int numOfQuarters;
    
    
};

//*************** Initialize the symbolic constants after this line **********

const float PENNY = .01;
const float NICKEL = .05;
const float DIME = .10;
const float QUARTER = .25;

//****************************************************************************

int main()
{
    //Test 1 -- default constructor
    
    cout << "***** Test 1: Default Constructor and printPiggyBank *****" << endl << endl
    << "Default constructor produces bank1: " << endl << endl;
    
    PiggyBank bank1;
    
    bank1.printPiggyBank();
    
    
    
    //Test 2 -- constructor with arguments
    
    cout << endl << endl << endl << "***** Test 2: Constructor with Arguments *****" << endl << endl
    << "Constructor with 6, 8, 10, 12 produces bank2: " << endl << endl;
    
    PiggyBank bank2( 6, 8, 10, 12 );
    
    bank2.printPiggyBank();
    
    cout << endl << endl << "Constructor with 4, 1, 0, 7 produces bank3:"
    << endl << endl;
    
    PiggyBank bank3  = PiggyBank( 4, 1, 0, 7 );
    
    bank3.printPiggyBank();
    
    cout << endl << endl << "Constructor with 23, -8, -2, 29 produces bank4:"
    << endl << endl;
    
    PiggyBank bank4  = PiggyBank( 23, -8, -2, 29 );
    
    bank4.printPiggyBank();
    
    
    //Test 3 -- adding coins
    
    cout << endl << endl << endl << "***** Test 3: addMethods and printPiggyBankValue *****" << endl << endl
    << "Adding 2 pennies, 47 nickels, 20 dimes, and 5 quarters to bank2 produces:"
    << endl << endl;
    
    bank2.addCoins( 2, 47, 20, 5 );
    
    bank2.printPiggyBank();
    
    cout << endl << "Total: ";
    
    bank2.printPiggyBankValue();
    
    
    cout << endl << endl << endl << "Adding 95 pennies to bank3:" << endl << endl;
    
    bank3.addPennies( 95 );
    
    bank3.printPiggyBank();
    
    cout << endl << "Total: ";
    
    bank3.printPiggyBankValue();
    
    
    cout << endl << endl << endl << "Adding -2 nickels to bank3:" << endl << endl;
    
    bank3.addNickels( -2 );
    
    bank3.printPiggyBank();
    
    cout << endl << "Total: ";
    
    bank3.printPiggyBankValue();
    
    
    cout << endl << endl << endl << "Adding 41 dimes to bank4:" << endl << endl;
    
    bank4.addDimes( 41 );
    
    bank4.printPiggyBank();
    
    cout << endl << "Total: ";
    
    bank4.printPiggyBankValue();
    
    
    cout << endl << endl << endl << "Adding 14 quarters to bank2: " << endl << endl;
    
    bank2.addQuarters( 14 );
    
    bank2.printPiggyBank();
    
    cout << endl << "Total: ";
    
    bank2.printPiggyBankValue();
    
    
    //Test 4 -- comparisons
    
    cout << endl << endl << endl << endl << "***** Test 4: Comparisons *****" << endl << endl
    << "Comparing bank5 and bank 6:" << endl << endl;
    
    PiggyBank bank5(5, 1, 8, 0);
    PiggyBank bank6(0, 1, 1, 3);
    
    cout << endl << "bank5 contains: ";
    
    bank5.printPiggyBankValue();
    
    cout << endl << endl << "bank6 contains: ";
    
    bank6.printPiggyBankValue();
    
    cout << endl << endl
    << "bank5 == bank6 is " << boolalpha << bank5.isEqual( bank6 ) << noboolalpha << endl
    << "bank5 < bank6 is " << boolalpha << bank5.isLessThan( bank6 ) << noboolalpha << endl
    << "bank5 > bank6 is " << boolalpha << bank5.isGreaterThan( bank6 ) << noboolalpha << endl;
    
    cout << endl << endl << endl << "After adding 1 penny to bank5:" << endl;
    
    bank5.addPennies( 1 );
    
    cout << endl << "bank5 contains: ";
    
    bank5.printPiggyBankValue();
    
    cout << endl << endl << "bank6 contains: ";
    
    bank6.printPiggyBankValue();
    
    cout << endl << endl
    << "bank5 == bank6 is " << boolalpha << bank5.isEqual( bank6 ) << noboolalpha << endl
    << "bank5 < bank6 is " << boolalpha << bank5.isLessThan( bank6 ) << noboolalpha << endl
    << "bank5 > bank6 is " << boolalpha << bank5.isGreaterThan( bank6 ) << noboolalpha << endl;
    
    
    //Test 5 -- addition
    
    cout << endl << endl << endl << "***** Test 5: Summing Two PiggyBanks *****" << endl << endl
    << "Add bank2 and bank4. The result is in bank7:" << endl << endl;
    
    PiggyBank bank7;
    
    bank7 = bank2.sumPiggyBanks( bank4 );
    
    cout << endl << "bank2 contains: " << endl << endl;
    
    bank2.printPiggyBank();
    
    cout << endl << "Total: ";
    
    bank2.printPiggyBankValue();
    
    cout << endl << endl << endl << "bank4 contains: " << endl << endl;
    
    bank4.printPiggyBank();
    
    cout << endl << "Total: ";
    
    bank4.printPiggyBankValue();
    
    cout << endl << endl << endl << "bank7 contains: " << endl << endl;
    
    bank7.printPiggyBank();
    
    cout << endl << endl << "Total: ";
    
    bank7.printPiggyBankValue();
    
    
    
    //Test 6 -- break the bank
    
    cout << endl << endl << endl << "***** Test 6: Emptying a PiggyBank *****" << endl << endl
    << "It's time to empty the bank." << endl << endl;
    
    cout << endl << "bank3 initially contains: " << endl << endl;
    
    bank3.printPiggyBank();
    
    cout << endl << "Total: ";
    
    bank3.printPiggyBankValue();
    
    bank3.emptyTheBank();
    
    cout << endl << endl << endl << "bank3 now contains: " << endl << endl;
    
    bank3.printPiggyBank();
    
    cout << endl << endl << "Total: ";
    
    bank3.printPiggyBankValue();
    
    cout << endl << endl;
    return 0;
}

//*************** Implement your class methods after this line ***************

/*********************************************************
 Constructor 1
 This constructor takes no arguments. Its purpose is to
 set the integer data members to 0.
 *********************************************************/

PiggyBank::PiggyBank()
{
    numOfPennies = 0;
    numOfNickels = 0;
    numOfDimes = 0;
    numOfQuarters = 0;

}

/*********************************************************
 Constructor 2
 This constructor takes 4 arguments: an integer that holds 
 the number of pennies, an integer that holds the number 
 of nickles, an integer that holds the number of dimes, 
 and an integer that holds the number of quarters, and 
 makes sure they are positive.
 *********************************************************/

PiggyBank::PiggyBank(int p, int n, int d, int q)
{
    if (p >= 0)
        
        numOfPennies = p;
    
    else
    {
        numOfPennies = 0;
    
        cout<<"Constructor error: the number of pennies cannot be negative"<<endl;
    }
    
    if (n >=0)
        
        numOfNickels = n;
    
    else
    {
        numOfNickels = 0;
    
        cout<<"Constructor error: the number of nickles cannot be negative"<<endl;
    }
    
    if (d >=0)
        
        numOfDimes = d;
    
    else
    {
        numOfDimes = 0;
        
        cout<<"Constructor error: the number of dimes cannot be negative"<<endl;
    }
    
    if (q >=0)
        
        numOfQuarters = q;
    
    else
    {
        numOfQuarters = 0;
        
        cout<<"Constructor error: the number of quarters cannot be negative"<<endl;
    }
}

/*********************************************************
 printPiggyBank
 This method displays the number of each coin in the bank.
 It takes no arguments and returns nothing.
 *********************************************************/
void PiggyBank::printPiggyBank()
{
    cout<<"Pennies:    "<<numOfPennies<<"    Nickles:    "<<numOfNickels<<"    Dimes:    "<<numOfDimes<<"    Quarters:    "<<numOfQuarters<<endl<<endl;
}

/*********************************************************
 printPiggyBankValue
 This method displays the total value in the bank. It 
 takes no arguments and returns nothing.
 *********************************************************/

void PiggyBank::printPiggyBankValue()
{
    cout<<"$"<<fixed<<setprecision(2)<<calcPiggyBankValue();

}

/*********************************************************
 emptyTheBank
 This method sets the bank to no longer contain money. It
 takes no arguments and returns nothing.
 *********************************************************/

void PiggyBank::emptyTheBank()
{
    numOfPennies = 0;
    numOfNickels = 0;
    numOfDimes = 0;
    numOfQuarters = 0;
    
}

/*********************************************************
 addCoins addPennies addNickles addDimes addQuarters
 These methods adds the number of coins to the piggy bank
 *********************************************************/

void PiggyBank::addCoins(int p, int n, int d, int q)
{
    addPennies(p);
    addNickels(n);
    addDimes(d);
    addQuarters(q);
    
        
        
}

        
void PiggyBank::addPennies(int p)
{
    if (p >=0)
        
        numOfPennies += p;
        
    else
        
        cout<<"addPennies error: the number of additional pennies cannot be negative"<<endl;
        
            
}
        
void PiggyBank::addNickels(int n)
{
    if (n >=0)
        
        numOfNickels += n;
    
    else
        
        cout<<"addNickels error: the number of additional nickels cannot be negative"<<endl;
    
}
        
void PiggyBank::addDimes(int d)
{
    if (d >=0)
        
        numOfDimes += d;
    
    else
        
        cout<<"addDimes error: the number of additional dimes cannot be negative"<<endl;
       
}
        
void PiggyBank::addQuarters(int q)
{
    if (q >=0)
        
        numOfQuarters += q;
    
    else
        
        cout<<"addQuarters error: the number of additional quarters cannot be negative"<<endl;
        
}
        
/*********************************************************
isEqual   isLessThan   isGreaterThan
These methods will determine if the current bank is equal
too lessthan or greaterthan the value of the passes in
bank. It takes one argument a piggyBank object and returns
 a boolean value.
*********************************************************/

bool PiggyBank::isEqual(PiggyBank bank2)
{
    bool status;
    
    if(calcPiggyBankValue() == bank2.calcPiggyBankValue())
        status = true;
    else
        status = false;
    
    return status;
}
        
bool PiggyBank::isLessThan(PiggyBank bank2)
{
    bool status;
    
    if(calcPiggyBankValue() < bank2.calcPiggyBankValue())
        status = true;
    else
        status = false;
    
    return status;
}
        
bool PiggyBank::isGreaterThan(PiggyBank bank2)
{
    bool status;
    
    if(calcPiggyBankValue() > bank2.calcPiggyBankValue())
        status = true;
    else
        status = false;
    
    return status;
}

/*********************************************************
sumPiggyBanks
This method combines the contents of two piggyBanks, and 
puts it in a new piggyBank. It takes one argument a 
piggyBank object and returns a piggyBank object.
*********************************************************/

PiggyBank PiggyBank::sumPiggyBanks(PiggyBank bank2 )
{
    PiggyBank sumPiggy;
    
    sumPiggy.numOfPennies = numOfPennies +  bank2.numOfPennies;
    
    sumPiggy.numOfNickels = numOfNickels + bank2.numOfNickels;
    
    sumPiggy.numOfDimes = numOfDimes + bank2.numOfDimes;
    
    sumPiggy.numOfQuarters = numOfQuarters + bank2.numOfQuarters;
    
    
    return sumPiggy;
}


/*********************************************************
calcPiggyBankValue
This method calculates and returns the value of a PiggyBank
It takes no arguments and returns a float value.
*********************************************************/
    
float PiggyBank::calcPiggyBankValue()
{
    float totalValue;
    
    totalValue = (numOfPennies * PENNY) + (numOfNickels * NICKEL) + (numOfDimes * DIME) + (numOfQuarters * QUARTER);
    
    return totalValue;
            
}

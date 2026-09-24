#include<iostream>
#include<string>


using namespace std;


class Bank{

int acc_no;
string name;

double acc_balance;

string acc_type;


static int acc_count;
public:

Bank()
{
acc_no=0;
name="Not available";
acc_balance=0.0;
acc_type="savings";

acc_count++;}

Bank(int no, string n, double bal, string t){
this->acc_no=no;
this->name=n;
this->acc_balance=bal;

this->acc_type=t;
acc_count++;
}




void getdata(){
cout<<"Enter the details"<<endl;

cout<<"1) Account No:"<<endl;
cin>>acc_no;

cout<<"2) account holder name:"<<endl;
cin.ignore();
getline(cin,name);

cout<<"3) Enter the account balance:"<<endl;
cin>>acc_balance;

cout<<"4) Enter the account type:"<<endl;

cin.ignore();
getline(cin,acc_type);

}



void display(){
cout<<endl;
cout<<"The Account details"<<endl;
cout<<"The account no:"<<acc_no<<endl;

cout<<"The account holder name:"<<name<<endl;

cout<<"Account balance:"<<acc_balance<<endl;

cout<<"Account type:"<<acc_type<<endl;


}

inline double calcinterest(double rate){
return (acc_balance*rate)/100;
}

inline double updatebal(double rate){
return acc_balance+calcinterest(rate);
}

static void displayaccount(){
cout<<"\nTotal numbers of Account created: "<<acc_count<<endl;
}

friend void comparebal(Bank, Bank);

~Bank(){cout<<"Accounts destroyed"<<endl;}

};


int Bank::acc_count=0;

void comparebal(Bank acc1 , Bank acc2){
cout<<"\n==============Balance comparison============"<<endl;

if(acc1.acc_balance>acc2.acc_balance){
cout<<"Account "<<acc1.acc_no<<" has higher balance"<<endl;
}
else if (acc1.acc_balance<acc2.acc_balance){
cout<<"Account "<<acc2.acc_no<<" has higher balance"<<endl;


}
else{

cout<<"Both account have same balance "<<endl;
}
}

int main(){
int n;

cout<<"Enter the number of account to be created"<<endl;

cin>>n;


Bank account[n];

//enter the details 

for(int i =0; i<n; i++){
cout<<"Enter the Account detail of: "<<i+1<<endl;

account[i].getdata();
}


//display the account details
cout<<"====================Account Details===================="<<endl;

for(int i=0; i<n;i++){



account[i].display();
}
//display total number of accounts

Bank::displayaccount();

//calc interest

double rate;

cout<<"enter the rate for account 1 (%)";
cin>>rate;

cout<<"\nInterest amount: Rs "<<account[0].calcinterest(rate);
cout<<"\nUpdated balance: Rs "<<account[0].updatebal(rate)<<endl;;

if(n>=2){
comparebal(account[0],account[1]);

}

else{

cout<<"atleast two accounts are required for comparison"<<endl;

}






return 0; }

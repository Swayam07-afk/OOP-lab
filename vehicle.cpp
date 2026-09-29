#include<iostream>

#include<string>
using namespace std;

//DO nothing class or abstract class 

class Vehicle
{     protected:
         string vno;
         string brand;
         double rent;
      public:
         Vehicle(string num, string b, double r){
                 vno=num;
                 brand=b;
                 rent=r;
                }
         //pure vurtual function
         virtual void display() = 0 ;
         virtual double calcrent(int days)=0;

         virtual ~Vehicle(){
                   cout<<"Vehicle object destroyed"<<endl;
                   }
};


class Car: public Vehicle
{
      int capacity;
      public:
         Car(string num, string b, double r,int seats): Vehicle(num,b,r){
             capacity=seats;
             }
         void display(){
              cout<<"\n---------Car Detaill-----------\n";
              cout<<"Vehicle Number: "<<vno<<endl;
              cout<<"Vehicle Brand Name: "<<brand<<endl;
              cout<<"Rent per day: "<<rent<<endl;
              cout<<"Seating capacity: "<<capacity<<endl;
              }
        double calcrent(int days){
               return days*rent;
               }
        ~ Car(){
              cout<<"Car Object destroyed"<<endl;
               }
};
 

class Bike: public Vehicle{
      string biketype;
      public:
         Bike(string num,string b, double r, string type): Vehicle(num,b,r){
              biketype=type;
             }
         void display(){
              cout<<"\n--------Bike Details-----------\n";
              cout<<"Vehicle Number: "<<vno<<endl;
              cout<<"Vehicle Brand name: "<<brand<<endl;
              cout<<"Rent per day: "<<rent<<endl;
              cout<<"Bike type: "<<biketype<<endl;
              }
         double calcrent(int days){
                return days*rent;
                }
         ~ Bike(){
                cout<<"Bike Object Destroyed"<<endl;
                 }
};


class Truck : public Vehicle{
      double loadcapacity;
      public:
         Truck(string num, string b, double r,double lc): Vehicle(num,b,r){
               loadcapacity=lc;
              }
         void display(){
              cout<<"\n--------Truck Details----------\n";
              cout<<"Vehicle Number: "<<vno<<endl;
              cout<<"Vehicle Brand name: "<<brand<<endl;
              cout<<"Rent per day: "<<rent<<endl;
              cout<<"Load capacity: "<<loadcapacity<<endl;
              }
         double calcrent(int days){
                return days*rent;
                }
         ~Truck(){
                cout<<"Truck object Destroyed"<<endl;
                 }

};





int main(){
    int days;
    cout<<"\n=============Vehicle rental system============\n";
    cout<<"enter the vehicle rental duration"<<endl;
    cin>>days;
    
    Vehicle *v1  = new Car("MH12BX0596","SWIFT",2000,5);
    Vehicle *v2  = new Bike("MH12BX8011","Royal enfeild",2500,"Cruiser");
    Vehicle *v3 = new Truck("MH12BX0007","AKASH LEYLAND",3000,10);
    

    v1->display();
    cout<<"Total Rent for "<<days<<" days is "<<v1->calcrent(days)<<endl;
    v2->display();
    cout<<"Total Rent for "<<days<<" days is "<<v2->calcrent(days)<<endl;
    v3->display();
    cout<<"Total rent for "<<days<<"<< days is "<<v3->calcrent(days)<<endl;
    delete v1;
    delete v2; 
    delete v3;    

   return 0;


}



                                                   
 

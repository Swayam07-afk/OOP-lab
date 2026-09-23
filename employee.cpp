#include<iostream>
#include<string>
using namespace std;

class Employee
{

    string  employename;
    int employeid;
    public:
       void emp_input(){
            
            cout<<"Enter the Employe Name:";
            cin.ignore();
            getline(cin,employename);
            cout<<"Enter the EmployeID:"<<endl;
            cin>>employeid;
       }
       void emp_output(){
            cout<<"Employee Name: "<<employename<<endl;
            cout<<"Employee ID: "<<employeid<<endl;
       }

};



class Personal: virtual public Employee
{
      
      int age;
      char gender[6];
      long int contact;
      public:
         void per_input(){ 
              cout<<"Enter the employee Age: "<<endl;
              cin>>age;
              cout<<"Enter the gender: "<<endl;
              cin>>gender;
              cout<<"Enter the contact details: "<<endl;
              cin>>contact;
         }
         void per_output(){
             cout<<"Employee Age: "<<age<<endl;
             cout<<"Employee gender: "<<gender<<endl;
             cout<<"Employee contact details: "<<contact<<endl;
         }     

};




class Academics : virtual public Employee 
{
      string university;
      string degree;
      string dept;
      public:
         void acd_input(){
              
              cout<<"Enter the University Name: "<<endl;
              cin.ignore();
              getline(cin,university);
              cout<<"Enter the degree: "<<endl;
              
              getline(cin,degree);
              cout<<"Enter the departement: "<<endl;
              getline(cin,dept);

         }
         void acd_output(){
              cout<<"The university Name: "<<university<<endl;
              cout<<"The Degree Name: "<<degree<<endl;
              cout<<"The department name: "<<dept<<endl;
         }

};




class Professional : virtual public Employee 
{
      string designation;
      float salary;
      string company;
      public:
         void pro_input(){
              
              cout<<"Enter the designation: "<<endl;
              cin.ignore();
              getline(cin,designation);
              cout<<"Enter the salary of employee: "<<endl;
              cin>>salary;
              cin.ignore();
              cout<<"Enter the company name: "<<endl;
              getline(cin,company);
         }
         void pro_output(){
              cout<<"Designation: "<<designation<<endl;
              cout<<"Salary: "<<salary<<endl;
              cout<<"Company: "<<company<<endl;
         }

};



 
class Biodata : public Professional , public Personal , public Academics{

      public:
         void getdata(){
              cout<<"=============Enter the Employee Details==========="<<endl;
              emp_input();
              per_input();
              acd_input();
              pro_input();
         } 
         void display(){
              cout<<"==============Employee Details============="<<endl;

              emp_output();
              per_output();
              acd_output();
              pro_output(); 
         }
              
};



int main(){
    Biodata emp;
    emp.getdata();
    emp.display();
    return 0;
}

        
     

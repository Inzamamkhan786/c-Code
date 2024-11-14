#include<iostream>
#include<conio.h>
using namespace std;

class employee{
    protected:
    char name[20];
    int id;
    float salary;

    public:

    void displayInfo(){
        cout<<"Enter the Name: ";
        cin>>name;
        cout<<"\nId: ";
        cin>>id;
        cout<<"\nSalary: ";
        cin>>salary;
        cout<<"\n";
        cout<<"Name: "<<name;
        cout<<"\nId: "<<id;
        cout<<"\nSalary: "<<salary;

    }

    int annualSalary(){
        int Annual_salary;
        Annual_salary = 12*salary;
        return Annual_salary;
    }
};


//derived class manager;

class manager:public employee{
    protected:

    char department[30];
    float bonus;

    public:
    void displayInfo(){
        cout<<"Enter the department of manager: ";
        cin>>department;
        cout<<"\n Enter the bonus: ";
        cin>>bonus;
       //parent function assessing ;
        employee::displayInfo();
        cout<<"\nDepartment : "<<department;
        cout<<"\nBonus: "<<bonus;
    }

    float totalCompensation(){
      float compensation = (12*salary) + bonus;
      return compensation;
    }

};




////derived class engineer;

class engineer:public employee{

    protected:
    char specialization[30];
    int projectCount;

    public:

     void displayInfo(){
        cout<<"Enter the specialization of engineering: ";
        cin>>specialization;
        cout<<"\n Enter the projectCount: ";
        cin>>projectCount;
       //parent function assessing ;
        employee::displayInfo();
        cout<<"\nspecialization : "<<specialization;
        cout<<"\nProject: "<<projectCount;
    }

    float projectBonus(){
     float bonus_engineer,projectBonus;
     cout<<"Enter the bonus : ";
     cin>>bonus_engineer;
     projectBonus = projectCount*bonus_engineer;
     return projectBonus;
    }
};



int main(){
    employee emp;
    manager m;
    engineer e;

    emp.displayInfo();
    cout<<"Annual salart of employee = "<<emp.annualSalary();
    cout<<"\n";
    m.displayInfo();
    cout<<"Total compensation = "<<m.totalCompensation();
    cout<<"\n";
    e.displayInfo();
    cout<<"Total Project Bonus = "<<e.projectBonus();


    
    return 0;
}

#include<iostream>
using namespace std;
class Employee{
    public :
        Employee(){

        }
        virtual double calculateSalary() = 0;
};
class FulltimeEmployee : public Employee{
    private :
        double monthlySalary;
    public :
        FulltimeEmployee(double salary) : monthlySalary(salary){}
        double calculateSalary() override{
            return monthlySalary;
        }
};
class ParttimeEmployee : public Employee{
    private :
        double hourlyRate;
        double hoursWorked;
        int daysWorked;
    public :
        ParttimeEmployee(double hr,double hw,int dw) : hourlyRate(hr),hoursWorked(hw),daysWorked(dw){}
        double calculateSalary() override{
            return hourlyRate * hoursWorked * daysWorked;
        }
};
class Intern : public Employee{
    public :
        Intern(){

        }
        double calculateSalary() override{
            return 0.0;
        }
};
void displaySalary(Employee *emp){
    cout << "The calculated salary is : " << emp->calculateSalary() << endl;
}
int main(){
    FulltimeEmployee fe(500000.0);
    ParttimeEmployee pe(30,8,20);
    Intern i;

    cout << "For Full time employee : " << endl;
    displaySalary(&fe);

    cout << "For Part time employee : " << endl;
    displaySalary(&pe);

    cout << "For Intern : " << endl;
    displaySalary(&i);
    
    return 0;
}
#include<iostream>
using namespace std;

int main()

// 4. Create a structure called employee that contains two members: an employee number
// (type int) and the employee’s compensation (in dollars; type float). Ask the user to fill
// in this data for three employees, store it in three variables of type struct employee, and
// then display the information for each employee


{
    struct employee
    {
        int empno;
        float salary;
    };

    employee emp1,emp2,emp3;

    cout<<"Employee 1 details\nEnter Employee id and Salary: ";
    cin>>emp1.empno>>emp1.salary;

    cout<<"Employee 2 details\nEnter Employee id and Salary: ";
    cin>>emp2.empno>>emp2.salary;

    cout<<"Employee 3 details\nEnter Employee id and Salary: ";
    cin>>emp3.empno>>emp3.salary;

    cout<<"Employee 1 id: "<<emp1.empno<<" and Salary: "<<emp1.salary<<endl;
    cout<<"Employee 2 id: "<<emp2.empno<<" and Salary: "<<emp2.salary<<endl;
    cout<<"Employee 3 id: "<<emp3.empno<<" and Salary: "<<emp3.salary<<endl;

}




  

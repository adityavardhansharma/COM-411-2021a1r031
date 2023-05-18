#include<iostream>
#include<string>
using namespace std;
const int MAX_EMPLOYEE = 100;

class employee{
public:
    int emp_id;
    string name;
    int basic_sal;
    int da;
    int it;
    int net_sallary;

    void update() {
        cout << "Enter Emp NAme ";
        cin >> name;
        cout << "Enter Basic Sallary: ";
        cin>>basic_sal;
        cout << "Enter Bonus: ";
        cin >> da;
        cout << "Enter Income Tax:";
        cin >> it;
        cin.ignore();
    }
    void display()
    {
        net_sallary = basic_sal+da-it;
        cout << "Imp Id: " << emp_id << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Sallary: " << basic_sal << endl;
        cout << "Bonus: " << da << endl;
        cout << "Income Tax:" << it << endl;
        cout <<"NET SALLARY: "<<net_sallary<<endl;
    }
};

int main() {
    employee employee[MAX_EMPLOYEE];
    int num_employee;
    int choice;
    do {
        cout << endl;
        cout << "1.Add Employee: " << endl;
        cout << "2.Update Employee Details: " << endl;
        cout << "3.Search Employee: " << endl;
        cout << "4.Display Employee: " << endl;
        cout << "5.Exit" << endl;
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                if (num_employee < MAX_EMPLOYEE) {
                    class employee e;
                    cout << endl << "Enter Emp Id: ";
                    cin >> e.emp_id;
                    cin.ignore();
                    e.update();
                    employee[num_employee] = e;
                    num_employee++;


                } else {
                    cout << "Maximum number of employee  reached." << endl;
                }
                break;
            case 2: {
                int emp_i;
                cout << "Enter Emp ID to update: ";
                cin >> emp_i;
                cin.ignore();
                bool found = false;
                for (int i = 0; i < num_employee; i++) {
                    if (employee[i].emp_id == emp_i) {
                        employee[i].update();
                        found = true;
                        break;

                    }
                    if (!found) {
                        cout << "Employee not found." << endl;
                    }
                    break;
                }
            }
            case 3: {
                int emp_d;
                cout << "Enter Emp Id To search: ";
                cin >> emp_d;
                cin.ignore();
                bool found = false;
                for (int i = 0; i < num_employee; i++) {
                    if (employee[i].emp_id == emp_d) {
                        employee[i].display();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Employee not found." << endl;
                }
                break;

            }
            case 4: {
                for (int i = 0; i < num_employee; i++) {
                    employee[i].display();
                    cout << endl;
                }
                break;
            }
            case 5: {
                cout << "Exiting..." << endl;
                break;
            }
            default: {
                cout << "Invalid choice." << endl;
                break;
            }

        }



    }while (choice != 5);
    return 0;
}
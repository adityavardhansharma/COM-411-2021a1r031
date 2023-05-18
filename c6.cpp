#include <iostream>
#include <vector>
using namespace std;
//student class is created
class Student {
private: // private data members are declared
    string name;
    string add;
    int zip,roll,n;
public:
    void addStudent(vector<Student>& students)
    {

        cout << "Enter the number of students to get added: ";
        cin >> n;

    for (int i = 0; i < n; i++)
        {
            cout <<"\n Enter student name: ";
            cin >>name;
            cout<<"\n Enter Address :";
            cin>>add;
            cout<<"\n Enter Roll No :";
            cin>>roll;
            cout<<"\n Enter zip :";
            cin>>zip;
            students.push_back(*this);
        }

    }
    void updateStudent(vector<Student>& students)  //member function for data updating using roll no
    {
        int updateRollNo;
        cout <<"Enter roll number of the student to be updated: ";
        cin >> updateRollNo;
        for (int i = 0; i < students.size(); i++) {
            if (students[i].roll == updateRollNo) {
                cout << "Enter updated student name: ";
                cin >> students[i].name;
                std::cout<<"\n Enter Address :";
                std::cin>>students[i].add;
                std::cout<<"\n Enter Roll No :";
                std::cin>>students[i].roll;
                std::cout<<"\n Enter zip :";
                std::cin>>students[i].zip;

            }
        }
    }
    void deleteStudent(vector<Student>& students) // member function which deletes the data of a specific student
    {
        int deleteRollNo;
        cout << "Enter roll number of the student to be deleted: ";
        cin >> deleteRollNo;
        for (int i = 0; i < students.size(); i++) {
            if (students[i].roll == deleteRollNo) {
                students.erase(students.begin() + i);
            }
        }
    }
    void displayStudents(vector<Student>& students) {

        for (int i = 0; i < students.size(); i++) {
            std::cout<<"\nStudent Name :"<<name;
            std::cout<<"\n Student Address :"<<add;
            std::cout<<"\n Student Roll No :"<<roll;
            std::cout<<"\n Student Zip Code :"<<zip<<"\n\n";
        }
    }
    void searchStudents(vector<Student>& students){
        int searchroll;
        cout<<"\nEnter Roll No To Search:";
        cin >> searchroll;
        for(int i=0;i<students.size();i++)
        {
            if(students[i].roll == searchroll)
            {
                std::cout<<"\nStudent Name :"<<name;
                std::cout<<"\n Student Address :"<<add;
                std::cout<<"\n Student Roll No :"<<roll;
                std::cout<<"\n Student Zip Code :"<<zip<<"\n\n";
            }
        }
    }
};
int main() {
    vector<Student> students;
    Student s;
    int choice;
    do {
        cout<<"\n\t               Model Institute of Engineering"<<endl;
        cout<<"\n_____________________________________________________________________________"<<endl;
        cout << "1. Add student" << endl;
        cout << "2. Update student" << endl;
        cout << "3. Delete student" << endl;
        cout << "4. Display all students" << endl;
        cout << "5.Search students"<< endl;
        cout << "6. Exit" << endl;
        cout << "\n Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                s.addStudent(students);
                break;
            case 2:
                s.updateStudent(students);
                break;
            case 3:
                s.deleteStudent(students);
                break;
            case 4:
                s.displayStudents(students);
                break;
            case 5:
                s.searchStudents(students);
                break;
            case 6:
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 5);
    return 0;
}


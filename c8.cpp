#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 100;

class Student {
public:
    int rollno;
    char name[50];
    char address[100];
    int marks;

    void update() {
        cout << "Enter name: ";
        cin.getline(name, 50);
        cout << "Enter address: ";
        cin.getline(address, 100);
        cout << "Enter marks: ";
        cin >> marks;
        cin.ignore();
    }

    void display() {
        cout << "Roll No.: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student students[MAX_STUDENTS];
    int num_students = 0;
    int choice;

    do {
        cout << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Update Student" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Display All Students" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                if (num_students < MAX_STUDENTS) {
                    Student s;
                    cout << "Enter roll no.: ";
                    cin >> s.rollno;
                    cin.ignore();
                    s.update();
                    students[num_students] = s;
                    num_students++;
                } else {
                    cout << "Maximum number of students reached." << endl;
                }
                break;
            }
            case 2: {
                int rollno;
                cout << "Enter roll no. to update: ";
                cin >> rollno;
                cin.ignore();
                bool found = false;
                for (int i = 0; i < num_students; i++) {
                    if (students[i].rollno == rollno) {
                        students[i].update();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Student not found." << endl;
                }
                break;
            }
            case 3: {
                int rollno;
                cout << "Enter roll no. to search: ";
                cin >> rollno;
                cin.ignore();
                bool found = false;
                for (int i = 0; i < num_students; i++) {
                    if (students[i].rollno == rollno) {
                        students[i].display();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Student not found." << endl;
                }
                break;
            }
            case 4: {
                for (int i = 0; i < num_students; i++) {
                    students[i].display();
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
    } while (choice != 5);

    return 0;
}

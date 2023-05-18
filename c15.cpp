#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Base class
class Student {
public:
    string name;
    int age;
    string gender;

    // Constructor
    Student(string n, int a, string g) {
        name = n;
        age = a;
        gender = g;
    }

    // Method to display student details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

// Derived class UG
class UG : public Student {
public:
    string course;
    int year;

    // Constructor
    UG(string n, int a, string g, string c, int y) : Student(std::move(n), a, g) {
        course = c;
        year = y;
    }

    // Method to display UG student details
    void displayDetails() {
        cout << "Undergraduate Student Details:" << endl;
        Student::displayDetails();
        cout << "Course: " << course << endl;
        cout << "Year: " << year << endl;
    }
};

// Derived class PG
class PG : public Student {
public:
    string course;
    int year;

    // Constructor
    PG(string n, int a, string g, string c, int y) : Student(n, a, g) {
        course = c;
        year = y;
    }

    // Method to display PG student details
    void displayDetails() {
        cout << "Postgraduate Student Details:" << endl;
        Student::displayDetails();
        cout << "Course: " << course << endl;
        cout << "Year: " << year << endl;
    }
};

// Derived class Diploma
class Diploma : public Student {
public:
    string course;
    int duration;

    // Constructor
    Diploma(string n, int a, string g, string c, int d) : Student(n, a, g) {
        course = c;
        duration = d;
    }

    // Method to display Diploma student details
    void displayDetails() {
        cout << "Diploma Student Details:" << endl;
        Student::displayDetails();
        cout << "Course: " << course << endl;
        cout << "Duration: " << duration << " months" << endl;
    }
};

int main() {
    vector<UG> ugStudents;
    vector<PG> pgStudents;
    vector<Diploma> diplomaStudents;

    int choice;

    do {
        cout << "\n1. Add student\n2. Update student\n3. Delete student\n4. Display all students\n5. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int type;
                cout << "\n1. UG\n2. PG\n3. Diploma\nEnter type of student: ";
                cin >> type;

                string name, gender, course;
                int age, year, duration;

                cout << "Enter name: ";
                cin >> name;

                cout << "Enter age: ";
                cin >> age;

                cout << "Enter gender: ";
                cin >> gender;

                cout << "Enter course: ";
                cin >> course;

                switch (type) {
                    case 1: {
                        cout << "Enter year: ";
                        cin >> year;
                        UG newStudent(name, age, gender, course, year);
                        ugStudents.push_back(newStudent);
                        cout << "UG student added successfully!" << endl;
                        break;
                    }
                    case 2: {
                        cout << "Enter year: ";
                        cin >> year;
                        PG newStudent(name, age, gender, course, year);
                        pgStudents.push_back(newStudent);
                        cout << "PG student added successfully!" << endl;
                        break;
                    }
                    case 3: {
                        cout << "Enter duration (in months): ";
                        cin >> duration;
                        Diploma newStudent(name, age, gender, course, duration);
                        diplomaStudents.push_back(newStudent);
                        cout << "Diploma student added successfully!" << endl;
                        break;
                    }
                    default:
                        cout << "Invalid choice!" << endl;
                        break;
                }

                break;
            }
        } }while (choice != 5);

        return 0;
    }

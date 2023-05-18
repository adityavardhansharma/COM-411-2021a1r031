#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 100;
const int MAX_COURSES = 10;

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
class Course {
public:
    int id;
    char name[50];
    int duration;
    int credits;

    void update() {
        cout << "Enter name: ";
        cin.getline(name, 50);
        cout << "Enter duration: ";
        cin >> duration;
        cout << "Enter credits: ";
        cin >> credits;
        cin.ignore();
    }

    void display() {
        cout << "Course ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Duration: " << duration << endl;
        cout << "Credits: " << credits << endl;
    }
};

int main() {
    Student students[MAX_STUDENTS];
    Course courses[MAX_COURSES];
    int num_students = 0;
    int num_courses = 0;
    int choice;

    do {
        cout << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Update Student" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Display All Students" << endl;
        cout << "5. Add Courses" << endl;
        cout << "6. Update Courses" << endl;
        cout << "7. Search Courses" << endl;
        cout << "8. Delete Courses" << endl;
        cout << "9. Display All Courses" << endl;
        cout << "10. Exit" << endl;

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
                if (num_courses < MAX_COURSES) {
                    Course c;
                    cout << "Enter course name: ";
                    cin.getline(c.name, 50);
                    cout << "Enter course id: ";
                    cin >> c.id;
                    cout << "Enter course duration (in weeks): ";
                    cin >> c.duration;
                    cout << "Enter course credit: ";
                    cin >> c.credits;
                    cin.ignore();
                    courses[num_courses] = c;
                    num_courses++;
                } else {
                    cout << "Maximum number of courses reached." << endl;
                }
                break;

            }
            case 6:{
                int course_id;
                cout << "Enter course id to update: ";
                cin >> course_id;
                cin.ignore();
                bool found = false;
                for (int i = 0; i < num_courses; i++) {
                    if (courses[i].id == course_id) {
                        Course c;
                        cout << "Enter new course name: ";
                        cin.getline(c.name, 50);
                        cout << "Enter new course id: ";
                        cin >> c.id;
                        cout << "Enter new course duration (in weeks): ";
                        cin >> c.duration;
                        cout << "Enter new course credit: ";
                        cin >> c.credits;
                        cin.ignore();
                        courses[i] = c;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Course not found." << endl;
                }
                break;
            }
            case 7: {
                int course_id;
                cout << "Enter course id to search: ";
                cin >> course_id;
                cin.ignore();
                bool found = false;
                for (int i = 0; i < num_courses; i++) {
                    if (courses[i].id == course_id) {
                        courses[i].display();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Course not found." << endl;
                }
                break;
            }
            case 8: {
                int course_id;
                cout << "Enter course id to delete: ";
                cin >> course_id;
                cin.ignore();
                bool found = false;
                for (int i = 0; i < num_courses; i++) {
                    if (courses[i].id == course_id) {
                        for (int j = i; j < num_courses - 1; j++) {
                            courses[j] = courses[j+1];
                        }
                        num_courses--;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Course not found." << endl;
                }
                break;
            }
            case 9: {
                for (int i = 0; i < num_courses; i++) {
                    cout << "Course name: " << courses[i].name << endl;
                    cout << "Course id: " << courses[i].id << endl;
                    cout << "Course duration: " << courses[i].duration << " weeks" << endl;
                    cout << "Course credit: " << courses[i].credits5 << endl;
                    cout << endl;
                }
                break;
            }
            case 10: {
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

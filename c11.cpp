#include <iostream>
#include <string>

using namespace std;

const int MAX_COURSES = 10;


class Course {
public:
    int id;
    string name;
    int duration;
    int credits;

    Course(int _id, string _name, int _duration, int _credits)
            : id(_id), name(_name), duration(_duration), credits(_credits) {}

    void update() {
        cout << "Enter name: ";
        getline(cin, name);
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

    Course courses[MAX_COURSES];
    int num_courses = 0;
    int choice;

    do {
        cout << endl;

        cout << "1. Add Courses" << endl;
        cout << "2. Update Courses" << endl;
        cout << "3. Search Courses" << endl;
        cout << "4. Delete Courses" << endl;
        cout << "5. Display All Courses" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                if (num_courses < MAX_COURSES) {
                    int id, duration, credits;
                    string name;
                    cout << "Enter course name: ";
                    getline(cin, name);
                    cout << "Enter course id: ";
                    cin >> id;
                    cout << "Enter course duration (in weeks): ";
                    cin >> duration;
                    cout << "Enter course credit: ";
                    cin >> credits;
                    cin.ignore();

                    Course c(id, name, duration, credits);
                    courses[num_courses] = c;
                    num_courses++;
                } else {
                    cout << "Maximum number of courses reached." << endl;
                }
                break;
            }
            case 2: {
                int course_id;
                cout << "Enter course id to update: ";
                cin >> course_id;
                cin.ignore();
                bool found = false;
                for (int i = 0; i < num_courses; i++) {
                    if (courses[i].id == course_id) {
                        string name;
                        int duration, credits;

                        cout << "Enter new course name: ";
                        getline(cin, name);
                        cout << "Enter new course id: ";
                        cin >> course_id;
                        cout << "Enter new course duration (in weeks): ";
                        cin >> duration;
                        cout << "Enter new course credit: ";
                        cin >> credits;
                        cin.ignore();

                        Course c(course_id, name, duration, credits);
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
            case 3: {
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
            case 4: {
                int course_id;
                cout << "Enter course id to delete: ";
                cin >> course_id;
                cin.ignore();
                bool found = false;
                for (int i = 0; i < num_courses; i++) {
                    if (courses[i].id == course_id) {
                        for (int j = i; j < num_courses - 1; j++) {
                            courses[j] = courses[j + 1];
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

            case 5: {
                for (int i = 0; i < num_courses; i++) {
                    Course c = courses[i];
                    c.display();
                    cout << endl;
                }
                break;
            }
            case 6: {
                cout << "Exiting..." << endl;
                break;
            }


            default: {
                cout << "Invalid choice." << endl;
                break;
            }
        }
    }
    while (choice != 5);

    return 0;
}
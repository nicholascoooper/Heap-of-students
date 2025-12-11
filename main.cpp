#include <iostream>
#include "date.h"
#include "address.h"
#include "student.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void testAddress();
void testDate();
//void testStudent();

void testAddress(){
  Address a;
  a.init("123 W Main St", "Muncie", "IN", "47303");
  a.printAddress();
} // end testAddress

void testDate(){
 Date d;
 d.init("01/27/1997");
 d.printDate();
} // end testDate

void loadStudents(vector<Student>& students) {
    ifstream fin("students.csv");
    string line;
    while (getline(fin, line)) {
        if (!line.empty()) {
            Student s(line);
            students.push_back(s);
        }
    }
    fin.close();
}

void showStudentNames(const vector<Student>& students) {
    for (const Student& s : students)
        cout << s.getLastName() << ", " << s.getFirstName() << endl;
}

void printStudents(const vector<Student>& students) {
    for (const Student& s : students) {
        s.printFullRecord();
        cout << "____________________________________\n";
    }
}

void findStudent(const vector<Student>& students) {
    cout << "last name of student: ";
    string key;
    getline(cin, key);

    bool found = false;

    for (const Student& s : students) {
        if (s.getLastName().find(key) != string::npos) {
            s.printFullRecord();
            cout << "____________________________________\n";
            found = true;
        }
    }

    if (!found)
        cout << "No matching students.";
}

string menu() {
    cout << "0) quit\n";
    cout << "1) print all student names\n";
    cout << "2) print all student data\n";
    cout << "3) find a student\n\n";

    string choice;
    getline(cin, choice);
    return choice;
}

int main() {
    vector<Student> students;
    loadStudents(students);

    string choice = "";
    while (choice != "0") {
        choice = menu();

        if (choice == "1")
            showStudentNames(students);
        else if (choice == "2")
            printStudents(students);
        else if (choice == "3")
            findStudent(students);
    }

    return 0;
}



//void testStudent(){
  //std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
  //Student* student = new Student();
  //student->init(studentString);
  //student->printStudent();
  //std::cout << std::endl;
  //std::cout << student->getLastFirst();
  //delete student;
//} // end testStudent

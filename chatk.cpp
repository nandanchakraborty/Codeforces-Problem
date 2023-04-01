
#include <iostream>
#include <vector>

using namespace std;

class Student {
public:
    string name;
    int id;
    double cgpa;

    Student(string n, int i, double c) {
        name = n;
        id = i;
        cgpa = c;
    }
};

int main() {
    vector<Student> students;

    // Create two objects of the Student class
    Student student1("John", 1234, 3.5);
    Student student2("Jane", 5678, 3.8);

    // Add the objects to the vector
    students.push_back(student1);
    students.push_back(student2);

    // Calculate the average CGPA
    double totalCGPA = 0.0;
    for (int i = 0; i < students.size(); i++) {
        totalCGPA += students[i].cgpa;
    }

    double averageCGPA = totalCGPA / students.size();
    cout << "The average CGPA of all students is " << averageCGPA << endl;

    return 0;
}

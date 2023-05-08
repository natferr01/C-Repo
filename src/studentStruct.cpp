//*************************************************
//          Natalie Ferraro
//          studentStruct
//          05-07-2023 
//  studentStruct is an example struct
//  data structure with student attributes.
//*************************************************

#include <iostream>
using namespace std;

//struct describing the attributes of a student
struct Student{
    int age;
    string firstName;
    string lastName;
    double gpa;
};

int main() {

    Student st;

    cout << "Enter the student's age" << endl;
    cin >> st.age;

    cout << "Enter the students first name" << endl;
    cin >> st.firstName;

    cout << "Enter the student's last name" << endl;
    cin >> st.lastName;
    
    cout << "Enter the student's gpa" << endl;
    cin >> st.gpa;

    cout << "\n" << st.age << "\n" << st.firstName << "\n" << st.lastName << "\n" << st.gpa;
    
    return 0;
}
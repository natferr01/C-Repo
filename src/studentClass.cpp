//*************************************************
//          Natalie Ferraro
//          studentClass
//          05-08-2023 
//  studentclass is an example class with set and
//  get methods pertaining to student attributes.
//*************************************************

#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private:
        int age;
        string firstName;
        string lastName;
        double gpa;
    public:
        void set_age(int a){
            age = a;
        }
        void set_first_name(string fname){
            firstName = fname;
        }
        void set_last_name(string lname){
            lastName = lname;
        }
        void set_gpa(double g){
            gpa = g;
        }
        string to_string(){
            stringstream ss;
            ss << age << "," << firstName << "," << lastName << "," << gpa;
            string str;
            ss >> str;
            return str;
        }
        int get_age(){
            return age;
        }
        string get_first_name(){
            return firstName;
        }
        string get_last_name(){
            return lastName;
        }
        double get_gpa(){
            return gpa;
        }
};

int main() {

    int a;
    double g;
    string fName, lName;
    
    cout << "Enter the age, first name, last name, and gpa of the student" << endl;
    cin >> a >> fName >> lName >> g;
    
    Student st;
    st.set_age(a);
    st.set_gpa(g);
    st.set_first_name(fName);
    st.set_last_name(lName);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_gpa() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
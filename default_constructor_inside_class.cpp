/*Divneev Singh
24070123043
ENTC A2*/

#include <iostream>
using namespace std;

class Student {
    int rollno;
    char name[50];
    double fee;

    public:
    Student(){
        cout<<"Enter the roll number: ";
        cin>>rollno;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the fee: ";
        cin>>fee;
    }
    void display() {
    cout << "Roll Number: " << rollno << endl;
    cout << "Name: " << name << endl;
    cout << "Fee: " << fee << endl;
}
};

int main() {
    Student s1; 
    s1.display();
    return 0;
}

/*Output
Enter the roll number: 043
Enter the name: Divneev
Enter the fee: 300000
Roll Number: 043
Name: Divneev
Fee: 300000
*/

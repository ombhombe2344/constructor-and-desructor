//Name:Om Bhome
//PRN:23070123039
//Aim:Implemention of Constructors and Destructors to Define Constructor Outside Class

#include <iostream>
using namespace std;

class Student {
    int rno;
    char name[50];
    double fee;
public:
    Student();
    void display();
};

Student::Student() {
    cout << "Enter the Roll number: ";
    cin >> rno;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the fee: ";
    cin >> fee;
}

void Student::display() 
{
    cout << endl << rno << endl << name << endl << fee << endl;
}

int main() {
    Student s;
    s.display();
    return 0;
}


/*Output:
Enter the Roll number: 39
Enter the name: om
Enter the fee: 156000

39
om 
156000*/

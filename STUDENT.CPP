#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int USN;
    float marks;
};

int main() 
{
    student s;
    cout << "Enter information," << endl;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.USN;
    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s.name << endl;
    cout << "USN: " << s.USN << endl;
    cout << "Marks: " << s.marks << endl;
    return 0;
}

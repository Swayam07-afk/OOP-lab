#include<iostream>
#include<string>

using namespace std;

class Library {
private:
    string studentName;
    int year;
    int rollNo;
    string bookName;
    int bookNo;
    int borrowStatus; // 1 for borrow, 0 for return

public:
    void getStudentData() {
        cout << "=== Library Management System ===" << endl;
        cout << "Enter the student details:" << endl;

        cout << "Enter the student name: ";
        getline(cin, studentName);

        cout << "Enter the year: ";
        cin >> year;

        cout << "Enter the roll number: ";
        cin >> rollNo;
        
        // Clear the input buffer thoroughly after reading numeric input
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    void getBookData() {
        cout << "\nEnter the book details:" << endl;

        cout << "Enter the book name: ";
        getline(cin, bookName);

        cout << "Enter the book number: ";
        cin >> bookNo;
    }

    void getStatus() {
        cout << "\n--- Transaction Status ---" << endl;
        cout << "Enter 1 if borrowing, or 0 if returning: ";
        cin >> borrowStatus;
    }

    void displayDetails() const {
        cout << "\n=================================" << endl;
        cout << "         TRANSACTION SUMMARY     " << endl;
        cout << "=================================" << endl;
        cout << "Student Name  : " << studentName << endl;
        cout << "Year          : " << year << endl;
        cout << "Roll Number   : " << rollNo << endl;
        cout << "Book Name     : " << bookName << endl;
        cout << "Book Number   : " << bookNo << endl;
        
        if (borrowStatus == 1) {
            cout << "Status        : Student has **borrowed** the book." << endl;
        } else {
            cout << "Status        : Student has **returned** the book." << endl;
        }
        cout << "=================================" << endl;
    }
};

int main() {
    Library transaction1;

    transaction1.getStudentData();
    transaction1.getBookData();
    transaction1.getStatus();
    transaction1.displayDetails();

    return 0;
}

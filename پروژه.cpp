#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

struct Student {
    int studentID;
    string studentName;
    float grades[5];
    float average;
};

int main() {
    int n;
    cout<<"number of students: ";
    cin >> n;
    if(n<=0) {
        cout<<"lotfan dobare talash konid";
        exit(0);
    }
    Student students[100];

    for (int i = 0; i < n; i++) {
      cout<<"student number "<< i+1 <<": "<<"\n";
        
        cout<<"students id: ";
        cin >> students[i].studentID;
        
        cout<<"students fullname: ";
        cin.ignore(); 
        getline(cin, students[i].studentName);  
        
        cout << "enter 5 grades: " ;
        float total = 0;
        for (int j = 0; j < 5; j++) {
            cin >> students[i].grades[j];
            total += students[i].grades[j];
        }
        
        students[i].average = total / 5;
    }

    cout <<"result: ";
    for (int i = 0; i < n; i++) {
        cout <<  "student " << students[i].studentName << " with sutdent id of: " << students[i].studentID << " average: " <<fixed<<setprecision(2)<< students[i].average << "\n";
    }

    return 0;
}

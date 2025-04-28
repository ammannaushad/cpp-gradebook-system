#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>


using namespace std;


int main() {
const int STUDENTS= 50;     //number of students
string names[STUDENTS];
int grades[STUDENTS];
int total= 0;
double average;
int highest,lowest,sum;


cout<< "Enter the number of students "<<endl;   //task 1: entering student's name
cin>> total;
cin.ignore(); 


for (int i = 0; i < total; i++) {
cout<< "Enter student name";
getline(cin, names[i]);

cout<< "Enter grade" <<names[i]<<" : ";     //task 2: entering grades
cin>> grades[i];
cin.ignore(); 
}


for (int i = 0; i < total - 1; i++) {
for (int j = 0; j < total - i - 1; j++) {
    if (grades[j] > grades[j + 1]) {
    swap(grades[j], grades[j + 1]);
    swap(names[j], names[j + 1]);
    }
}
}


cout<< "Sorted Grades ";                     //task 3: sorting the grades
for (int i = 0; i < total; i++) {
    cout<<names[i] << ": " <<grades[i]<<endl;
}

highest= grades[0];
lowest= grades[0];
sum= grades[0];


for (int i = 1; i < total; i++) {
    sum += grades[i];
    if (grades[i] > highest) highest = grades[i];
    if (grades[i] < lowest) lowest = grades[i];
}
average= static_cast<double>(sum)/total;


cout<< "Class Statistics" ;
cout<<fixed<<setprecision(2);
cout<< "Average Grade" <<average<<endl;
cout<< "Highest Grade" <<highest<<endl;
cout<< "Lowest Grade" <<lowest<<endl;


string searchName;              //task 4: searching for students
cout<< "Enter student name to search";
getline(cin, searchName);

int found= 0;

for (int i = 0; i < total; i++) {
    if (names[i] == searchName) {
    cout<<searchName<< "grade" <<grades[i]<<endl;
    found= 1;
    break; 
    }
}
if (found == 0) {
cout<< searchName<< "Error"<<endl;
}

return 0;
}


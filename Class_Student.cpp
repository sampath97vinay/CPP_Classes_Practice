#include<iostream>
#include<string>

using namespace std;

class Student{

private:
    string name;
    int m1, m2;
    

public:
    Student(string name, int x, int y);
    float mean_of_marks();
    void disp();
  
};

Student::Student(string name, int x, int y)
: name{name}, m1{x}, m2{y}
{
}

float Student::mean_of_marks(){
    
    return (m1+m2)/2;
}

void Student::disp(){
    
    cout<<"Student name: "<<name<<endl;
    cout<<"Total marks: "<<m1+m2<<endl;
}

int main(){
    
    string student_name;
    int m1, m2;
    cout<<"Enter student name: "<<endl;
    cin>>student_name;
    cout<<"Enter marks: "<<endl;
    cin>>m1>>m2;
    Student stud(student_name,m1,m2);
    float stud_mean = stud.mean_of_marks();
    cout<<"Mean: "<<stud_mean<<endl;
    stud.disp();
    return 0;
}

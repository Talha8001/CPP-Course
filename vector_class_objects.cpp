#include <iostream>
using namespace std;
#include <vector>
class Student {
private:
  string name;
  string id;
  vector<int> grades;
public:
  Student(string n, string i) {
    name = n;
    id = i;
  }
  Student() {
    name = "";
    id = "";
  }
  string getName() { return name; }
  string getId() { return id; }
  void addGrade(int grade) {//77
    grades.push_back(grade);
  }
  void showGrades() {
  for (int i = 0; i<grades.size();i++) {
    cout << grades[i] << " ";
  }
}
};

int main ()
{
  Student stu1("Awais Ahmed", "1234");
  stu1.addGrade(77);
  stu1.addGrade(81);
  stu1.addGrade(88);
  Student stu2("Ahmed Awais", "2345");
  stu2.addGrade(91);
  stu2.addGrade(81);
  stu2.addGrade(66);
  Student stu3("Memon Awais", "4321");
  stu3.addGrade(81);
  stu3.addGrade(82);
  stu3.addGrade(83);
 
  vector<Student> students;
  students.push_back(stu1);//vector to vector mapping
  students.push_back(stu2);
  students.push_back(stu3);
  for (int i = 0; i<students.size();i++) {
    //cout << students[i].getName() << students[i].getId() << endl;
    students[i].showGrades();
    cout << endl;
  }
  return 0;
}

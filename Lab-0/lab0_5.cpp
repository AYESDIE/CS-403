/**
 * Write a class to hold records of Students and show records of 5 students
 * using that class
 */
#include <iostream>

using namespace std;

class stud{
private:
  string name;
  float marks;
public:
  stud() {}

  void setName(const string &name) {
    stud::name = name;
  }

  void setMarks(float marks) {
    stud::marks = marks;
  }

  ~stud() {}

  friend ostream &operator<<(ostream &os, const stud &student1) {
    os << " >> name: " << student1.name << " \n    marks: " << student1.marks;
    return os;
  }
};

int main(){
  stud p[5];
  string nm;
  float mr;
  int it=2;
  for (int i = 0; i < it; ++i) {
    cout<<"\n >> Enter name: ";
    cin>>nm;
    p[i].setName(nm);
    cout<<"\n >> Enter marks: ";
    cin>>mr;
    p[i].setMarks(mr);
  }
  cout<<"\n\n";
  for (int j = 0; j < it; ++j) {
    cout<< p[j] << "\n";
  }
  return 0;
}
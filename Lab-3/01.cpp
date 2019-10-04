/**
 *  Write a class to hold a list of numbers and then evaluate the total
 *  number of positives and negatives from it.
 */

#include <ostream>
#include <vector>
#include <iostream>

using namespace std;

class count{
private:
  vector<int> count_vector;
  int count_positive;
  int count_negative;


public:
  count() {
    count_negative = 0;
    count_positive = 0;
  }

  count(const vector<int> &count_vector) : count_vector(count_vector) {
    count_negative = 0;
    count_positive = 0;
  }

  void evaluate(){
    for (int i = 0; i < count_vector.size(); ++i) {
      if(count_vector[i]<0){
        count_negative++;
      }
      else{
        count_positive++;
      }
    }
  }

  friend ostream &operator<<(ostream &os, const count &count1) {
    os << "positive: " << count1.count_positive << " negative: " << count1.count_negative;
    return os;
  }
};

int main(){
  vector<int> x;
  int n;
  cout<<"Enter number of elements: ";
  cin>>n;
  cout<<"Enter elements >>\n";
  for (int i = 0; i < n; ++i) {
    int temp;
    cin>>temp;
    x.push_back(temp);
  }

  count a(x);
  a.evaluate();
  cout << a;
  return 0;
}
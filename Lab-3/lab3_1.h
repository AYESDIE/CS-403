//
// Created by ayush on 17-09-2018.
//

#ifndef LAB3_LAB3_1_H
#define LAB3_LAB3_1_H

#include <ostream>
#include <vector>

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

#endif //LAB3_LAB3_1_H

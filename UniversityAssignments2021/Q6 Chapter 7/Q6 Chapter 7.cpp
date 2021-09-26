#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    int temp;
    vector<int> sort;

    cout << "Selection Sort" << endl;


    sort.push_back(8);
    sort.push_back(6);
    sort.push_back(10);
    sort.push_back(2);
    sort.push_back(16);
    sort.push_back(4);
    sort.push_back(18); 
    sort.push_back(14);
    sort.push_back(12);
    sort.push_back(10);

    cout << "normal vector" << endl;
    print(sort);

    int vecsize = sort.size();
    for (int j = 0; j < vecsize - 1; ++j) {

        int min = j;
        for (int i = j + 1; i < vecsize; ++i) {
            if (sort.at(min) > sort.at(i)) {
                min = i;
            }

        }
        if (min != j)
            swap(sort.at(j), sort.at(min));
    }
    
    
    cout << "Sorted Vector" << endl;
    print(sort);
    return 0;
}
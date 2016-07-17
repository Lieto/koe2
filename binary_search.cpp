//
// Created by Vesa on 15.7.2016.
//
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

struct myclass {
    bool operator() (int i, int j) { return (i < j); }
} myobject;

vector<int> read_ints(char* fileName) {

    string line;
    ifstream file ("test.txt");
    vector<int> list;

    if (file.is_open()) {
        while ( getline(file, line)) {
            list.push_back(stoi(line));
        }
        file.close();
    }
    else cout << "Unabel to open file" << endl;
    return list;
}

void print_vector(vector<int>& list) {

    for (int i = 0; i < list.size(); i++) {
        cout << list[i] << endl;
    }
}


int Rank(int key, const vector<int>& list) {

    int lo = 0;
    int hi = list.size() - 1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (key < list[mid]) hi = mid - 1;
        else if (key > list[mid]) lo = mid + 1;
        else return mid;
    }

    return -1;
}

double max(const vector<double>& v) {
    double max = v[0];

    for (int i = 0; i < v.size(); i++) {
        if (v[i] > max) max = v[i];
    }

    return max;
}

double average(const vector<double>& v) {

    int N = v.size();
    double sum = 0.0;

    for (int i = 0; i < N; i++) {
        sum += v[i];
    }

    return sum / N;
}

double reverse( vector<double>& v) {

    int N  = v.size();

    for (int i = 0; i < N/2; i++) {
        double temp = v[i];
        v[i] = v[N - 1 - i];
        v[N - i - 1] = temp;
    }


}

int main(int argc, char** argv) {

    vector<int> white_list = read_ints(argv[1]);

    print_vector(white_list);

    sort(white_list.begin(), white_list.end(), myobject);

    print_vector(white_list);

    int key;
    bool reading = true;

    while (reading) {

        cin >> key;

        if (Rank(key, white_list) == -1)
            cout << key << endl;
    }

}

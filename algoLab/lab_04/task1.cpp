#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
    ifstream input("./Marks.txt");
    if (!input.is_open()) {
        cerr << "Error: Unable to open file." << endl;
        return 1;
    }
    vector<pair<string,int>> stud;
    int serial;
    string roll;
    int marks;
    while (input >> serial >> roll >> marks) {
        stud.push_back(make_pair(roll,marks));
    }
    int n = stud.size();
    int MAX_MARKS = 100;
    vector<int> map(MAX_MARKS + 1, 0);
    for(auto s : stud){
        map[s.second]++;
    }
    int medianPos=(n+1)/2,sum = 0, median = 0;

    for (int i = 0; i <= MAX_MARKS; i++) {
        sum += map[i];
        if (sum >= medianPos) {
            median = i;
            break;
        }
    }
    int diffmx = 0;
    for (auto s : stud) {
        diffmx = max(diffmx, abs(s.second - median));
    }

    vector<vector<pair<string,int>>> buckets(diffmx + 1);
    for (auto s : stud) {
        int diff = abs(s.second - median);
        buckets[diff].push_back(s);
    }
    for (int d = 0; d <= diffmx; d++) {
        for (auto &s : buckets[d]) {
            cout << s.first << " " << s.second << " Deviation - "<< abs(s.second-median) << "\n";
        }
    }
    return 0;
}
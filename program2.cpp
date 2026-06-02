#include <iostream>
using namespace std;

struct Animal {
    int age;
    double weight;
};

struct Result {
    double monthlyReduction;
};

Result calculateReduction(Animal animals[], int n) {
    Result r;
    r.monthlyReduction = 0;

    for (int i = 0; i < n; i++) {
        if (animals[i].age >= 6 && animals[i].age <= 8 &&
            animals[i].weight > 7) {
            r.monthlyReduction += 0.125 * 30;
        }
    }

    return r;
}

int main() {
    int n;
    cin >> n;

    Animal animals[100];

    for (int i = 0; i < n; i++) {
        cin >> animals[i].age >> animals[i].weight;
    }

    Result res = calculateReduction(animals, n);

    cout << res.monthlyReduction << " kg" << endl;

    return 0;
}














/*
5
5 6.5
6 7.2
7 8
8 6.9
8 7.5
*/
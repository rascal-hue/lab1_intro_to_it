/*
5
3 -2 1 -5 4
*/
#include <iostream>
using namespace std;

template <typename T>
class SafeArray {
private:
    T* data;
    int size;
public:
    SafeArray(int n) : size(n) { data = new T[n]; }
    ~SafeArray() { delete[] data; }
    T& operator[](int i) {
        if (i < 0 || i >= size) { cout << "Oshibka!\n"; exit(1); }
        return data[i];
    }
};

int main() {
    int n;
    cin >> n;
    SafeArray<int> arr(n);
    
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
		 cout << "\nPolozhitelnoe ranshe\n";
		  return 0; 
		  }
        if (arr[i] < 0) { 
		cout << "\nOtricatelnoe ranshe\n"; 
		return 0; 
		}
    }
    
    cout << "\nNet polozhitelnyh i otricatelnyh chisel\n";
    return 0;
}
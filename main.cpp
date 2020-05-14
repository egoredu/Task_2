#include <iostream>

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // последовательно вводятся элементы массива, 0 – последний элементы
    // считается количество смен знака
    vector<int> array;
    int input;

    cin >> input;
    // stop when input equals zero
    while (input != 0){
        array.push_back(input);
        cin >> input;
    }

    int cur, next;
    int cnt = 0; // counter
    vector<int>::iterator iter = array.begin();
    while (iter != array.end()) {
        // get the current element
        cur = *iter;
        ++iter;
        next = *iter;
        if (cur * next < 0)
            cnt += 1;
    }
    cout << cnt;
    return 0;
}

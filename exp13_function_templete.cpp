#include<iostream>
#include<vector>
using namespace std;

template<typename T>
int linearsearch(vector<T>& arr, T ele, int size) {
    int i = 0;
    while (i < size) {
        if (arr[i] == ele) {
            return i;
        }
        else {
            i++;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter size of array:";
    cin >> n;

    vector<char> arr(n);

    cout << "Enter vector element:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    char ele;
    cout << "Enter character that you want to search:";
    cin >> ele;

    int result = linearsearch(arr, ele, n);

    if (result == -1) {
        cout << "Element is not found";
    }
    else {
        cout << "Element is found at index " << result;
    }

    return 0;
}

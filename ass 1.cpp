#include <bits/stdc++.h>
using namespace std;



int Max_Number(int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (max < *(arr + i))
            max = *(arr + i);
    }
    return max;
}

int main() {
    /*------------------------------------------------------------*/
    /*------------------------------------------------------------*/
    int n;
    cout << "Enter number of elements: \n";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter "<<n<<" Numbers: \n";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    cout<< "The Max number is : " << Max_Number(arr, n);
    delete[] arr;
    return 0;
}

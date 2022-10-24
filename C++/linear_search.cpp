#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key) {
    cout<<"Binary search hoti hai???"<<endl
      ;
    
    
    
    
    
    for (int i = 0; i<n; i++) {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main() {
    int M;
    int k = M;
    cin >> M;
    int arr[M];
    for (int i = 0; i<M; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << linear_search(arr,n,key);
    return 0;
}

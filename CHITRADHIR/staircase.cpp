#include <iostream>

using namespace std;

int main() {
    int n,   output;
    cin >> n;
    output=staircase(n);
    cout<< output <<endl;
}
int staircase(int n) 
{ 
    if (n == 1 || n == 0)  
        return 1; 
    else if (n == 2)  
        return 2; 
      
    else
        return staircase(n - 3) +  
            staircase(n - 2) + 
            staircase(n - 1);  
} 

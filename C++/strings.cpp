#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {int length(Node *head) {
    // Write your code here

    if (head == NULL)
        return 0;
    return 1 + length(head->next);
  
}

    //---------------I/O---------------
    // string str1;
    // cin >> str1;
    // getline(cin, str1);
    // cout << str1;
    //--------------------------------

    //---------------concatenation--------------
    // string str1 = "abc";
    // string str2 = "abc";
    // string str = str1 + str2;
    // cout << str << "\n";
    // cout << str1 + str1 << "\n";
    // str1.append(str2);
    // cout << str1 << "\n";
    //-------------------------------------------

    //--------------compare--------------------
    // string s1 = "abc";
    // string s2 = "xyz";
    // cout << s2.compare(s1);
    // cout << (s2 > s1);
    
    //-----------erase()-------------------
    // str1 = "Dannyasdfghjkl Puchhi";
    // cout << str1 << endl;
    // str1.erase(5,9);
    // cout << str1;

    //------------empty()----------
    // string s1 = "";
    // cout << (s1.empty());

    //---------------stoi()---------------
    // string mystring = "236748";
    // int x = stoi(mystring);
    // cout << x/32;
    // -------------------------------------

    //---------------substr()----------------
    // string str = "skjDannysdf";
    // string s = str.substr(3,5);
    // cout << s << "\n";
    // -----------------------------------------
    // -------------to_string()----------
    // int x = 874748;
    // string s = to_string(x);
    // cout << s + "3245";
    // -----------------------------------

    // ------------------sort()---------------------
    // string string1 = "dsbfhkjudhyfgbkasyhvhbaldrgybsldkfhvbaldghliuyrhspiuygfdkshjgoiuh";
    // sort(string1.begin(), string1.end());//To use sort(), import <algorithm>
    // cout << string1 << "\n";
    // --------------------------------------------

    return 0;
}

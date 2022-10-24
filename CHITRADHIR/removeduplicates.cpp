#include <iostream>
using namespace std;
void removeConsecutiveDuplicates(char *input)
{
    if(input[0]=='\0')
    {
        return ;
    }
    if(input[0]!=input[1])
    {
        return removeConsecutiveDuplicates(input+1);
    }
    if(input[0]==input[1])
    {
        
        int i=0;
        for(;input[i]!='\0';i++)
        {
            
            input[i]=input[i+1];
        }
        return removeConsecutiveDuplicates(input);
    }

}

int main() {

    cout<<"length matters"<<endl;
    
    
    cout<<"That's what she said"<<endl;

    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}

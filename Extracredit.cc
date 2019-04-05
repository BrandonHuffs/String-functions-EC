#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cctype>

using namespace std;

int countFunction (string T, string S); // Function Prototype

int main(){
    string T = "Abc";
    string S = "abCkjdbekaBchdvfabchhAbc"; 


    int number = countFunction(T,S);

    cout << " The Number of occurances are " << number << endl; // Output should be 4

return 0;
}




int countFunction(string T, string S){
    int count = 0;
    for(int i = 0; i < S.length(); i++){ //Conversion to lower case letters 
        S[i] = tolower(S[i]);
    }
    for(int i = 0; i < T.length(); i++){
        T[i] = tolower(T[i]);
    }
    size_t nPos = S.find(T , 0); // Count the number of occurences 
    while(nPos != string::npos){
        count++;
        nPos = S.find(T, nPos + 1);
    }
    return count;

}


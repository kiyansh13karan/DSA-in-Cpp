// length of a character arrray 

#include <iostream>
using namespace std ;

int getlength(char name[]) {
    int count = 0 ; 
    for(int i=0 ; name[i] != '\0' ; i++) {
        count++ ; 
    }
    return count ; 
}

int main() {
    char name[20] ;
    cout<<"Enter your name : " ; 
    cin.getline(name , 20) ; 

    int len = getlength(name) ; 
    cout<<"Length of your name is : "<<len<<endl ;

    return 0 ; 
}
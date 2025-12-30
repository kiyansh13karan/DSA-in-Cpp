#include <iostream>
#include <cstring>
using namespace std ;

int main() {
    // char name1[20] ; 
    // cout<<"Enter your name1 : " ; 
    // cin >> name1 ; 
    // cout<<"Hello "<<name1<<endl ; 

    // // length of your first name  
    // cout<<"Lenght  of your name1 is : "<<strlen(name1)<<endl ; 

    char name2[20] ; 
    cout<<"Enter your name2 : " ; 
    cin.getline(name2 , 20) ; 
    cout<<"Hello "<<name2<<endl ; 

    // length of name2 char array 
    cout<<"Lenght  of your name2 is : "<<strlen(name2)<<endl ; 

    // reverse a string
    strrev(name2) ;
    cout<<"Reversed name2 is : "<<name2<<endl ; 
    


    return 0 ; 
}

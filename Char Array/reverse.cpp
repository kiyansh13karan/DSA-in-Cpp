// reverse of a character arrray 

#include <iostream>
using namespace std ;

int reverse(char name[] , int n) {
    int s =0 ; 
    int e = n-1 ; 

    while(s < e) {
        swap(name[s++] , name[e--]) ; 
    }
}

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

    int rev = reverse(name , getlength(name)) ;
    cout<<"Reversed name is : "<<name<<endl ; 
    

    return 0 ; 
}
#include<iostream>
using namespace std;
//function 
//pointer:pass by value, pass by reference 
void fun(int *x)

{ *x=500;

 cout<<*x<<endl; //500
   
     return;
}


int main()
{ int a=10;
    fun(&a);
    
    cout<<a<<endl; //500
    return 0;
}










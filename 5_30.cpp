#include<iostream>
#include<cmath>

using namespace std ;

template <class T>

//SFNNA    = Sum First Natural Number using Array 
T  SFNNA(T a)
{   
    int arr[a] = {} ;
    int sum = 0 ;
    int len = sizeof(arr) / sizeof(arr[0]);

    for(int i=1; i<=len; i++)
    {
         arr[i] = i ; 
         sum+= arr[i] ;
    }
    cout<<"The array sum is "<< sum << endl ;      
    return 0 ;
}
//SFNNF    = Sum First Natural Number using Mathmatic formula
int  SFNNF(int a)
{ 
    int sum = 0 ;  
    sum = a*(a+1)/2  ;
    cout<<"The array sum is "<< sum << endl ;    
    return 0 ;
}  

int main()
{
    int n ;
    cout << "Enter your number : " << endl ;
    cin >> n ;
    SFNNA(n) ;
    SFNNF(n) ; 
}
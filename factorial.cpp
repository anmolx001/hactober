
// C++ program to compute factorial of big numbers 
#include<iostream> 
using namespace std; 
  
// Maximum number of digits in output is 500
#define MAX 500 
  
int multiply(int x, int ans[], int ans_size); 

void factorial(int n) 
{ 
    int ans[MAX]; 
    ans[0] = 1; 
    int ans_size = 1; 
  
    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n 
    for (int x=2; x<=n; x++) 
        ans_size = multiply(x, ans, ans_size); 
  
    cout << "Factorial of given number is \n"; 
    for (int i=ans_size-1; i>=0; i--) 
        cout << ans[i]; 
} 
  
// This function multiplies x with the number represented by res[]. 
// This function may value of res_size and returns the  new value of res_size 
int multiply(int x, int ans[], int ans_size) 
{ 
    int c = 0;  // Initialize carry 
  
    // One by one multiply n with individual digits of res[] 
    for (int i=0; i<ans_size; i++) 
    { 
        int prod = ans[i] * x + c; 
  
        // Store last digit of 'prod' in res[]   
        ans[i] = prod % 10;   
  
        // Put rest in carry 
        c = prod/10;     
    }  

    while (c) 
    { 
        ans[ans_size] = c%10; 
        carry = carry/10; 
        ans_size++; 
    } 
    return ans_size; 
} 
int main() 
{ 
    factorial(100); 
    return 0; 
} 

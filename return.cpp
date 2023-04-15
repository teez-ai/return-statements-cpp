// Return statement
#include <iostream>
using std::cout;
using std::endl;
using std::string;

// We use the result statement for return type functions(double,int,string, char, etc.)
double cube(double num){
  double result=num*num*num;  // Parameter we want to cube
  return result;  // Will return the number as cubed so once we call in main, answer will be cubed
}
// You could actually use the same return name variables (result) and parameter variable names (num) since
//  functions are treated like different containers/entities
int addTwelve(int num){
  int result=num+12;
  return result;
}
int main(){
  // We have to store it in a variable first before printing otherwise it wont be printed out
  int printResult=cube(8.0); 
  cout<<printResult<<endl;  // Outputs 512
  cout<<printResult<<endl;
  // We could also print it like
  cout<<cube(8.0)<<endl;  // Outputs 512
  cout<<addTwelve(5)<<endl; // Outputs 17 (5+12)
  return 0;
}
 

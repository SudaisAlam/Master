#include <iostream>
#include <cmath>
using namespace std;

float test(float a, float b) {

    a = 2;
    b = 2;
    
  
  float computeSqrt;
  cout << "The float " <<a<< "After squaring is: " <<pow(a,2)<< "The second float" <<b<< "after squaring is: " <<pow(b,2)<< endl;

  cout << "The floats After taking square and adding them is: " <<pow(a,2) + pow(b,2)<< endl;

  cout <<"After taking the square root the float will be: " <<sqrt(pow(a,2) + pow(b,2))<< endl;


  cout << "Answer is: " <<sqrt(pow(a,2) + pow(b,2))<<endl;
  
  return sqrt(pow(a,2) + pow(b,2));
}
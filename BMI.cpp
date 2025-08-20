// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double weight, height, bmi;
    
    cout << "Enter your weight in kg : ";
    cin >> weight;
    
    cout << "Enter your height in cm : ";
    cin >> height;
     
    if ( weight>0 && height>0 ) {
    double heM = height / 100;
    bmi = weight / pow(heM, 2);
    
    cout << "Your BMI is : " << bmi << endl;
    
    }else{
        cout << "Invaild" << endl;
        return 0;
    }    
    
    if(bmi <18.5 ) {
        cout << "Category: Underweight" << endl;
    }else if(bmi >= 18.5 && bmi > 24.9){
        cout << "Category: Normal" << endl;
    }else if(bmi >= 24.9 && bmi > 29.9){
        cout << "Category: Overweight" << endl;
    }else {
        cout << "Category: Obesity" << endl;
    }
    
    return 0;
}

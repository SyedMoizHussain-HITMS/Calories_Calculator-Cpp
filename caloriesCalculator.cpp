#include <iostream>
using namespace std;
int main() 
{
float age, weight, height;
char gender;
int activity;
float bmr, calories;
cout<<"                                                -------Calories Calculator-------\n\n";
cout<<"    Enter Age (10-100): ";
cin>> age;
cout<<"    Enter Weight (kg, 20-300): ";
cin>> weight;
cout<<"    Enter Height (cm, 70-250): ";
cin>> height;
if(age < 10 || age > 100 || weight < 20 || weight > 300 || height < 70 || height > 250)
 {
cout<<"\nInvalid input. Please enter values within the valid range.\n";
return 1;
}
cout<<"    Enter Gender (M,F): ";
cin>> gender;
while(gender != 'M' && gender != 'F' && gender != 'm' && gender != 'f') {
cout<<"Invalid input. Please enter 'M' for Male or 'F' for Female: ";
cin>> gender;
}
cout<<"\n                                               ----Select Activity Level----\n";
cout<<"    1. Sedentary (No Exercise)\n";
cout<<"    2. Light Exercise (1-3 days/week)\n";
cout<<"    3. Moderate Exercise (3-5 days/week)\n";
cout<<"    4. Heavy Exercise (6-7 days/week)\n";
cout<<"    5. Very Intense Exercise (Physical Job)\n";
cout<<"\n    Enter choice (1-5): ";
cin>> activity;
if(activity < 1 || activity > 5) {
cout<<"Invalid activity level.\n";
return 1;
}
if(gender == 'M'){
bmr = 66.5 + (13.75 * weight) + (5.003 * height) - (6.755 * age);
}else{
bmr = 655 + (9.563 * weight) + (1.850 * height) - (4.676 * age);
}
if(activity == 1) calories = bmr * 1.2;
if(activity == 2) calories = bmr * 1.375;
if(activity == 3) calories = bmr * 1.55;
if(activity == 4) calories = bmr * 1.725;
if(activity == 5) calories = bmr * 1.9;
cout<<"    Recommended Daily Calories: "<<calories<<"kcal\n";
return 0;
}

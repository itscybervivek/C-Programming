/*Write a function to calculate force of attraction
on a body of mass m exerted by earth (g = 9.8m/s^2)*/
#include<stdio.h>
    //Function prototype
    float force_of_attraction(float);
    // function definition
    float force_of_attraction(float mass){
        float g = 9.8;
        return mass*g;
    }
int main(){
    float mass, force;
    printf("Enter mass of object in kg: ");
    scanf("%f", &mass);
    force = force_of_attraction(mass);
    printf("The gravitational force on the object is: %.2f N\n", force);
    
    return 0;
}
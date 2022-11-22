#include <stdio.h> // importing some basic funcions like printf and scanf
#include <math.h> // importing some basic funcions like pow and sqrt

// decleraing the variables to float type to get more accurate answer
float base, height, base_square, height_square, hypotenuse;


// a function to return hypotenuse
float getHypotenuse(float base, float height) {
    base_square = pow(base, 2); // squaring the base of the triangle (base^2)
    height_square = pow(height, 2); // squaring the height of the triangle (height^2)
    // finding the hypotenunse by using formula hypotenuse = squareroot(base^2 + height^2)
    hypotenuse = sqrt(base_square + height_square);
    return hypotenuse;
}


void main() {
    // Taking the input from the user
    printf("Enter the base of your right angle triangle:\n");
    scanf("%f", &base);
    printf("Enter the height of your right angle triangle:\n");
    scanf("%f", &height);

    // printing the hypotenuse of his triangle
    printf("The Hypotenuse of the triangle with ");
    printf("base %f and height %f:\n%f\n\n", base, height, getHypotenuse(base, height));
}
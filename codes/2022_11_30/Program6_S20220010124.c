// © NAVEEN KUMAR
#include<stdio.h>

void main(){
    float Y, distanceTravelled; //declaring the variables
    printf("\nEnter the height in meters from which you released ball:\n");
    scanf("%f", &Y);
    
    /* some physics concept 
    check https://github.com/naveen-kumar-l/C-Programming/blob/main/codes/30_11_2022/ReadME.md for clear view
    
    Let
        v1 = speed when ball hits the ground for the first time
        v2 = speed when ball hits the ground for the second time
        v3 = speed when ball hits the ground for the third time

        h1 = distance travelled by the ball when it hits the ground for the first time. 
        h2 = distance travelled by the ball between the first and second time hiting the ground. 
        h3 = distance travelled by the ball between the second and third time hiting the ground.
        g = gravity


    h1 = h
        let assume as h for the time being


    h2 = h/2
        lets find the speed when bounce from the ground for the first time

        from v^2 - u^2 = 2as 
        v1 = (2gh)^1/2 (since initial velocity u1 = 0)
        given that speed becomes half each time it bounces on the floor
        so it will bounce back with velocity u2 = v1 * 1/2

        Caluculating the h2 value

        from v^2 - u^2 = 2as
            
        distance travelled in upward journey= u2^2/2g
                                            = ( (v1/2 )^2 ) / 2g
                                            = (2gh/4) / 2g
                                            = h/4

        h2  = distance travelled in upward journey + distance travelled in downward journey
            = distance travelled in upward journey * 2
            = (h/8)*2
            = h/4


    h3 = h/8
        lets find the speed when bounce from the ground for the second time

        from v2 = U2 = = V1/2 
        v2 = ((2gh)^1/2)/2 (since initial velocity u = 0)
        given that speed becomes half each time it bounces on the floor
        so it will bounce back with velocity u3 = v2 * 1/2
        = ((2gh)^1/2)/4

        Caluculating the h3 value

        from v^2 - u^2 = 2gh
            
        distance travelled in upward journey = u3^2/2g
        = ((2gh)/16)/ 2g
        = h/16

        h3  = distance travelled in upward journey + distance travelled in downward journey
            = distance travelled in upward journey * 2
            = (h/16)*2
            =h/8


    Total distance travelled by the ball when it touches the ground for the third time 
        = h1 + h2 + h3 
        = h + h/2 + h/8
    */

   distanceTravelled = Y + (Y/2) + (Y/8);
   printf("\nTotal distance travelled by the ball when it touches the ground for the third time is \n%f\n", distanceTravelled);
}
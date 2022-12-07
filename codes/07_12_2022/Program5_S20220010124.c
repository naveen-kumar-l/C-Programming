// © NAVEEN KUMAR
#include <stdio.h>

void main() {
    float totalKM, baseFare, serviceCharge, totalFare; // declaration part
    
    // taking the traveller travelled distance in KM to calculate the total fare for Taxi 🚕
    printf("\nEnter the total number of Kilometers traveled: ");
    scanf("%f", &totalKM);

    if (totalKM < 0) {
        printf("Enter the valide distance Travelled in KM\n"); // prints this when distance is in -ve
        return;
    }
    if (totalKM == 0) {
        printf("Hey you haven't travelled yet You no need to pay any amount.\n"); // prints this when distance traveled is 0.
        return;
    }

    // calculating the baseFare charge 
    if (totalKM > 0) {
        baseFare = 120; // pricing for distance travelled in 0-10 km
    }
    if (totalKM > 10) {
        if (totalKM < 15) {
            baseFare += (totalKM - 10) * 10; // when the distance travelled is less than 15 then calculating the charges for the km above 10 and adding to baseFare
        } else {
            baseFare += 5 * 10; // when the distance travelled is above 15 then we calculate charges for the total 5km travelled ie from 10 - 15km and adding to baseFare
        }
    }
    if (totalKM > 15) {
        if (totalKM < 20) {
            baseFare += (totalKM - 15) * 8; // when the distance travelled is less than 20 then calculating the charges for the km above 15 and adding to baseFare.
        } else {
            baseFare += 5 * 8;  // when the distance travelled is above 20 then we calculate charges for the total 5km travelled ie from 15 - 20km and adding to baseFare
        }
    }
    if (totalKM > 20) {
        baseFare += (totalKM - 20) * 6; // when the distance is above 20 then we calculate the distance travelled above 20 and the price for it by multipling with per km charge which is 6 in this case and adding to baseFare.
    }

    serviceCharge = baseFare / 10; // calculating the serviceCharge which is 10% of baseFare
    totalFare = baseFare + serviceCharge; // adding seriveCharge to baseFare to get totalFare
    
    // printing the values
    printf("\nTotal Fare: Rs. %.2f/-\n", totalFare);
    printf("Base Fare: Rs. %.2f/-\n", baseFare);
    printf("Service charges: Rs. %.2f/-\n\n", serviceCharge);
}
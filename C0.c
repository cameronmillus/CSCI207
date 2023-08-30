/* FIGURE 2.14  Batch Version of Miles-to-Kilometers Conversion Program */
/* Converts distances from miles to kilometers.        */

#include <stdio.h> /* printf, scanf definitions        */
#define KMS_PER_MILE 1.609 /* conversion constant      */
#define NAUTM_PER_MILE 1.151 /* conversion constant    */
#define PARS_PER_MILE 3.0857e13 /* conversion constant    */
#define LS_PER_MILE 186282.000 /* conversion constant    */


int main(void) {
     double miles, kms, nautical, parsecs, lightsec;    /* equivalent distance in kilometers */

     /* Get and echo the distance in miles. */
     scanf("%lf", &miles);
     printf("The distance in miles is %.2f.\n", miles);

     /* Convert the distance to kilometers. */
     kms = KMS_PER_MILE * miles;
     nautical = NAUTM_PER_MILE * miles;
     parsecs = PARS_PER_MILE * miles;
     lightsec = LS_PER_MILE * miles;

     /* Display the distance in kilometers. */
     printf("That equals %.2f kilometers.\n", kms);
     printf("That equals %.2f nautical miles.\n", nautical);
     printf("That equals %.2f parsecs.\n", parsecs);
     printf("That equals %.2f light-seconds.\n", lightsec);

     return (0);
}

/*
The distance in miles is 1
That equals 121 kilometers.
*/

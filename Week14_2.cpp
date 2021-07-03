#include<stdio.h>


typedef struct weather
{
    int total_rainfull;
    int high_temperature;
    int low_temperature;
    double average_temperature;
} weather_t;
 int main(){
     weather_t s[12];
     int sum_rainfall = 0;
     double average_rainfall = 0;
     int max = -1e9;
     int min = 1e9;
     for(int i = 0; i < 12; i++){
         printf("Enter Total Rainfall of month %d:",i+1);
         scanf("%d", &s[i+1].total_rainfull);
         sum_rainfall += s[i+1].total_rainfull;
         printf("Enter High Temperature of month %d:", i+1);
         scanf("%d", &s[i+1].high_temperature);
         while(s[i].high_temperature <-40 || s[i+1].high_temperature >50){
             printf("Try again: ");
             scanf("%d", &s[i+1].high_temperature);
         }
         if (s[i+1].high_temperature > max) max = s[i+1].high_temperature;
         printf("Enter Low Temperature of month %d:", i+1);
         scanf("%d", &s[i+1].low_temperature);
          while(s[i+1].low_temperature <-40 || s[i+1].low_temperature >50){
             printf("Try again: ");
             scanf("%d", &s[i+1].low_temperature);
         }
         if(s[i+1].low_temperature < min) min = s[i+1].low_temperature;
         printf("Enter Average Temperature of month %d:", i+1);
         scanf("%lf", &s[i+1].average_temperature);
         
 }
	average_rainfall = sum_rainfall/ 12;
	printf("the average rain fall: %.2f\n", average_rainfall);
	printf(" the total rainfall: %d\n", sum_rainfall);
	printf("The highest tem: %d\n",max );
	printf("The lowest tem: %d", min);
 }

#include <stdio.h>

void main()
{
    int i=1, unit, current_reading, prev_reading;
    float bill = 0;

    printf("Enter the current reading: ");
    scanf("%d", &current_reading);
    printf("Enter the previous reading: ");
    scanf("%d", &prev_reading);
    
    unit = current_reading - prev_reading;
    printf("Unit used: %d \n", unit);
    while(i <= unit)
    {

        if(i < 101)
            bill += 1.50;
        else if(i < 301)
            bill += 2.00;
        else if(i < 501)
            bill += 2.50;
        else
            bill += 3.25;
        i++;
    }
    printf("Your bill is: %f ", bill);
        
    
}

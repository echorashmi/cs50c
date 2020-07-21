/*
    Playing around with my computer's memory / RAM 
    Upon running this, open up the Mac "Activity Monitor", you can see the program actually running there. 
    Pretty cool, feels like new superpower unlocked :p 
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    malloc(5000000);
    sleep(600);
}
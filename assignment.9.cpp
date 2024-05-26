/* 
9. Write a C program to convert specified days into years, weeks 
and days. Note: Ignore leap year. */
//tanya rajput

 #include <stdio.h>

int main() {
	
    int totalDays, years, weeks, days;
    
    printf("Number input: ");
    scanf("%d", &totalDays);
    
    years = totalDays / 365;
    
    totalDays = totalDays % 365;
    
    weeks = totalDays / 7;
    
    days = totalDays % 7;
    
    printf("%d Years: %d Weeks: %d Days\n", years, weeks, days);
    
    return 0;
    
}

#include <stdio.h>
#include <string.h>
//test123
int main() {

	int i, y; 
	int anzahlUnterstriche;

	char* vornamen[5] = {"Peter", "Hans", "Wolfgang", "Donald", "Waldtraud"};
	char* nachnamen[5] = {"Mueller", "Schmidt", "Meier", "Duck", "Schulz"};
	
	for (i = 0; i < 5; i++) {

		anzahlUnterstriche = 81 - strlen (vornamen[i]) - strlen (nachnamen[i]);
		char us[anzahlUnterstriche];
	
		for (y = 0; y <= anzahlUnterstriche; y++) {

			us[y] = '_';

		}	
	
		printf("%-s %s %s\n", vornamen[i], us, nachnamen[i]);
	
	}

return 0;

}

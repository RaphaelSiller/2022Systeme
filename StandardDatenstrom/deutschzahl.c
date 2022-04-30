#include <stdio.h>
void deutschzahl(int stelle, int ziffer) {
	
	if (stelle == 1) {
		switch(ziffer) {
			case 1: {
				printf("ein");
				break;
			}
			case 2: {
                        	printf("zwei");
				break;
                        }
			case 3: {
                        	printf("drei");
				break;
                        }
			case 4: {
                        	printf("vier");
				break;
                        }
			case 5: {
                        	printf("fünf");
				break;
                        }
			case 6: {
                        	printf("sechs");
				break;
                        }
			case 7: {
                        	printf("sieben");
				break;
                        }
			case 8: {
                        	printf("acht");
				break;
                        }
			case 9: {
                        	printf("neun");
				break;
			}
		}
	}

	if (stelle == 2) {
                switch(ziffer) {
			case 1: {
                        	printf("zehn");
				break;
                        }
			case 2: {
                        	printf("zwanzig");
				break;
                        }
			case 3: {
                        	printf("dreißig");
				break;
                        }
			case 4: {
                        	printf("vierzig");
				break;
                        }
			case 5: {
                        	printf("fünfzig");
				break;
                        }
			case 6: {
                        	printf("sechszig");
				break;
                        }
			case 7: {
                        	printf("siebzig");
				break;
                        }
			case 8: {
                        	printf("achtzig");
				break;
                        }
			case 9: {
                        	printf("neunzig");
				break;
                        }
        	}
	}

}

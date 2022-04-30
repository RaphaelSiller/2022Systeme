#include "DIYstack.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
navi_t stack;
navi_t *start = NULL;

void stackPush(int wert) {
	navi_t *help = NULL;
	if(start == NULL) { //leere Liste
		start = (navi_t*)malloc(sizeof(navi_t));
		//(*start).wert = wert;
		start->wert = wert;
		//(*start).next = NULL;
		start->next = NULL;
	} else {
		help = (navi_t*)malloc(sizeof(navi_t));
		help->wert = wert;
		help->next = start;
		start = help;	
	}
}

int stackPop(void) {
	//int printIndex = 0;
	
	navi_t *help = NULL;
	int ret = 0;
	
	//fprintf(stderr, "got to printIndex %i\n", printIndex);
	//printIndex++;
	
	help = start->next;
	
	//fprintf(stderr, "got to printIndex %i\n", printIndex);
	//printIndex++;
	
	ret = start->wert;
	
	//fprintf(stderr, "got to printIndex %i\n", printIndex);
	//printIndex++;
	
	free(start);
	
	//fprintf(stderr, "got to printIndex %i\n", printIndex);
	//printIndex++;

	start = help;
	
	return ret;
}

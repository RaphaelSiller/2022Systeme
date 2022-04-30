#include "DIYsnake.h"
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
		help = start;
		while (help->next != NULL) {
			help = help->next;
		}
		help->next = (navi_t*)malloc(sizeof(navi_t));
		help = help->next;
		help->wert = wert;
	}
}

int stackPop(void) {
	//int printIndex = 0;
	
	navi_t *help = NULL;
	int ret = 0;
	help = start->next;
	ret = start->wert;
	free(start);
	start = help;
	
	return ret;
}

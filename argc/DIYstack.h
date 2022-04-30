typedef
struct stackListe_s {
	int wert;
	struct stackListe_s *next;
} navi_t;

void stackPush(int wert);

int stackPop(void);

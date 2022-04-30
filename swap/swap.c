/**
 * @brief tauscht den Inhalt der beiden uebergebenen Variablen
 */
void swap (int *zahl1, int *zahl2) {
	int zahl3=zahl1;
	*zahl1 = *zahl2;
	*zahl2 = zahl3;
}

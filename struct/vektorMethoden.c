#include "vektorMethoden.h"

/**
 * @brief addiert sowohl die x, als auch die y-Koordinaten beider vektoren und speichert den Wert in einem neuen Vektor ab
 * 
 * @param v1 
 * @param v2 
 * @return vector_t mit den addierten Koordinaten
 */
vector_t vectorSum( vector_t v1, vector_t v2) {
	vector_t ret;
	ret.x = v1.x + v2.x;
	ret.y = v1.y + v2.y;
	return ret;
}

/**
 * @brief multipliziert die x und y-Koordinaten des vektor v mit dem faktor k
 * 
 * @param k = faktor
 * @param v = vektor
 * @return berechneter vector 
 */
vector_t vectorScale( int k, vector_t v) {
	vector_t ret;
	ret.x = k * v.x;
	ret.y = k * v.y;
	return ret;
}

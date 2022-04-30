/** Es wird von der uebergeben Zahl das Quadrat, Kubus und (Äquivalent in der 4. 
 *  Dimension)
 */ 

void potenz(int n, int *n2, int *n3, int *n4)  {
	*n2 = n*n;
	*n3 = n*n*n;
	*n4 = n*n*n*n;
}

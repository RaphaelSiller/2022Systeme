double g(double x1, double x2, double y1, double y2) {

	double k = (y2 - y1) / (x2 - x1);
	double d = y1 - (k * x1);
	double g = -d/k;
	return g;
}

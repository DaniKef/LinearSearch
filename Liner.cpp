int linsearch(int* mas, int n, int value) {
	double start = clock();
	for (int i = 0; i < n; i++) {
		if (mas[i] == value) {
			cout << "\nIndex= " << i << endl;
			return 0;
		}
	}
	cout << "\nThe value wasn't found" << endl;
	double finish = clock();
	return 0;
}

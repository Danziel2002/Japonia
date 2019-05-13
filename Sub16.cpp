#include <iostream>

using namespace std;

int main(){
	int nrRandului, matrix[100][100], n;

	cin >> n;

	for(int i = 0; i < n;  i++){
		for(int k = 0; k < n; k++){
			matrix[i][k] = i+1;
		}
	}

	for(int i = 0; i < n; i++){
		for(int k = 0; k < n; k++){
			cout << matrix[i][k];
		}
		cout << endl;
	}

	cin >> nrRandului;

	for(int i = n; i >= nrRandului-1; i--){
		for(int k = 0; k < n; k++){
			matrix[i+1][k] = matrix[i][k];
		}
	}

	for(int i = 0; i <n; i++){
		matrix[nrRandului-1][i] = 0;
	}
	for(int i = 0; i < n+1; i++){
		for(int k = 0; k < n; k++){
			cout << matrix[i][k];
		}
		cout << endl;
	}
return 0;
}

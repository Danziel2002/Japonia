#include <iostream>

using namespace std;

int main(){
	int lenA, counter =0,lenB, z = 0,A[100], B[100], C[100], F[100];

	cin >> lenA;
	cin >> lenB;

	for(int i = 0; i < lenA; i++){
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}for(int i = 0; i < lenB; i++){
		cout << "B[" << i << "] = ";
		cin >> B[i];
	}

	for(int i = 0; i < lenA; i++){
		for(int k = 0; k < lenB; k++){
			if(A[i] == B[k]){
				C[i] = A[i];
				z = z + 1;
			}
		}
	}


	for(int i = 0; i < z; i++){
		for(int k = 0; k < z; k++){
			if(C[i] == F[k]){
				counter++;
			}
		}
		if(counter == 0){
			F[i] = C[i];
		}else{
			counter = 0;
		
		}}

	for(int i = 0; i < z; i++){
		cout << F[i];
	}
	return 0;
}


#include <iostream>
using namespace std;
int main(){
    int i,j,matriks[3][3],det;
	int *determinan;
	determinan = &det;
	  cout<<"\t\t\tMenghitung determinan matriks 3×3 \n\n\n";
	
	for (i=1; i<=3; i++){
		for (j=1; j<=3; j++){
			cout << "input matriks ke "<<i<<", "<<j<<" = ";
			cin >> matriks[i-1][j-1];
		}
	}
	cout<<end<<endl;
	cout<<" Tampilan matriks yang terinput = ";
	// yok lanjut @din @nad
  
return 0;
}

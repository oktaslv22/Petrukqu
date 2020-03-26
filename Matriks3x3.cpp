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
	for(i=1;i<=3;i++){
		cout<<endl<<" ";
			for(int j=1;j<=3;j++){
				cout<<matriks[i-1][j-1]<<" ";
			}
	}
	
	det = matriks[0][0]*matriks[1][1]*matriks[2][2] + matriks[0][1]*matriks[1][2]*matriks[2][0] 
		+ matriks[0][2]*matriks[1][0]*matriks[2][1]
		//nadd yok bisa yok
  
return 0;
}

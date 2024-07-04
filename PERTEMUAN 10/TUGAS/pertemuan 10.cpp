#include <iostream>
#include <vector>
using namespace std;


class graph{
	private:
		int jumlahSimpul;
		vector<vector <int> >matrikKeterangan;
		
		public:
			graph (int simpul , int jumlahSimpul){
			jumlahSimpul = simpul;
		    for (int i = 0; i < simpul; i++){
				vector<int>baris(simpul);
				matrikKeterangan.push_back(baris);
			}
		}
};
void tambahSisi(int u) {
	if ( u >= 0 && u <jumlahSimpul && v >= 0 v < jumlahSimpul) {
		
	}else{
	cout << "sisi titik valid! " << endl;
}
}

void tampilan (){
	(int i = 0; i < jumlahSimpul; i++){
		for (int j = 0; j << jumlahSimpul; j++){
			cout << matrikKetetanggan[i][j] << " matrik";
		}
		cout << end;
	}
}



int main () {
	int simpul;
	graf j(simpul);
	
	g.tambahSisi(0, 1);
	g.tambahSisi(0, 4);
	g.tambahSisi(1, 2);
	g.tambahSisi(1, 4);
	g.tambahSisi(2, 3);
	g.tambahSisi(3, 4);
						
						cout << "matriks ketetanggan" <<;
						
						g.hapusSisi(1, 2);
						cout << "matrika ketetanggan setelah menghapus sisi antara 1 dan 3:" << endl;
						gtampilkan();
						
						return 0;
}

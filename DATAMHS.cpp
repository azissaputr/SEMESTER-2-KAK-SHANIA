#include <iostream>
using namespace std;

class mahasiswa{
	private:
		string nama;
		string npm;
		
		public:
			void setnama(string n){
				nama = n;
			}
			void setnpm(string s) {
				npm = s;
			}
			string getnama() {
				return nama;
			}
			string getnpm() {
				return npm;
			}
};

int main(){
	mahasiswa egi,rama,gilang,david,guntur,luthfi,maulana,rian,steven,alex,dani,caca,smith,adi;
	string datamahasiswa[14][2];
	
	for(int i=0; i< 14; i++){
		cout<<"masukan nama mahasiswa "<<i + 1 <<": ";getline(cin, datamahasiswa[i][0]);
		cout<<"masukan NPM mahasiwa "<<i+ 1 <<": " ; cin >> datamahasiswa[i][1];
		cout<<endl;
		cin.ignore();
	}
	for(int i = 0 ; i < 14 ; i++){
		switch (i){
			case 0:
				egi.setnama(datamahasiswa[i][0]);
				egi.setnpm(datamahasiswa[i][1]);
			case 1:
				rama.setnama(datamahasiswa[i][0]);
				rama.setnpm(datamahasiswa[i][1]);
			case 2:
				gilang.setnama(datamahasiswa[i][0]);
				gilang.setnpm(datamahasiswa[i][1]);
			case 3:
				david.setnama(datamahasiswa[i][0]);
				david.setnpm(datamahasiswa[i][1]);
			case 4:
				guntur.setnama(datamahasiswa[i][0]);
				guntur.setnpm(datamahasiswa[i][1]);
			case 5:
				luthfi.setnama(datamahasiswa[i][0]);
				luthfi.setnpm(datamahasiswa[i][1]);
			case 6:
				maulana.setnama(datamahasiswa[i][0]);
				maulana.setnpm(datamahasiswa[i][1]);
			case 7:
				rian.setnama(datamahasiswa[i][0]);
				rian.setnpm(datamahasiswa[i][1]);
			case 8:
				steven.setnama(datamahasiswa[i][0]);
				steven.setnpm(datamahasiswa[i][1]);
			case 9:
				alex.setnama(datamahasiswa[i][0]);
				alex.setnpm(datamahasiswa[i][1]);
			case 10:
				dani.setnama(datamahasiswa[i][0]);
				dani.setnpm(datamahasiswa[i][1]);
			case 11:
				caca.setnama(datamahasiswa[i][0]);
				caca.setnpm(datamahasiswa[i][1]);
			case 12:
				smith.setnama(datamahasiswa[i][0]);
				smith.setnpm(datamahasiswa[i][1]);
			case 13:
				adi.setnama(datamahasiswa[i][0]);
				adi.setnpm(datamahasiswa[i][1]);
		}
	}
	
	for(int i = 0; i < 14; i++){
		cout<<"mahasiswa "<<i + 1<<":\n";
		switch(i) {
		case 0:
			cout<<"nama: "<<egi.getnama()<<"\n";
			cout<<"nama: "<<egi.getnpm()<<"\n";
			break;
		case 1:
			cout<<"nama: "<<rama.getnama()<<"\n";
			cout<<"nama: "<<rama.getnpm()<<"\n";
			break;
		case 2:
			cout<<"nama: "<<gilang.getnama()<<"\n";
			cout<<"nama: "<<gilang.getnpm()<<"\n";
			break;
		case 3:
			cout<<"nama: "<<david.getnama()<<"\n";
			cout<<"nama: "<<david.getnpm()<<"\n";
			break;
		case 4:
			cout<<"nama: "<<guntur.getnama()<<"\n";
			cout<<"nama: "<<guntur.getnpm()<<"\n";
			break;
		case 5:
			cout<<"nama: "<<luthfi.getnama()<<"\n";
			cout<<"nama: "<<luthfi.getnpm()<<"\n";
			break;
		case 6:
			cout<<"nama: "<<maulana.getnama()<<"\n";
			cout<<"nama: "<<maulana.getnpm()<<"\n";
			break;
		case 7:
			cout<<"nama: "<<rian.getnama()<<"\n";
			cout<<"nama: "<<rian.getnpm()<<"\n";
			break;
		case 8:
			cout<<"nama: "<<steven.getnama()<<"\n";
			cout<<"nama: "<<steven.getnpm()<<"\n";
			break;
		case 9:
			cout<<"nama: "<<alex.getnama()<<"\n";
			cout<<"nama: "<<alex.getnpm()<<"\n";
			break;
		case 10:
			cout<<"nama: "<<dani.getnama()<<"\n";
			cout<<"nama: "<<dani.getnpm()<<"\n";
			break;
		case 11:
			cout<<"nama: "<<caca.getnama()<<"\n";
			cout<<"nama: "<<caca.getnpm()<<"\n";
			break;
		case 12:
			cout<<"nama: "<<smith.getnama()<<"\n";
			cout<<"nama: "<<smith.getnpm()<<"\n";
			break;
		case 13:
			cout<<"nama: "<<adi.getnama()<<"\n";
			cout<<"nama: "<<adi.getnpm()<<"\n";
			break;
		}
	}
}

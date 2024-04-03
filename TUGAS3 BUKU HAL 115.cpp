#include <iostream>
#include <string>

using namespace std;

class buku{
	private:
		string judul;
		string pengarang;
		bool dipinjam;
public:
	buku(string judul, string pengarang){
		this->judul = judul;
		this->pengarang = pengarang;
		this->dipinjam = false;
	}
	void setjudul(string judul){
		this->judul = judul;
	}
	void setpengarang(string pengarang){
		this->pengarang = pengarang;
	}
	void setdipinjam(bool dipinjam){
		this->dipinjam = dipinjam;
	}
	string getjudul() const{
		return judul;
	}
	string getpengarang() const{
		return pengarang;
	}
	bool isdipinjam() const {
		return dipinjam;
	}
};

int main(){
	buku buku1("pemprograman","jhon Doe");
	buku buku2("Laskar pelangi", "jhon Doe");
	
	cout<<"informasi buku 1\n";
	cout<<"judul buku: "<< buku1.getjudul() <<endl;
	cout<<"pengarang: " << buku1.getpengarang() <<endl;
	cout<<"status pinjaman: " <<(buku1.isdipinjam() ?"sudah dipinjam" : "belum di pinjam") << endl;
	
	buku1.setjudul("algoritma dan struktur data");
	buku1.setdipinjam(true);
	
	cout<<"\nSetelah perubahan: " << endl;
	cout<<"Judul buku: "<<buku1.getjudul()<<endl;
	cout<<"pengarang: "<<buku1.getpengarang()<<endl;
	cout<<"status Pinjaman: " <<(buku1.isdipinjam() ? "sudah dipinjam" : "belum dipinjam") << endl;
	
	cout<<"informasi buku 2\n: "<<endl;
	cout<<"Judul buku baru: "<<buku2.getjudul()<<endl;
	cout<<"pengarang: "<<buku2.getpengarang()<<endl;
	cout<<"status pinjaman: "<<(buku2.isdipinjam() ? "sudah dipinjam " : "belum dipinjam")<< endl;
	
	buku2.setjudul("laskar pelangi 2");
	buku2.setdipinjam(true);
	
	cout<<"\nSetelah perubahan: " << endl;
	cout<<"Judul buku: "<<buku2.getjudul()<<endl;
	cout<<"pengarang: "<<buku2.getpengarang()<<endl;
	cout<<"status Pinjaman: " <<(buku2.isdipinjam() ? "sudah dipinjam" : "belum dipinjam") << endl;
	
	return 0;
}

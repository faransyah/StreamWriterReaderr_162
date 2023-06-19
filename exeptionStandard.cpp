#include <iostream>
#include <exception>
//untuk oyek execption yang akan digunakan
#include <array>
//untuk obyek array yang akan kita gunakan
using namespace std;

int main() {
	cout << "Awal Program" << endl; //penanda 1:...
	try {
		array<int, 3> data = { 1, 2, 3 };
		//pesan array integer 3 elemen
		cout << data.at(4) << endl;
		//memanggil array elemen ke 5
	}
	catch (exception& e) {
		//penangkap menggunakan obyek exception
		cout << e.what() << endl;
		/*akan dieksekusi karna array data hanya memilki 3 elemen*/
	}
	cout << "Baris Program Yang terakhir" << endl;
	/*penanda 2: bajwa program berjalan tanpa berhenti meskipun terjadi kesalah*/
	return 0;
}
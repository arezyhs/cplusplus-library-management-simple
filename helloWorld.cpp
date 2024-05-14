/*

brief praktikum program "manajemen perpustakaan" - buat sekreatif dan semenarik mungkin.

Materi yang wajib ada + contoh implementasinya.
## rekursif -> untuk searching, etc.
## sorting -> untuk mengurutkan objek tertentu pada perpustakaan.
## searching -> untuk mencari buku/objek dengan metode tertentu.
## tree -> untuk penerapan metadata pada buku, etc.
## graph -> untuk percabangan lokasi dan objek perpustakana.
## collision handling & hash table -> untuk manajemen transaksional pada objek perpustakaan, etc.

HARAP DICATAT BAHWA implementasi materi tidak terbatas pada hal di atas selama sesuai dengan
materinya masing-masing.


*/

// arezyhs

#include <iostream>
using namespace std;

void menuAwal() {
    cout << "       MANAJEMEN PERPUSTAKAAN      " << endl;
    cout << "1. REGISTER    " << endl;
    cout << "2. LOGIN   " << endl;
    cout << "3. KELUAR  " << endl;
};

int main() {
    cout << "Hello World!" << endl;
    system("pause"); system("cls");
    menuAwal();
}

// create, read, update, delete (CRUD)
// user dan admin
// user -> login > cari/pinjam/kembali > denda > terima buku
// admin/aplikasi -> manajemen buku, tambah/hapus, riwayat, dsb...
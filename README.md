Saya Maula Mirza Ananda dengan NIM 2407087 mengerjakan Tugas Praktikum 3 pada Mata Kuliah Desain dan Pemrograman Berorientasi Objek (DPBO)
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

<img width="851" height="739" alt="image" src="https://github.com/user-attachments/assets/eb8cd0c3-afef-459f-8227-610f1b69615a" />

## PENJELASAN:
Program ini dibuat bertemakan inventori perdagangan fantasi yang menggunakan multiple inheritance di kelas hybrid
- Kelas item dibuat dengan properti bawaan berupa id(string), nama(string), price(harga), description(string). kelas memiliki fungsi getter setter
- Kelas weapon merupakan turunan dari kelas item dan memiliki properti eksklusif berupa damage(int). kelas memiliki fungsi getter setter
- Kelas usableHeal merupakan turunan dari kelas item dan memiliki properti eksklusif berupa flatHeal(int). kelas memiliki fungsi getter setter
- Kelas usableBuff merupakan turunan dari kelas item dan memiliki properti eksklusif berupa addAtk(int). kelas memiliki fungsi getter setter
- Kelas usableDebuff merupakan turunan dari kelas item dan memiliki properti eksklusif berupa defense(int). kelas memiliki fungsi getter setter
- Kelas hybrid merupakan turunan dari kelas usableBuff dan usableHeal, hybrid hanya memiliki properti turunan dari. kelas memiliki fungsi getter setter bawaan dari usableBuff dan usableHeal
- Kelas menu digunakan untuk inisialisasi masing masing vector yaitu items, weapons, usableheals, usablebuffs, usabledebuffs, hybrids
- Kelas menu memiliki fungsi setter untuk masing masing vector yang telah diinisialisasi(e.g. addItems, addWeapons,...)
- Kelas menu memiliki fungsi addManual()(hanya di python, di c++ menggunakan overloading dari setter) untuk tambah menggunakan input device
- Kelas menu memiliki fungsi printList()(hanya di python, di c++ menggunakan masing masing print) untuk menampilkan isi vektor yang telah diinisialisasi dalam tabel dinamis
- Kelas menu memiliki fungsi storage() untuk menu opsi

#include <iostream>
using namespace std;

int n;
int arr[12];

void input() { // procedur untuk input
    int d;
    while (true) {
        cout << "Masukkan banyaknya elemen pada array : "; // output ke layar
        cin >> n;		// input dari pengguna
        if (n <= 12)	// jika n kurang dari atau sama dengan 20
            break;		// keluar dari loop
        else {			// jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // output ke layar
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) { // looping dengan 1 dimulai dari 0 hingga n-1
        cout << "data ke-" << (i + i) << "; "; // output ke layar
        cin >> arr[i]; // output dari pengguna
    }
}

void insertionSort() {

	int i, n, temp, j;
	int arr[12];

	for(i = 1; i <= n-1; i++){ //step 1
		temp = arr[i]; //step 2
		j = i - 1; //step 3
		while (j >= 0 && arr[j] > temp) //step 4
		{
			arr[j + 1] = arr[j]; //step 4a
			j = j - 1; //step 4b
		}
		arr[j + 1] = temp; //step 5
	}
}
void display() {
    cout << endl;
    cout << "================================" << endl;
    cout << "elemen array yang telah tersusun" << endl;
    cout << "================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j]; // menampilkan array
        if (j < n - 1) {
            cout << " -->";
        }
    }
    cout << "jumlah pass = " << n - 1 << endl; // menampilkan jumlah dari pass
    cout << endl;
}
int main()
{
    input();
    insertionSort();
    display();
    system("pause");
    return 0;
	
}
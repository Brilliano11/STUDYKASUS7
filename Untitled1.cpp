#include <iostream>
using namespace std;

class SortingSearching {
	public:
		void CetakData(int size, int data[]){
			for (int i = 0 ; i < size ; i++) {
				cout << data[i] << " ";
				
			}
			cout << endl;
		}
		
		void BubbleSort(int size, int data[]) {
			for (int i = 0 ; i < size - 1 ; i++) {
				for (int j = 0 ; j < size - i - 1; j++){
					if (data [j] > data [j+1]){
						int temp =data[j];
						data[j] = data[j+1];
						data[j+1] = temp;
					}
				}
			}
		}
		
		int binarySearch(int key, int size, int data []) {
			int left = 0, right = size - 1;
			
			while (left <= right ) {
				int mid = (left + right ) /2;
				
				if (data[mid] == key )
					return mid;
				else if(data[mid] < key )
					left = mid + 1;
				else 
				right = mid - 1;
			}
			
			return -1;
		}
};

int main() {
	int size = 10;
	int data[size] = {42, 17, 23, 56, 34, 90, 12, 5, 29};
	
	SortingSearching ss;

	cout << "Data sebelum di urutkan:\n";
	ss.CetakData(size, data);
	
	ss.BubbleSort(size, data);
	
	cout<< "\nData setelah di urutkan:\n";
	ss.CetakData(size, data);
	
	int key;
	cout << "\nMasukan angka yang ingin di cari: ";
	cin >> key;
	
	int hasil = ss.binarySearch(key, size, data);
	if(hasil != -1) {
		cout << "angka" << key << " ditemukan pada indeks ke-" << hasil << endl;
		
	}else{
		cout << "angka" << key << " tidak di temukan dalam data.\n";
	}
	return 0;
}










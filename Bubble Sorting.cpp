#include <iostream>
using namespace std;
   
struct mahasiswa {
    int nim;
    string nama;
};
typedef struct mahasiswa data;
   
void cetak(data *input, int n) {
    for(int i=0; i<n; i++)
        cout << input[i].nim << " ";
    cout << "\r\n";
}
   
void BubbleSort(data *input, int n) {
    data c;
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(input[j].nim > input[j+1].nim) {
                c = input[j];
                input[j] = input[j+1];
                input[j+1] = c;
            }
            cetak(input, n);
        }
    }       
}
   
int main() {
    int i, n;
    cin >> n;
    data input[n];
       
    for(i=0; i<n; i++)
        cin >> input[i].nim >> input[i].nama;   
       
    BubbleSort(input, n);
    cout << "Hasil akhir :\r\n";
       
    for(i=0; i<n; i++)
        cout << input[i].nim << " - " << input[i].nama << "\r\n";
       
    return 0;
}

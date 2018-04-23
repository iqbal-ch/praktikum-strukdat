#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main(){
    int m, n, tinggi, m_awal, n_awal, m_akhir, n_akhir;
    cin >> m >> n;
    int sawah[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
            cin >> tinggi;
            sawah[i][j] = tinggi;
        }
    cin >> m_awal >> n_awal;
    cin >> m_akhir >> n_akhir;
    int n_tanaman = 0;
    float t_tanaman = 0;
    for(int i=(m_awal-1);i<=(m_akhir-1);i++)
        for(int j=(n_awal-1);j<=(n_akhir-1);j++){
            n_tanaman++;
            t_tanaman += sawah[i][j];
        }
    t_tanaman = t_tanaman/n_tanaman;
    cout << n_tanaman << ' ' << fixed << setprecision(4) << t_tanaman << endl;
     
    return 0;
}

#include <iostream>

using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
	int x[10000];
	int y,z,i,a;
	cin >> y;
	for(;y!=-9;){
		x[y]++;
		cin >> y;
	}
	cin >> a;
	for(i=1;i<=a;i++){
		cin >> z;
		if(x[z]) cout << z << " ada" << endl;
		else cout << z << " tidak ada" << endl;
	}
	return 0;
}
			


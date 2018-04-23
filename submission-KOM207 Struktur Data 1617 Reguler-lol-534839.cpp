#include <iostream>
#include <list>
 
using namespace std;
 
int main(){
    list<int> mylist;
    list<int>::iterator it1, it2;
    string str;
    int n, a, b, x, pos, p1, p2;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a >> b;
        mylist.push_back(a);
        mylist.push_back(b);
    }
    cin >> x;
    for(int i=1;i<=x;i++){
        cin >> str;
        if(str == "hapus"){
            cin >> pos;
            if(pos*2 <= (int)mylist.size()){
                it1 = it2 = mylist.begin();
                advance (it1,(pos*2-2));
                advance (it2,(pos*2));
                mylist.erase(it1,it2);
            }
        }
        else if(str == "hapusdepan"){
            mylist.pop_front();
            mylist.pop_front();
        }
        else if(str == "hapusbelakang"){
            mylist.pop_back();
            mylist.pop_back();
        }
        else if(str == "sisipawal"){
            cin >> p1 >> p2;
            mylist.push_front(p2);
            mylist.push_front(p1);
             
        }
        else if(str == "sisipakhir"){
            cin >> p1 >> p2;
            mylist.push_back(p1);
            mylist.push_back(p2);
        }
        else if(str == "sisip"){
            cin >> p1 >> p2 >> pos;
            it1 = mylist.begin();
            advance (it1,pos*2-2);
            mylist.insert(it1,p1);
            mylist.insert(it1,p2);
        }
    }
    int j = 0;
    for (it1=mylist.begin(); it1!=mylist.end(); ++it1){
        j++;
        if(j%2==0)
            cout << *it1 << endl;
        else
            cout << *it1 << ' ';
    }
    return 0;  
}

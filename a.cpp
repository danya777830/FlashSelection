#include<bits/stdc++.h>
#include<fstream>

using namespace std;

ifstream in("a.txt");

int main(){
    //Считаем данные из файла
    int n;
    cin >> n;
    vector<int> mas(n);
    for(int i = 0; i<n; ++i)
        cin >> mas[i];
    int it = 1e9;
    for(int i = 0; i<n; ++i){
        for(int j = i+1; j<n; ++j){
            for(int q = j+1; q<n; ++q){
                if((mas[i]+mas[j]+mas[q])%10==3){
                    it = min(it, i+j+q);
                }
            }
        }
    }
    cout << it << "\n";
}
#include<bits/stdc++.h>
#include<fstream>

using namespace std;

ifstream in("27A.txt");

int main(){
    int n;
    in >> n;
    vector<int> mas(n);
    int it = 1e9;
    for(int i = 0; i<n; ++i)
        in >> mas[i];
    vector<int> kol(10), index;
    // в массиве kol будем хранить количество чисел которые оканчиваются на каждую из цифр
    // в массиве index будем хранить индексы потенциально подходящих нам чисел
    for(int i = 0; i<n; ++i){
        ++kol[mas[i]%10];
        if(kol[mas[i]%10]<=3){
            index.push_back(i);
        }
    }
    for(int i = 0; i<index.size(); ++i){
        for(int j = i+1; j<index.size(); ++j){
            for(int q = j+1; q<index.size(); ++q){
                int aEl = index[i], bEl = index[j], cEl = index[q];
                if((mas[aEl]+mas[bEl]+mas[cEl])%10==3){
                    it = min(it, aEl+bEl+cEl);
                }
            }
        }
    }
    cout << it << "\n";
}
// подключаем необходимые библиотеки
#include<bits/stdc++.h>
#include<fstream>

using namespace std;

ifstream in("27A.txt");

int main(){
    //считаем данные из файла
    int n;
    in >> n;
    vector<int> mas(n);
    for(int i = 0; i<n; ++i)
        in >> mas[i];
    int it = 1e9; // 1e9 - такой способ записать 1000000000, в переменной it будет лежать ответ
    for(int i = 0; i<n; ++i){ //переберем элементы
        for(int j = i+1; j<n; ++j){
            for(int q = j+1; q<n; ++q){
                if((mas[i]+mas[j]+mas[q])%10==3){ // проверка условия
                    it = min(it, i+j+q); //если условие верное попытаемся обновить ответ
                }
            }
        }
    }
    cout << it << "\n";
}
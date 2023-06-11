//#include <bits/stdc++.h>
#include <iostream> // とりあえずこれをinclude
#include <algorithm>
#include <stdlib.h>
#include <time.h>
#include <random>

using namespace std;
string name;

int rollDice(){
    return rand() % 6 + 1; // 1から6までのランダムな数を生成
}

void scanName(){
    cout << "what is your name?" << endl;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
}

void WonORLost(int t, string n){
    if(t > 7) cout << n << " won!" << endl; 
    else cout << n << " lost!" << endl;
}

int main(){
    scanName();
    srand(time(NULL)); // よりランダムにするため
    int dice1 = rollDice();
    int dice2 = rollDice();
    int total = dice1 + dice2;

    cout << "Rolling dice…" << endl;
    cout << "Dice 1: " << dice1 << endl;
    cout << "Dice 2: " << dice2 << endl;
    cout << "Total value: " << total << endl;
    WonORLost(total, name);

    return 0;
}
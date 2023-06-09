//#include <bits/stdc++.h>
#include <iostream> // とりあえずこれをinclude
#include <algorithm>
#include <stdlib.h>
#include <time.h>
#include <random>

using namespace std;

int rollDice(){
    return rand() % 6 + 1; // 1から6までのランダムな数を生成
}

int main(){
    srand(time(NULL)); // よりランダムにするため
    int dice1 = rollDice();
    int dice2 = rollDice();
    int total = dice1 + dice2;

    cout << "Rolling dice…" << endl;
    cout << "Dice 1: " << dice1 << endl;
    cout << "Dice 2: " << dice2 << endl;
    cout << "Total value: " << total << endl;

    return 0;
}
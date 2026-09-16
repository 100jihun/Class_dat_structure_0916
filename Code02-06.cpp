#include <iostream>
#include "C:\Users\s\source\repos\Code02-06\Code02-06.h"
using namespace std;
Array <string> katok = { "다현", "정연", "쯔위", "사나", "지효" };

void insert_data(int position, string data) {
    if ((position < 0) || (position > len(katok))) {
        print("데이터를 삽입할 범위를 벗어났습니다.");
        return;
    } 

    katok.push_back("None");
    int kLen = len(katok);

    for (int i = kLen - 1; i > position; i--) {
        katok[i] = katok[i - 1];
        katok[i - 1] = "None";
    }

    katok[position] = data;
}

void delete_data(int position) {
    if ((position < 0) || (position > len(katok))) {
        println("데이터를 삭제할 범위를 벗어났습니다.");
        return;
    }

    int kLen = len(katok);
    katok[position] = "None"; // 데이터 삭제

    for (int i = position + 1; i < kLen; i++) {
        katok[i - 1] = katok[i];
        katok[i] = "None";
    }

    del(katok, kLen - 1);
}



int main() {
    insert_data(2, "솔라");
    printArray(katok);
    insert_data(6, "문별");
    printArray(katok);
    delete_data(1);
    printArray(katok);
    delete_data(3);
    printArray(katok);
}
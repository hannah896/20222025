#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

int loadWords(string words[]) {
    FILE* fp = fopen("words.txt", "r");
    if (fp == NULL) {
        cout << "no words.txt file found!\n";
        return 0;
    }

    char buf[16];
    int count = 0;
    while (count < 1000 && fscanf(fp, "%15s", buf) == 1) {
        words[count] = buf;
        count++;
    }
    fclose(fp);
    return count;
}

// 5글자 영어 소문자로 이루어진 문자열인지 검사
bool isValidGuess(const string& guess) {
    if (guess.length() != 5) return false;
    for (int i = 0; i < 5; i++) {
        if (guess[i] < 'a' || guess[i] > 'z') return false;
    }
    return true;
}

// 추측 결과를 -, Y, G 로 이루어진 5글자 문자열로 만든다
// (정답에는 중복되는 글자가 없으므로 위치 비교 + 포함 여부만 보면 된다)
string makeResult(const string& answer, const string& guess) {
    string result = "-----";
    for (int i = 0; i < 5; i++) {
        if (guess[i] == answer[i]) {
            result[i] = 'G';
        }
        else if (answer.find(guess[i]) != string::npos) {
            result[i] = 'Y';
        }
    }
    return result;
}

int main() {
    string words[1000];
    int count = loadWords(words);
    if (count == 0) return 0;

    srand((unsigned)time(NULL));
    string answer = words[rand() % count]; // answer에 무작위 정답 문자열이 담깁니다.

    int tries = 1;
    while (tries <= 6) {
        string guess;
        cout << "guess " << tries << ": ";
        if (!(cin >> guess)) return 0;

        if (!isValidGuess(guess)) {
            cout << "5글자 영어 소문자로 입력하세요." << endl;
            continue; // 잘못된 입력은 횟수에 포함하지 않음
        }

        string result = makeResult(answer, guess);
        cout << result << endl;

        if (result == "GGGGG") {
            cout << "you win!" << endl;
            return 0;
        }
        tries++;
    }

    cout << "you lose! answer is: " << answer << endl;
    return 0;
}

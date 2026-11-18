#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    string total = "";

    while (true)
    {
        cout << "문자열을 입력하시오 : ";
        cin >> input;

        if (input == "exit")
        {
            cout << "exit가 입력되어 종료합니다." << endl;
            break;
        }

        total += input;

        if (total.length() > 200)
        {
            cout << "누적 200자가 넘어서 종료합니다." << endl;
            break;
        }

        cout << "누적 문자열 -> " << total << endl;
    }

    return 0;
}

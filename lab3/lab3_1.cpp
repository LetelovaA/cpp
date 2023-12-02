#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool SnilsCheck(string snils_str)
{
    // � ���������� � �������� ��������� ������ ������� ��� ������ � �������, ��������� ����� ���������� ������
    snils_str.erase(std::remove(snils_str.begin(), snils_str.end(), '-'), snils_str.end());
    snils_str.erase(std::remove_if(snils_str.begin(), snils_str.end(), ::isspace), snils_str.end());
    if (snils_str.length() != 11) {
        return false;
    }
    // ��� ����������� �� �������� �������� ����� ���������� false
    for (int i = 0; i < 11; i++) {
        if (not isdigit(snils_str[i])) {
            return false;
        }
    }
    // ��������� �� ������� ����� 2 ������ ������ ���������� ����
    int count = 0;
    for (int i = 1;i <= 8;i++) {
        if (snils_str[i] == snils_str[i - 1]) { count++; }
        else { count = 0; };
        if (count > 2) { return false; };
    }
    // ���� ����������� �����
    string c;
    int sum = 0;
    for (int i = 8; i >= 0; i--) {
        int n_i = stoi(string(1, snils_str[i]));
        sum += ((9 - i) * n_i);
    }
    sum = sum % 101;
    if (sum >= 100 && sum <= 101) {
        c = "00";
    }
    else {
        c = to_string(sum);
    }
    if (c == snils_str.substr(9, 10)) {
        return true;
    }
    else {
        return false;
    }
}
int main1() {
    bool res; string n;
    cout << "Enter SNILS number: ";
    getline(cin, n);
    res = SnilsCheck(n);
    if (res) {
        cout << "SNILS is valid";
    }
    else {
        cout << "SNILS is invalid";
    }
}
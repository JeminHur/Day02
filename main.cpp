#include<iostream>
using namespace std;

int main() {
	int num=0, sum=0;
	string a = "국어", b = "영어", c = "수학";
	cout << "점수를 입력하세요" << endl;
	cout << a;
	cin >> num;
	sum += num;
	cout << b;
	cin >> num;
	sum += num;
	cout << c;
	cin >> num;
	sum += num;

	cout << "평균은" << static_cast<float>(sum) / 3.0f << "입니다" << endl;

	return 0;
}
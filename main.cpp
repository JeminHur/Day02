#include<iostream>
using namespace std;

int main() {
	int num=0, sum=0;
	string a = "����", b = "����", c = "����";
	cout << "������ �Է��ϼ���" << endl;
	cout << a;
	cin >> num;
	sum += num;
	cout << b;
	cin >> num;
	sum += num;
	cout << c;
	cin >> num;
	sum += num;

	cout << "�����" << static_cast<float>(sum) / 3.0f << "�Դϴ�" << endl;

	return 0;
}
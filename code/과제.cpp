#include <iostream>
using namespace std;
class ConvertSecond {
	private:
		int a, b, c;
	public:
		ConvertSecond();
		void setData();
		int getResult();
};
ConvertSecond::ConvertSecond() { a = 0, b = 0 , c = 0;}
void ConvertSecond::setData() {
	cout << "��(hour) �Է�: ";
	cin >> a;
	cout << "��(minute) �Է�: ";
	cin >> b;
	cout << "��(second) �Է�: ";
	cin >> c;
}
int ConvertSecond::getResult() {
	return a * 3600 + b * 60 + c;
}

int main(){ 
	ConvertSecond a;
	a.setData();
	cout << "�Է��Ͻ� �ð��� �� " << a.getResult() << " �� �Դϴ�." << endl;

	ConvertSecond b;
	cout << "�⺻ �ð��� �� " << b.getResult() << " ���Դϴ�." << endl;
}
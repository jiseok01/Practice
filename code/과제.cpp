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
	cout << "시(hour) 입력: ";
	cin >> a;
	cout << "분(minute) 입력: ";
	cin >> b;
	cout << "초(second) 입력: ";
	cin >> c;
}
int ConvertSecond::getResult() {
	return a * 3600 + b * 60 + c;
}

int main(){ 
	ConvertSecond a;
	a.setData();
	cout << "입력하신 시간은 총 " << a.getResult() << " 초 입니다." << endl;

	ConvertSecond b;
	cout << "기본 시간은 총 " << b.getResult() << " 초입니다." << endl;
}
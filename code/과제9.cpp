#include <iostream>
#include <cmath>

using namespace std;

class Line {
public:	
	int sx, sy;
	int ex, ey;
	void setTwoPoints() {
		cout << "������ ��ǥ ���� �� ���� �Է��ϼ���.";
		cin >> sx >> sy;
		cout << "���� ��ǥ ���� �� ���� �Է��ϼ���.";
		cin >> ex >> ey;
	}
	double getLineLength() {
		return sqrt(pow(ex - sx, 2) + pow(ey - sy, 2));
	}
};

int main() {
	Line myline;
	myline.setTwoPoints();
	cout << "myline�� ���̴� " << myline.getLineLength() << " �Դϴ�. \n";
}
#include <iostream>
#include <cmath>

using namespace std;

struct Line { 
	int sx, sy; 
	int ex, ey; 
};

int main() { 
	Line myline; 
	cout << "������ ��ǥ ���� �� ���� �Է��ϼ���.";
	cin >> myline.sx >> myline.sy; 
	cout << "���� ��ǥ ���� �� ���� �Է��ϼ���."; 
	cin >> myline.ex >> myline.ey; 
	double d = sqrt(pow(myline.ex - myline.sx, 2) + pow(myline.ey - myline.sy, 2));
	cout << "myline�� ���̴� " << d << " �Դϴ�."; 
}
// 5_lamda12
// 멤버 변수 캡쳐

#include <iostream>
using namespace std;

class Test {
	int base;

public:
	Test(int n) : base(n) {

	}

	void foo() {
		// 멤버 변수인 base를 캡쳐 하려면?
		// X auto f = [base]() { cout << base << endl; };

		// 참조 캡쳐는 아니지만 포인터를 값으로 했으므로 변경가능.
		auto f = [this]() { base = 200; cout << base << endl; };
		f();
	}
};

int main() {
	Test t(20);
	t.foo();
}
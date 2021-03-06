// 6_완벽한 전달자 - Perfect Forwarding
#include <iostream>
using namespace std;

void foo(int a) { cout << "foo" << endl;  }
void goo(int& a) { cout << "goo" << endl; a = 20; }

template<typename F, typename T>
void HowLong(F f, const T& a) {
	f(a);
}

int main() {
	int n = 0;
	// 아래 2가지 경우를 모두 완벽하게 전달하는 HowLong을 만들수 없을까????????
	// 상수도 전달하고, 참조로도 전달가능하게!!
	HowLong(foo, 0);
	HowLong(goo, n);

	cout << n << endl; 
}

/*
int main() {
	int n = 0;
	foo(0);
	goo(n);
	cout << n << endl; // 20
}
*/

// 1_template_basic2.cpp

template<typename T> T square(T a) {
	return a * a;
}

int main(){
	short s = 3;

	square(3); // int 버전
	// square(s); // short 버전
	square<int>(s);
}

// VC++ Command Prompt 실행 : cl 1_template_basic2.cpp /FAs
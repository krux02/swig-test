#pragma once

int foo(int a, int b);

class MyClass {
	int a,b,c;
public:
	MyClass(int a, int b, int c): a(a),b(b),c(c) {}
	int foo() {
		return (a+b)*c;
	}
	int bar() {
		return a*(b+c);
	}
};

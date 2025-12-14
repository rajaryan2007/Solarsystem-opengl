#pragma once
#include <vector>

class Shape {
public:
	void circle();
	void square();
	void object();
	void image();
	void mesh();

private:
	unsigned VBO=0, VAO=0;
	
};


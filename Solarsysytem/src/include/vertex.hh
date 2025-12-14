#pragma once

#include "../glad/include/glad/glad.h"


class VertexArray {
public:
	VertexArray();
	~VertexArray();
	void bind();
	void unbind();

	
	void addAttrib(GLuint index,GLint size,GLsizei stride,GLuint offset);
private:
	unsigned int m_ID;
};


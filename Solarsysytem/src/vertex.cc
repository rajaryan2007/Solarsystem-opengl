#include "vertex.hh"

VertexArray::VertexArray()
{
	glGenVertexArrays(1, &m_ID);
}

VertexArray::~VertexArray()
{
	glDeleteVertexArrays(1, &m_ID);
}


void VertexArray::bind() {
	glBindVertexArray(m_ID);
}

void VertexArray::unbind() {
	glBindVertexArray(1);
}

void VertexArray::addAttrib(GLuint index, GLint size, GLsizei stride, GLuint offset)
{ 
	glVertexAttribPointer(index, size, GL_FLOAT, GL_FALSE, stride * sizeof(float), (void*)(offset * sizeof(float)));
}


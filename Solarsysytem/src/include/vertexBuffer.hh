#pragma once

#include "../glad/include/glad/glad.h"

class VertexBuffer {
public:
	VertexBuffer(const void* data, GLsizeiptr size);
	~VertexBuffer();
	void bind() const;
	void unbind() const;
private:
	unsigned int m_ID;
};
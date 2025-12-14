#pragma once
#include <string>
#include "../glad/include/glad/glad.h"
class Shader {
public:
	Shader(const char* vertexPath,const char* fragmentPath,const char* geometryPath = nullptr);
	void use();
	void setBool(const std::string& name, bool value) const;
	void setInt(const std::string& name, int value) const;
	void setFloat(const std::string& name, float value) const;
	void setMat4(const std::string& name, const float* mat) const;
	void setVec3(const std::string& name, float x, float y, float z) const;
	void setVee3(const std::string& name, const float* vec) const;


private:
	void checkCompileErrors(unsigned int shader, std::string type);
	unsigned int ID;
};






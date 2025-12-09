#pragma once
#include <string>

class Layer {
public:
	Layer(const std::string& name) :m_Name(name) {}
	virtual ~Layer() {}

	virtual void OnAttach() {}
	virtual void OnDetach() {}
	virtual void OnUpdate(float dt) {}

	const std::string& GetName() const { return m_Name; }

private:
	std::string m_Name;

};


#include "shape.hh"
#include <vector>
#include "glm/matrix.hpp"

void Shape::circle() {
    std::vector<float> vertices;

    double PI = 3.14159265;
    int segment = 100;
    float radius = 3.5f;

    for (int i = 0; i < segment; i++) {
        float theta = 2.0f * PI * float(i) / float(segment);

        float x = radius * cos(theta);
        float y = radius * sin(theta);

        vertices.push_back(x);
        vertices.push_back(y);
        vertices.push_back(0.0f);
    }

}
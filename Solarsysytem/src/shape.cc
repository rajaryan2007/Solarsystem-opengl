#include "shape.hh"
#include <vector>

void Shape::circle() {
    std::vector<float> vertices;

    int M_PI = 3.14159265;
    int segment = 100;
    float radius = 3.5f;

    for (int i = 0; i < segment; i++) {
        float theta = 2.0f * M_PI * float(i) / float(segment);

        float x = radius * cos(theta);
        float y = radius * sin(theta);

        vertices.push_back(x);
        vertices.push_back(y);
        vertices.push_back(0.0f);
    }

}
#include <iostream>

void helloWorld();

int main() {
    helloWorld();
}

void helloWorld() {
    const int imageWidth = 256;
    const int imageHeight = 256;
    const double scale = 255.999;

    std::cout << "P3\n" << imageWidth << ' ' << imageHeight << "\n255\n";

    for (int j = 0; j < imageHeight; j++) {
        for (int i = 0; i < imageWidth; i++) {
            auto r = double(i) / (imageWidth - 1);
            auto g = double(j) / (imageHeight - 1);
            auto b = 0.0;

            int ir = int(scale * r);
            int ig = int(scale * g);
            int ib = int(scale * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
}

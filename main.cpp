#include <cmath>
#include <iostream>

float rad2deg(const float &angle) { return angle * (180.0 / M_PI); }
float deg2rad(const float &angle) { return angle * (M_PI / 180.0); }

// Step size in degrees
float step_size = 1;

// center angle in degrees
float theta = 0;

// Radius of circle to be tracked (in meters)
const float radius = 1;

const float center_x = 0;
const float center_y = 0;

int main() {

  // Automatic degree2radian conversions
  theta = deg2rad(theta);
  step_size = deg2rad(step_size);

  for (int i = 0; i < 361; i++) {

    // COmpute x,y coordinates
    std::cout << "Timestep:" << i << '\n';
    std::cout << "x: " << center_x + radius * cos(theta) << '\n';
    std::cout << "y: " << center_y + radius * sin(theta) << '\n';

    theta += step_size;
    std::cout << std::endl;
  }
}

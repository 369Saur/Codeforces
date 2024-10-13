#include <stdio.h>
#include <graphics.h>

// Function to plot a point
void plot(int x, int y) {
    putpixel(x, y, WHITE);
}

// Function to draw a line using DDA algorithm
void drawLineDDA(int x1, int y1, int x2, int y2) {
    // Calculate the differences in x and y coordinates
    float dx = x2 - x1;
    float dy = y2 - y1;

    // Calculate steps required for generating pixels
    int steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);

    // Calculate increment in x and y for each step
    float Xinc = dx / (float) steps;
    float Yinc = dy / (float) steps;

    // Initialize starting point
    float X = x1;
    float Y = y1;

    // Plot initial point
    plot(X, Y);

    // Plot intermediate points using DDA
    for (int i = 0; i < steps; i++) {
        X += Xinc;
        Y += Yinc;
        plot(round(X), round(Y));
    }
}

int main() {
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Define coordinates of the line
    int x1 = 100, y1 = 100, x2 = 400, y2 = 300;

    // Draw the line using DDA algorithm
    drawLineDDA(x1, y1, x2, y2);

    // Wait for a key press
    getch();

    // Close graphics mode
    closegraph();

    return 0;
}

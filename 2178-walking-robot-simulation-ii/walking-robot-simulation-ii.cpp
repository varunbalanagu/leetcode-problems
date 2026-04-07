class Robot {
public:
    int w, h;
    int x, y;       // current position
    int dir;        // 0=East, 1=North, 2=West, 3=South
    int perimeter;

    Robot(int width, int height) {
        w = width;
        h = height;
        x = 0;
        y = 0;
        dir = 0; // East
        perimeter = 2 * (w + h - 2);
    }
    
    void step(int num) {
        if (perimeter == 0) return;

        num %= perimeter;

        // Special case: full cycle
        if (num == 0) {
            if (x == 0 && y == 0) {
                dir = 3; // South
            }
            return;
        }

        while (num--) {
            // Try moving forward
            int nx = x, ny = y;

            if (dir == 0) nx++;       // East
            else if (dir == 1) ny++;  // North
            else if (dir == 2) nx--;  // West
            else ny--;                // South

            // Check bounds
            if (nx >= 0 && nx < w && ny >= 0 && ny < h) {
                x = nx;
                y = ny;
            } else {
                // turn counterclockwise
                dir = (dir + 1) % 4;
                num++; // retry this step
            }
        }
    }
    
    vector<int> getPos() {
        return {x, y};
    }
    
    string getDir() {
        if (dir == 0) return "East";
        if (dir == 1) return "North";
        if (dir == 2) return "West";
        return "South";
    }
};
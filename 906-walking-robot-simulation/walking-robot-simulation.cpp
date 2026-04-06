#include <iostream>
#include <vector>
#include <unordered_set>
#include <set>

using namespace std;

class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        // Directions array to handle movements (north, east, south, west)
        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int x = 0, y = 0; // Initial position
        int d = 0;        // Initial direction (north)
        set<pair<int, int>> obstacleSet;
        
        // Insert obstacles into a set for O(1) lookup
        for (const auto& obs : obstacles) {
            obstacleSet.insert({obs[0], obs[1]});
        }
        
        int maxDistance = 0; // To track the maximum distance squared

        for (int cmd : commands) {
            if (cmd == -1) { // Turn right
                d = (d + 1) % 4;
            } else if (cmd == -2) { // Turn left
                d = (d + 3) % 4; // (d - 1) % 4 safely without negative modulus
            } else { // Move forward
                for (int step = 0; step < cmd; ++step) {
                    int newX = x + directions[d].first;
                    int newY = y + directions[d].second;
                    
                    // Check if the new position is an obstacle
                    if (obstacleSet.find({newX, newY}) == obstacleSet.end()) {
                        x = newX;
                        y = newY;
                        // Update max distance squared
                        maxDistance = max(maxDistance, x * x + y * y);
                    } else {
                        // Stop movement if an obstacle is encountered
                        break;
                    }
                }
            }
        }
        
        return maxDistance;
    }
};
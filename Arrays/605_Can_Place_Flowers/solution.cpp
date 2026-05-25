#include <vector>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();
        
        for (int i = 0; i < size; i++) {
            // Check if the current plot is empty
            if (flowerbed[i] == 0) {
                // Check if the left and right plots are empty (or out of bounds)
                bool emptyLeft = (i == 0) || (flowerbed[i - 1] == 0);
                bool emptyRight = (i == size - 1) || (flowerbed[i + 1] == 0);
                
                if (emptyLeft && emptyRight) {
                    // Plant a flower here
                    flowerbed[i] = 1; 
                    count++;
                    
                    // Early exit if we've planted enough flowers
                    if (count >= n) {
                        return true;
                    }
                }
            }
        }
        
        return count >= n;
    }
};

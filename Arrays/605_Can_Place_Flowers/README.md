## [605. Can Place Flowers](https://leetcode.com/problems/can-place-flowers/)

**Difficulty:** Easy
**Topics:** Array, Greedy

### Problem Statement
You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array `flowerbed` containing `0`'s and `1`'s, where `0` means empty and `1` means not empty, and an integer `n`, return `true` if `n` new flowers can be planted in the `flowerbed` without violating the no-adjacent-flowers rule and `false` otherwise.

### Approach: Greedy
* Traverse the array and look for sequences of empty plots (`0`).
* A flower can be planted at index `i` if `flowerbed[i] == 0`, and both its left and right neighbors are also `0` (or out of bounds).
* Plant a flower by changing the `0` to a `1` and decrement the count of `n`.
* Return `true` if `n` reaches 0 or below.

### Complexity
* **Time Complexity:** $O(N)$ where $N$ is the length of the flowerbed.
* **Space Complexity:** $O(1)$ since we are modifying the array in-place.

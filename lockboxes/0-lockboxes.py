#!/usr/bin/python3

"""You have n number of locked boxes in front of you. Each box is numbered
sequentially from 0 to n - 1 and each box may contain keys to the other boxes.

Write a method that determines if all the boxes can be opened.
"""

from collections import deque


def canUnlockAll(boxes):
    """
    Determines if all boxes can be unlocked.

    Parameters:
        boxes (list of list of int): A list of lists where each sublist
        contains keys to other boxes.

    Returns:
        bool: True if all boxes can be opened, else False.
    """
    n = len(boxes)  # Number of boxes
    unlocked = [False] * n  # Keep track of which boxes are unlocked
    unlocked[0] = True  # We can always open the first box
    queue = deque([0])  # Start with the first box in the queue

    while queue:
        box = queue.popleft()  # Get the current box
        # Iterate over all the keys in the current box
        for key in boxes[box]:
            if key < n and not unlocked[key]:
                # Check the box to unlock is within range and not yet unlocked
                unlocked[key] = True  # Mark the box as unlocked
                queue.append(key)  # Add the newly unlocked box to the queue

    return all(unlocked)  # Check if all boxes are unlocked

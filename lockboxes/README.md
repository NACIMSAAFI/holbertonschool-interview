# Lockboxes Project

## Overview

The **Lockboxes** project is an algorithmic challenge that involves determining whether all locked boxes can be opened given a specific set of keys. Each box may contain keys to other boxes, and the objective is to verify if it's possible to unlock all boxes starting from the first one.

## Problem Statement

You have `n` number of locked boxes in front of you. Each box is numbered sequentially from `0` to `n - 1`, and each box may contain keys to the other boxes. The first box (`boxes[0]`) is unlocked, and your task is to determine if all the boxes can be opened.

### Function Prototype

```python
def canUnlockAll(boxes):
    """
    Determines if all boxes can be unlocked.

    Parameters:
        boxes (list of list of int): A list of lists where each sublist contains keys to other boxes.

    Returns:
        bool: True if all boxes can be opened, else False.
    """

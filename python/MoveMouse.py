import pyautogui
import time
import random
import math

def human_like_mouse_movement():
    # Define the distance in pixels (assuming 1 cm is approx. 37.795276 pixels)
    distance_in_cm = 2
    distance_in_pixels = distance_in_cm * 37.795276

    while True:
        # Generate a random angle for the direction of movement
        angle = random.uniform(0, 2 * math.pi)
        x_distance = distance_in_pixels * math.cos(angle)
        y_distance = distance_in_pixels * math.sin(angle)

        # Number of steps for smooth movement
        steps = 20

        for step in range(steps):
            # Calculate a curved path using a sine function
            fraction = (math.sin((math.pi / steps) * step - math.pi/2) + 1) / 2
            x_move = x_distance * fraction
            y_move = y_distance * fraction

            # Move the mouse relative to its current position
            pyautogui.moveRel(x_move, y_move, duration=0.01)

        # Short pause to mimic human stopping movement
        time.sleep(0.1)

# To run this function, simply call human_like_mouse_movement()
# Note: This function will run indefinitely until manually stopped.

human_like_mouse_movement()
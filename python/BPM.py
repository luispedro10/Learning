import time
import tkinter as tk
from tkinter import ttk

class BPMCounterApp:
    def __init__(self, root):
        self.root = root
        self.root.title("BPM Counter")
        
        self.times = []
        self.max_samples = 10
        self.bpm_label = ttk.Label(self.root, text="BPM: --", font=('Arial', 20))
        self.bpm_label.pack(pady=20)

        self.click_button = ttk.Button(self.root, text="Click to Beat", command=self.register_beat)
        self.click_button.pack(pady=10)

    def register_beat(self):
        timestamp = time.time()
        if len(self.times) >= self.max_samples:
            self.times.pop(0)
        self.times.append(timestamp)

        if len(self.times) > 1:
            bpm = self.calculate_bpm()
            self.bpm_label['text'] = f"BPM: {bpm:.2f}"

    def calculate_bpm(self):
        intervals = [self.times[i] - self.times[i - 1] for i in range(1, len(self.times))]
        average_interval = sum(intervals) / len(intervals)
        bpm = 60 / average_interval
        return bpm

if __name__ == "__main__":
    root = tk.Tk()
    app = BPMCounterApp(root)
    root.mainloop()

import os
import time
for i in range(1, 30):
    os.remove(f"c_program_{i}.exe")
    time.sleep(1)
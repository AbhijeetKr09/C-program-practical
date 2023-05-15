import os
import time
for i in range(1, 30):
    try:
        os.remove(f"c_program_{i}.exe")
    except:
        continue
    time.sleep(1)
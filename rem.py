import os
import time
for i in range(1, 31):
    try:
        os.remove(f"c_program_30.exe")
    except:
        continue
    time.sleep(1)
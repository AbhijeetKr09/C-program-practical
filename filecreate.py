with open("basic_syntax.txt", "r") as f:
   syntax = f.read()
for i in range(30 , 31):
    with open(f"c_program_{i}.c", "w") as f:
        f.write(syntax)

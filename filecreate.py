with open("basic_syntax.txt", "r") as f:
   syntax = f.read()
for i in range(7, 30):
    with open(f"{i}_c_program.c", "w") as f:
        f.write(syntax)

nasm -f win64 mco2asm.asm
gcc -c mco2c.c -o cfile.obj -m64
gcc cfile.obj mco2asm.obj -o mco2.exe -m64
mco2.exe
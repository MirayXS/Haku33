@echo off

set /p IP=<C:/My-Switch-ip.txt

dir /b *.nro>%temp%\filete.txt
set /p File=<%temp%\filete.txt
del "%temp%\filete.txt"
title -%IP% - %File%
make clean
make -j7 
set a=%errorlevel%
echo ------------------------------------------
if %a% neq 0 color 04
if %a% equ 0 color 0a

echo -----------------------------------
"C:\devkitPro\tools\bin\nxlink.exe" %File%
%systemroot%\system32\timeout.exe 55


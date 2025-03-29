@echo off
:: Deletes all .exe files in D:\DSA and its subdirectories
echo Deleting all .exe files in D:\DSA...
del /S /Q "D:\DSA\*.exe"

:: Confirmation message
echo ===============================================
echo              Deletion completed
echo ===============================================
pause

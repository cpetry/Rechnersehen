set string=%1
set string=%string:~1,-2%

echo Bibliotheken "%~dp0*.dll" 
echo werden nach "%string%" kopiert
start /min xcopy "%~dp0Qt5\*.dll" "%string%" /y
start /min xcopy "%~dp0Qt5\platforms\*.dll" "%string%/platforms" /i /e /y

echo AppIcon wird "%string%" kopiert
start /min xcopy "%~dp0_resources\AppIcon.png" "%string%" /y
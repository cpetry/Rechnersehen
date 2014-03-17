REM Use like this: create_moc_from_h_file "<Path from current directoy to h-file>" "<Path from current directoy to new moc-file>"
REM @echo off

set FILE1=%1
set FILE1=%FILE1:~1%
set FILE1="%~dp0%FILE1%

set FILE2=%2
set FILE2=%FILE2:~1%
set FILE2="%~dp0%FILE2%

FOR %%i IN (%FILE1%) DO SET DATE1=%%~ti
FOR %%i IN (%FILE2%) DO SET DATE2=%%~ti

REM year month day hours minutes
set "sdate1=%DATE1:~6,4%%DATE1:~3,2%%DATE1:~0,2%%DATE1:~11,2%%DATE1:~-2%"
set "sdate2=%DATE2:~6,4%%DATE2:~3,2%%DATE2:~0,2%%DATE2:~11,2%%DATE2:~-2%"

REM ECHO file1 %FILE1%
REM ECHO %sdate1%
REM ECHO file2 %FILE2%
REM ECHO %sdate2%

IF "%sdate2%" GEQ "%sdate1%" (ECHO Moc-File is up to date && GOTO :END)

ECHO Generating moc-file


"%~dp0Qt5\moc.exe" %FILE1% -o %FILE2%

:END
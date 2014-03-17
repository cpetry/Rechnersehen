@echo off
call "%~dp0create_moc_from_h_files.bat" "JpegEncoder\header\ppmFileThread.h" "JpegEncoder\src\moc_ppmFileThread.cpp"
call "%~dp0create_moc_from_h_files.bat" "JpegEncoder\header\encodeThread.h" "JpegEncoder\src\moc_encodeThread.cpp"


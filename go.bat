@echo off
echo.
if %1! == ! goto Hilfe
TASM -48 -fff -a -b -h -lal -y -s %1 %~n1.bin

goto x

:hilfe
echo ##############################################
echo # Datei zum Starten des Assemblers TASM.     #
echo #                                            #
echo # Format: go.bat sourcefile                  #
echo ##############################################
:x
echo.


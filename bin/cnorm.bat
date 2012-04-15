@echo off
if "%CNORM_PATH%" EQU "" goto error

:exec
codeworker -nologo -script "%CNORM_PATH%\src\cnorm.cws" -args %*
goto quit

:error
echo Vous devez configurer CNORM_PATH dans votre environement

:quit

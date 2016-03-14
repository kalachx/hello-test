@ECHO OFF
:Loop
IF "%1"=="" GOTO Continue
  if "%1"=="_" GOTO Got_
   echo %1
SHIFT
GOTO Loop

:Got_
  SHIFT
  SHIFT
  GOTO %0

:Test1
echo tst1
goto Continue

:Test2
echo tst2
goto Loop

:Continue
echo zakonczono!


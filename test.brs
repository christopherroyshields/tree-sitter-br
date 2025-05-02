close #10, drop, release:
close #10, free, release:

def library fntest

library release, nofiles,  "libfile": fnfoo

print fields f$: x

! delete rec
delEte #10, rec=100:

! delete key
delete #10, key="A0001234":

do while x==1
do until y = 0

chain "program", a,b,c,d$

if test then

for i = 0 to 8 step 2

00290    INPUT MENU TEXT: MAT M$ ! Rereads text only
00300    INPUT MENU DATA: MAT PGM$
00310    INPUT MENU STATUS: MAT STATUS$

00140 INPUT #11,WAIT=30:X$ TIMEOUT 100
input fields mat f$, attr "test", wait=10: a$

00120 LINPUT WAIT=10:X$ TIMEOUT 100
00120 LINPUT #10,WAIT=10:X$ TIMEOUT 100

loop while x > 1
loop until y < 5

! on fnkey goto 100

00300 INPUT FIELDS MAT FIELD$, HELP "XXXX2;Pay Frequencies: \n W - Weekly\n B - Biweekly;":MAT RECORD$
input fields mat f$, wait=10, help "test": a$
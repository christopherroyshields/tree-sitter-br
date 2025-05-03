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

restore #10, pos=1:
restore #10, rec=1:

restore #10, search="test":
restore #10, search>="test":

def library fntest(a,b,c)
def libfoo fntest(a,b,c) ! weird keyword quirk

open #1: "name=test", internal, input, keyed
open #1: "name=test", internal, input, sequential
open #1: "name=test", internal, input, relative
open #1: "name=test", internal, output, relative
open #1: "name=test", internal, outin, relative
open #1: "name=test", external, outin, relative
open #1: "name=test", external, outin, relative

input fields mat f$, attr "test", wait=10: a$

print #1,using a: x

00010 OPTION INVP !invp
on error ignore !ignore
on error system !system
on test goto 100,200 none 300 ! none
option base 0! base
option collate alternate! collate alternate
option collate native! native
option retain! retain
print #1,using a: x! using
print border test$: "test" ! border
print fields f$: x! fields
read #10, link="test": a! link
read #10, first: a! link ! first
read #10, last: a! last
read #10, prior: a! prior
read #10, next: a! next
read #10, same: a! same
read #10, keyonly: a! keyonly
read #10, pos=1: a! pos
read #10, rec=1: a! rec
read #10, key="testkey": a! key
read #10, key>="testkey": a! key
read #10, search="testkey": a! search
read #10, key="testkey", release: a! release
read #10, key="testkey", reserve: a! reserve
read #10, using form$, key="testkey", reserve: a! using
trace on ! on
trace off ! off
trace print ! print

00900 CHAIN "C:\GLPROG\GLEDIT" ,FILES,D$
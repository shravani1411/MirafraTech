/* To perform power of 2 */

LDA 4000h
MVI C 08h
MVI B 00h
LOOP: RAR
JNC LOOP1
INR B
LOOP1: DCR C
JNZ LOOP
MOV A B
MVI B 01h
CMP B
JNZ LOOP2
MVI A 22h
STA 6000h
HLT
LOOP2: MVI A 11h
STA 6000h
HLT


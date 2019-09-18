format MS COFF

include 'C:\Users\Александр\Desktop\СППО\fasmw17121\INCLUDE\win32a.inc'


section '.data' data readable writable
;-----------------------------------------------------
proc cos12 x,y
  xor eax,eax
    mov eax,[x]
    idiv [y] ;x/y
    mov[x],eax
    fld [x]
    fcos ;cos(x/y)
    xor eax,eax
    fstp [x];результат в ах
    adc [x],4
    fld [x]
    fsqrt
    fstp [x]
   mov eax,[x]
  pop	  esi edi ebx
  ret
endp
;-----------------------------------------------------

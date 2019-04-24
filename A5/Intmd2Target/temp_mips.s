
sahib:
li $t0, 2
sw $t0, int.temp_0
li $t0, 1
sw $t0, int.temp_1
li $t0, 1
sw $t0, int.temp_2
lw $t0, int.temp_1
sw $t0, int.temp_3
lw $t1, int.temp_3
li $t2, 3
mul $t0, $t1, $t2
sw $t0, int.temp_3
lw $t1, int.temp_3
lw $t2, int.temp_2
add $t0, $t1, $t2
sw $t0, int.temp_3
lw $t3, int.temp_3
la $t4, int.b.2.sahib
li $t5, 4
mul $t3, $t3, $t5
add $t4, $t4, $t3
lw $t0, int.temp_0
sw $t0, 0($t4)
li $t0, 3
sw $t0, int.temp_4
li $t0, 1
sw $t0, int.temp_5
li $t0, 1
sw $t0, int.temp_6
li $t0, 1
sw $t0, int.temp_7
lw $t0, int.temp_5
sw $t0, int.temp_8
lw $t1, int.temp_8
li $t2, 2
mul $t0, $t1, $t2
sw $t0, int.temp_8
lw $t1, int.temp_8
lw $t2, int.temp_6
add $t0, $t1, $t2
sw $t0, int.temp_8
lw $t1, int.temp_8
li $t2, 2
mul $t0, $t1, $t2
sw $t0, int.temp_8
lw $t1, int.temp_8
lw $t2, int.temp_7
add $t0, $t1, $t2
sw $t0, int.temp_8
lw $t3, int.temp_8
la $t4, int.arr.2.sahib
li $t5, 4
mul $t3, $t3, $t5
add $t4, $t4, $t3
lw $t0, int.temp_4
sw $t0, 0($t4)
li $t0, 1
sw $t0, int.temp_9
li $t0, 1
sw $t0, int.temp_10
lw $t0, int.temp_9
sw $t0, int.temp_11
lw $t1, int.temp_11
li $t2, 3
mul $t0, $t1, $t2
sw $t0, int.temp_11
lw $t1, int.temp_11
lw $t2, int.temp_10
add $t0, $t1, $t2
sw $t0, int.temp_11
lw $t3, int.temp_11
la $t4, int.b.2.sahib
li $t5, 4
mul $t3, $t3, $t5
add $t4, $t4, $t3
lw $t0, 0($t4)
sw $t0, int.temp_12
li $t0, 0
sw $t0, int.temp_13
li $t0, 0
sw $t0, int.temp_14
li $t0, 0
sw $t0, int.temp_15
lw $t0, int.temp_13
sw $t0, int.temp_16
lw $t1, int.temp_16
li $t2, 2
mul $t0, $t1, $t2
sw $t0, int.temp_16
lw $t1, int.temp_16
lw $t2, int.temp_14
add $t0, $t1, $t2
sw $t0, int.temp_16
lw $t1, int.temp_16
li $t2, 2
mul $t0, $t1, $t2
sw $t0, int.temp_16
lw $t1, int.temp_16
lw $t2, int.temp_15
add $t0, $t1, $t2
sw $t0, int.temp_16
lw $t3, int.temp_16
la $t4, int.arr.2.sahib
li $t5, 4
mul $t3, $t3, $t5
add $t4, $t4, $t3
lw $t0, int.temp_12
sw $t0, 0($t4)
li $t0, 0
sw $t0, int.temp_17
li $t0, 0
sw $t0, int.temp_18
li $t0, 0
sw $t0, int.temp_19
lw $t0, int.temp_17
sw $t0, int.temp_20
lw $t1, int.temp_20
li $t2, 2
mul $t0, $t1, $t2
sw $t0, int.temp_20
lw $t1, int.temp_20
lw $t2, int.temp_18
add $t0, $t1, $t2
sw $t0, int.temp_20
lw $t1, int.temp_20
li $t2, 2
mul $t0, $t1, $t2
sw $t0, int.temp_20
lw $t1, int.temp_20
lw $t2, int.temp_19
add $t0, $t1, $t2
sw $t0, int.temp_20
lw $t3, int.temp_20
la $t4, int.arr.2.sahib
li $t5, 4
mul $t3, $t3, $t5
add $t4, $t4, $t3
lw $t0, 0($t4)
sw $t0, int.temp_21
lw $s7, int.temp_21
jr $ra
jr $ra

void_func:
label_0:
li $t0, 1
sw $t0, int.temp_22
lw $t0 int.temp_22
bne $t0, 0 label_1
b label_2
label_1:
lw $t1, int.k.0
li $t2, 1
sub $t0, $t1, $t2
sw $t0, int.k.0
li $t0, 10
sw $t0, int.temp_24
lw $t1, int.k.0
lw $t2, int.temp_24
li $t0, 0
seq $t0, $t1, $t2
sw $t0, int.temp_23
lw $t0 int.temp_23
bne $t0, 0 label_3
b label_4
label_3:
b label_2
label_4:
b label_0
label_2:
jr $ra

func1:
sw $s0, int.a.1.func1
sw $s1, int.b.1.func1
lw $t1, int.b.1.func1
li $t2, 1
add $t0, $t1, $t2
sw $t0, int.b.1.func1
li $t0, 0
sw $t0, int.temp_25
lw $s7, int.temp_25
jr $ra
jr $ra

func2:
sw $s0, int.c.1.func2
lw $t0, int.c.1.func2
sw $t0, int.s.2.func2
li $t0, 0
sw $t0, int.temp_26
lw $t1, int.c.1.func2
lw $t2, int.temp_26
li $t0, 0
seq $t0, $t1, $t2
sw $t0, int.temp_27
lw $t0 int.temp_27
bne $t0, 0 label_6
b label_7
label_6:
addi $sp, $sp, -4
sw $ra, 0($sp)
jal void_func
lw $ra, 0($sp)
addi $sp, $sp, 4
lw $s7, int.c.1.func2
jr $ra
b label_5
label_7:
li $t0, 1
sw $t0, int.temp_28
lw $t1, int.c.1.func2
lw $t2, int.temp_28
li $t0, 0
seq $t0, $t1, $t2
sw $t0, int.temp_29
lw $t0 int.temp_29
bne $t0, 0 label_8
b label_9
label_8:
li $t0, 1
sw $t0, int.temp_31
lw $t1, int.c.1.func2
lw $t2, int.temp_31
add $t0, $t1, $t2
sw $t0, int.temp_30
lw $s7, int.temp_30
jr $ra
b label_5
label_9:
b label_5
label_5:
jr $ra

main:
li $t0, 25
sw $t0, int.temp_32
lw $t0, int.temp_32
sw $t0, int.k.0
li $t0, 10
sw $t0, int.temp_33
lw $t0, int.temp_33
sw $t0, int.l.0
li $t0, 3
sw $t0, int.temp_34
lw $t0, int.temp_34
sw $t0, int.a.1
li $t0, 5
sw $t0, int.temp_35
lw $t0, int.temp_35
sw $t0, int.b.1
lw $t1, int.a.1
lw $t2, int.b.1
mul $t0, $t1, $t2
sw $t0, int.temp_36
lw $t0, int.temp_36
sw $t0, int.c.1
li $t0, 0
sw $t0, int.temp_37
lw $t0, int.temp_37
sw $t0, int.d.1
li $t0, 3
sw $t0, int.temp_39
lw $t1, int.a.1
lw $t2, int.temp_39
li $t0, 0
seq $t0, $t1, $t2
sw $t0, int.temp_38
lw $t1, int.temp_38
li $t2, 0
li $t0, 0
sgt $t0, $t1, $t2
sw $t0, int.temp_40
lw $t0 int.temp_40
bne $t0, 0 label_12
b label_13
label_12:
li $t0, 5
sw $t0, int.temp_42
lw $t1, int.b.1
lw $t2, int.temp_42
li $t0, 0
seq $t0, $t1, $t2
sw $t0, int.temp_41
lw $t1, int.temp_41
li $t2, 0
li $t0, 0
sgt $t0, $t1, $t2
sw $t0, int.temp_43
lw $t0 int.temp_43
bne $t0, 0 label_14
b label_13
label_14:
li $t0, 1
sw $t0, int.temp_40
b label_15
label_13:
li $t0, 0
sw $t0, int.temp_40
label_15:
lw $t0 int.temp_40
bne $t0, 0 label_10
b label_11
label_10:
li $t0, 0
sw $t0, int.temp_44
lw $t0, int.temp_44
sw $t0, int.i.2
label_16:
lw $t1, int.i.2
lw $t2, int.c.1
li $t0, 0
slt $t0, $t1, $t2
sw $t0, int.temp_45
lw $t0 int.temp_45
bne $t0, 0 label_17
b label_18
label_17:
lw $t1, int.d.1
li $t2, 1
add $t0, $t1, $t2
sw $t0, int.d.1
label_19:
lw $t1, int.i.2
li $t2, 1
add $t0, $t1, $t2
sw $t0, int.i.2
b label_16
label_18:
label_11:
label_20:
lw $t1, int.c.1
lw $t2, int.d.1
li $t0, 0
seq $t0, $t1, $t2
sw $t0, int.temp_46
lw $t0 int.temp_46
bne $t0, 0 label_21
b label_22
label_21:
lw $t1, int.a.1
lw $t2, int.b.1
li $t0, 0
sgt $t0, $t1, $t2
sw $t0, int.temp_47
lw $t0 int.temp_47
bne $t0, 0 label_23
b label_24
label_23:
lw $t1, int.a.1
li $t2, 1
sub $t0, $t1, $t2
sw $t0, int.a.1
b label_25
label_24:
lw $t1, int.b.1
li $t2, 1
sub $t0, $t1, $t2
sw $t0, int.b.1
label_25:
lw $t1, int.a.1
lw $t2, int.b.1
li $t0, 0
seq $t0, $t1, $t2
sw $t0, int.temp_48
lw $t0 int.temp_48
bne $t0, 0 label_26
b label_27
label_26:
b label_22
label_27:
b label_20
label_22:
lw $s0, int.a.1
lw $s1, int.b.1
addi $sp, $sp, -4
sw $ra, 0($sp)
jal func1
lw $ra, 0($sp)
addi $sp, $sp, 4
sw $s7, int.temp_49
lw $t0, int.temp_49
sw $t0, int.r.1
lw $s0, int.r.1
addi $sp, $sp, -4
sw $ra, 0($sp)
jal func2
lw $ra, 0($sp)
addi $sp, $sp, 4
sw $s7, int.temp_50
li $t0, 1
sw $t0, int.temp_51
li $t0, 1
sw $t0, int.temp_52
li $t0, 1
sw $t0, int.temp_53
lw $t0, int.temp_51
sw $t0, int.temp_54
lw $t1, int.temp_54
li $t2, 2
mul $t0, $t1, $t2
sw $t0, int.temp_54
lw $t1, int.temp_54
lw $t2, int.temp_52
add $t0, $t1, $t2
sw $t0, int.temp_54
lw $t1, int.temp_54
li $t2, 2
mul $t0, $t1, $t2
sw $t0, int.temp_54
lw $t1, int.temp_54
lw $t2, int.temp_53
add $t0, $t1, $t2
sw $t0, int.temp_54
lw $t3, int.temp_54
la $t4, int.arr.1
li $t5, 4
mul $t3, $t3, $t5
add $t4, $t4, $t3
lw $t0, int.temp_50
sw $t0, 0($t4)
addi $sp, $sp, -4
sw $ra, 0($sp)
jal sahib
lw $ra, 0($sp)
addi $sp, $sp, 4
sw $s7, int.temp_55
lw $t0, int.temp_55
sw $t0, int.p.1
li $t0, 0
sw $t0, int.temp_57
lw $t1, int.r.1
lw $t2, int.temp_57
li $t0, 0
seq $t0, $t1, $t2
sw $t0, int.temp_56
lw $t1, int.temp_56
li $t2, 0
li $t0, 0
sle $t0, $t1, $t2
sw $t0, int.temp_58
lw $t0 int.temp_58
bne $t0, 0 label_30
b label_31
label_30:
li $t0, 0
sw $t0, int.temp_60
lw $t1, int.p.1
lw $t2, int.temp_60
li $t0, 0
seq $t0, $t1, $t2
sw $t0, int.temp_59
lw $t1, int.temp_59
li $t2, 0
li $t0, 0
sle $t0, $t1, $t2
sw $t0, int.temp_61
lw $t0 int.temp_61
bne $t0, 0 label_32
b label_31
label_32:
li $t0, 0
sw $t0, int.temp_58
b label_33
label_31:
li $t0, 1
sw $t0, int.temp_58
label_33:
lw $t0 int.temp_58
bne $t0, 0 label_28
b label_29
label_28:
li.s $f0, 3.200000
s.s $f0, float.temp_62
l.s $f0, float.temp_62
s.s $f0, float.q.2
l.s $f1, float.q.2
lw $t2, int.p.1
mtc1 $t2, $f2
cvt.s.w $f2, $f2
add.s $f0, $f1, $f2
s.s $f0, float.temp_63
l.s $f0, float.temp_63
s.s $f0, float.q.2
label_29:
li $t0, 12
sw $t0, int.temp_65
lw $t1, int.a.1
lw $t2, int.temp_65
add $t0, $t1, $t2
sw $t0, int.temp_64
lw $t0, int.temp_64
sw $t0, int.a.1
li $t0, 12
sw $t0, int.temp_67
lw $t1, int.b.1
lw $t2, int.temp_67
add $t0, $t1, $t2
sw $t0, int.temp_66
lw $t0, int.temp_66
sw $t0, int.b.1
li $t0, 12
sw $t0, int.temp_69
lw $t1, int.r.1
lw $t2, int.temp_69
add $t0, $t1, $t2
sw $t0, int.temp_68
lw $t0, int.temp_68
sw $t0, int.r.1
li $t0, 13
sw $t0, int.temp_71
lw $t1, int.p.1
lw $t2, int.temp_71
add $t0, $t1, $t2
sw $t0, int.temp_70
lw $t0, int.temp_70
sw $t0, int.p.1
li $t0, 1
sw $t0, int.temp_73
li $t0, 1
sw $t0, int.temp_74
li $t0, 1
sw $t0, int.temp_75
lw $t0, int.temp_73
sw $t0, int.temp_76
lw $t1, int.temp_76
li $t2, 2
mul $t0, $t1, $t2
sw $t0, int.temp_76
lw $t1, int.temp_76
lw $t2, int.temp_74
add $t0, $t1, $t2
sw $t0, int.temp_76
lw $t1, int.temp_76
li $t2, 2
mul $t0, $t1, $t2
sw $t0, int.temp_76
lw $t1, int.temp_76
lw $t2, int.temp_75
add $t0, $t1, $t2
sw $t0, int.temp_76
lw $t3, int.temp_76
la $t4, int.arr.1
li $t5, 4
mul $t3, $t3, $t5
add $t4, $t4, $t3
lw $t0, 0($t4)
sw $t0, int.temp_77
li $t0, 12
sw $t0, int.temp_78
lw $t1, int.temp_77
lw $t2, int.temp_78
add $t0, $t1, $t2
sw $t0, int.temp_72
li $t0, 1
sw $t0, int.temp_79
li $t0, 1
sw $t0, int.temp_80
li $t0, 1
sw $t0, int.temp_81
lw $t0, int.temp_79
sw $t0, int.temp_82
lw $t1, int.temp_82
li $t2, 2
mul $t0, $t1, $t2
sw $t0, int.temp_82
lw $t1, int.temp_82
lw $t2, int.temp_80
add $t0, $t1, $t2
sw $t0, int.temp_82
lw $t1, int.temp_82
li $t2, 2
mul $t0, $t1, $t2
sw $t0, int.temp_82
lw $t1, int.temp_82
lw $t2, int.temp_81
add $t0, $t1, $t2
sw $t0, int.temp_82
lw $t3, int.temp_82
la $t4, int.arr.1
li $t5, 4
mul $t3, $t3, $t5
add $t4, $t4, $t3
lw $t0, int.temp_72
sw $t0, 0($t4)
li $t0, 1
sw $t0, int.temp_83
li $t0, 1
sw $t0, int.temp_84
li $t0, 1
sw $t0, int.temp_85
lw $t0, int.temp_83
sw $t0, int.temp_86
lw $t1, int.temp_86
li $t2, 2
mul $t0, $t1, $t2
sw $t0, int.temp_86
lw $t1, int.temp_86
lw $t2, int.temp_84
add $t0, $t1, $t2
sw $t0, int.temp_86
lw $t1, int.temp_86
li $t2, 2
mul $t0, $t1, $t2
sw $t0, int.temp_86
lw $t1, int.temp_86
lw $t2, int.temp_85
add $t0, $t1, $t2
sw $t0, int.temp_86
lw $t3, int.temp_86
la $t4, int.arr.1
li $t5, 4
mul $t3, $t3, $t5
add $t4, $t4, $t3
lw $t0, 0($t4)
sw $t0, int.temp_87
lw $t0, int.temp_87
sw $t0, int.lo.1
li $t0, 10
sw $t0, int.temp_89
lw $t1, int.k.0
lw $t2, int.temp_89
sub $t0, $t1, $t2
sw $t0, int.temp_88
lw $t0, int.temp_88
sw $t0, int.k.0
li $t0, 5
sw $t0, int.temp_91
lw $t1, int.l.0
lw $t2, int.temp_91
add $t0, $t1, $t2
sw $t0, int.temp_90
lw $t0, int.temp_90
sw $t0, int.l.0
jr $ra

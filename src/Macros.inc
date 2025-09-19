
.MACRO table_start  base
	.SCOPE
	table_base = base
.ENDMACRO

.MACRO table  entry
	.BYTE entry - table_base
.ENDMACRO

.MACRO table_end
	.ENDSCOPE
.ENDMACRO

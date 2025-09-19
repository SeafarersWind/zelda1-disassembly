.MACRO const_reset
	const_value .SET 0
.ENDMACRO

.MACRO const_bit  const_name
	.IFNDEF const_value
		const_name = $00
		const_value .SET $01
	.ELSE
		const_name = const_value
		.IF const_value = $00
			const_value .SET $01
		.ELSEIF const_value < $80
			const_value .SET const_value << 1
		.ELSE
			const_value .SET $06
		.ENDIF
	.ENDIF
.ENDMACRO

const_reset
const_bit SONG_OFF        ; $00
const_bit SONG_OVERWORLD  ; $01
const_bit SONG_GANON      ; $02
const_bit SONG_ENDLEVEL   ; $04
const_bit SONG_ITEMTAKEN  ; $08
const_bit SONG_ENDING     ; $10
const_bit SONG_LASTLEVEL  ; $20
const_bit SONG_UNDERWORLD ; $40
const_bit SONG_DEMO       ; $80
const_bit SONG_ZELDA      ; $06

const_reset
const_bit TUNE0_OFF       ; $00
const_bit TUNE0_SHIELD    ; $01
const_bit TUNE0_HURT      ; $02
const_bit TUNE0_MAGIC     ; $04
const_bit TUNE0_KEY       ; $08
const_bit TUNE0_HEART     ; $10
const_bit TUNE0_BOMB      ; $20
const_bit TUNE0_LOWHEALTH ; $40
const_bit TUNE0_MUTESONG  ; $80

const_reset
const_bit TUNE1_OFF       ; $00
const_bit TUNE1_RUPEE     ; $01
const_bit TUNE1_APPEAR    ; $02
const_bit TUNE1_SECRET    ; $04
const_bit TUNE1_ITEM      ; $08
const_bit TUNE1_FLUTE     ; $10
const_bit TUNE1_KILL      ; $20
const_bit TUNE1_GAMEOVER  ; $40
const_bit TUNE1_DEATH     ; $80


.MACRO const  const_name
	const_name = const_value
	const_value .SET const_value + 1
.ENDMACRO

.MACRO constw  const_name
	const_name = const_value
	const_value .SET const_value + 2
.ENDMACRO

const_reset
constw NOTE_G7  ; $00
constw NOTE_C5  ; $02
constw NOTE_Cs2 ; $04
constw NOTE_Fs4 ; $06
constw NOTE     ; $08
constw NOTE_D2  ; $0A
constw NOTE_Ds2 ; $0C
constw NOTE_E2  ; $0E
constw NOTE_F2  ; $10
constw NOTE_Fs2 ; $12
constw NOTE_G2  ; $14
constw NOTE_Gs2 ; $16
constw NOTE_A2  ; $18
constw NOTE_As2 ; $1A
constw NOTE_B2  ; $1C
constw NOTE_C3  ; $1E
constw NOTE_Cs3 ; $20
constw NOTE_D3  ; $22
constw NOTE_Ds3 ; $24
constw NOTE_E3  ; $26
constw NOTE_F3  ; $28
constw NOTE_Fs3 ; $2A
constw NOTE_G3  ; $2C
constw NOTE_Gs3 ; $2E
constw NOTE_A3  ; $30
constw NOTE_As3 ; $32
constw NOTE_B3  ; $34
constw NOTE_C4  ; $36
constw NOTE_Cs4 ; $38
constw NOTE_D4  ; $3A
constw NOTE_Ds4 ; $3C
constw NOTE_E4  ; $3E
constw NOTE_F4  ; $40
constw NOTE_G4  ; $42
constw NOTE_Gs4 ; $44
constw NOTE_As4 ; $46
constw NOTE_A4  ; $48
constw NOTE_B4  ; $4A
constw NOTE_E5  ; $4C
constw NOTE_Cs5 ; $4E
constw NOTE_D5  ; $50
constw NOTE_Ds5 ; $52
constw NOTE_F5  ; $54
constw NOTE_G5  ; $56
constw NOTE_Gs5 ; $58
constw NOTE_A5  ; $5A
constw NOTE_B5  ; $5C
constw NOTE_Cs6 ; $5E
constw NOTE_Gs6 ; $60
constw NOTE_Ds1 ; $62
constw NOTE_E1  ; $64
constw NOTE_F1  ; $66
constw NOTE_Gs1 ; $68
constw NOTE_A1  ; $6A
constw NOTE_As1 ; $6C
constw NOTE_B1  ; $6E
constw NOTE_C1  ; $70

TUNE_VOLUME = $90
TUNE_ENVELOPE = $80
TUNE_END = $00

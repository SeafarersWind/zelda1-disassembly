.MACRO song  song_const_name
	.IFNDEF song_const
		song_const_name = $00
		song_const .SET $01
	.ELSE
		song_const_name = song_const
		.IF song_const < $80
			song_const .SET song_const << 1
		.ELSE
			song_const .SET $06
		.ENDIF
	.ENDIF
.ENDMACRO

song SONG_OFF
song SONG_OVERWORLD
song SONG_GANON
song SONG_ENDLEVEL
song SONG_ITEMTAKEN
song SONG_ENDING
song SONG_LASTLEVEL
song SONG_UNDERWORLD
song SONG_DEMO
song SONG_ZELDA

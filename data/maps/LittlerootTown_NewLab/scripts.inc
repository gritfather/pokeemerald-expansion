LittlerootTown_NewLab_MapScripts::
# 2 "data/maps/LittlerootTown_NewLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_NewLab_EventScript_BallDefault
	.byte 0


LittlerootTown_NewLab_EventScript_BallDefault::
# 6 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar STARTER_REGION, 0
	return


LittlerootTown_NewLab_EventScript_Birch::
# 10 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 11 "data/maps/LittlerootTown_NewLab/scripts.pory"
	faceplayer
# 12 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, LittlerootTown_NewLab_EventScript_Birch_4
LittlerootTown_NewLab_EventScript_Birch_3:
# 28 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Birch_Text_2
LittlerootTown_NewLab_EventScript_Birch_1:
# 30 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 31 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	end

LittlerootTown_NewLab_EventScript_Birch_2:
# 13 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Birch_Text_0, MSGBOX_YESNO
# 14 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Birch_9
# 24 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Birch_Text_1
	goto LittlerootTown_NewLab_EventScript_Birch_1

LittlerootTown_NewLab_EventScript_Birch_4:
# 12 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, LittlerootTown_NewLab_EventScript_Birch_6
	goto LittlerootTown_NewLab_EventScript_Birch_3

LittlerootTown_NewLab_EventScript_Birch_6:
# 12 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, LittlerootTown_NewLab_EventScript_Birch_2
	goto LittlerootTown_NewLab_EventScript_Birch_3

LittlerootTown_NewLab_EventScript_Birch_9:
# 15 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_ne LittlerootTown_NewLab_EventScript_Birch_13
# 19 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar STARTER_REGION, 0
LittlerootTown_NewLab_EventScript_Birch_12:
# 21 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Birch_Text_1
	goto LittlerootTown_NewLab_EventScript_Birch_1

LittlerootTown_NewLab_EventScript_Birch_13:
# 16 "data/maps/LittlerootTown_NewLab/scripts.pory"
	addvar STARTER_REGION, 1
	goto LittlerootTown_NewLab_EventScript_Birch_12


LittlerootTown_NewLab_EventScript_PokeballOne::
# 36 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 37 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, LittlerootTown_NewLab_EventScript_PokeballOne_4
LittlerootTown_NewLab_EventScript_PokeballOne_3:
# 49 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_PokeballOne_Text_0
LittlerootTown_NewLab_EventScript_PokeballOne_1:
# 51 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 52 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	end

LittlerootTown_NewLab_EventScript_PokeballOne_2:
# 38 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballOne_9
# 41 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballOne_10
# 44 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballOne_11
	goto LittlerootTown_NewLab_EventScript_PokeballOne_1

LittlerootTown_NewLab_EventScript_PokeballOne_4:
# 37 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, LittlerootTown_NewLab_EventScript_PokeballOne_6
	goto LittlerootTown_NewLab_EventScript_PokeballOne_3

LittlerootTown_NewLab_EventScript_PokeballOne_6:
# 37 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, LittlerootTown_NewLab_EventScript_PokeballOne_2
	goto LittlerootTown_NewLab_EventScript_PokeballOne_3

LittlerootTown_NewLab_EventScript_PokeballOne_9:
# 39 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_ROWLET
	goto LittlerootTown_NewLab_EventScript_PokeballOne_1

LittlerootTown_NewLab_EventScript_PokeballOne_10:
# 42 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_CHESPIN
	goto LittlerootTown_NewLab_EventScript_PokeballOne_1

LittlerootTown_NewLab_EventScript_PokeballOne_11:
# 45 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_BULBASAUR
	goto LittlerootTown_NewLab_EventScript_PokeballOne_1


LittlerootTown_NewLab_EventScript_PokeballTwo::
# 57 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 58 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, LittlerootTown_NewLab_EventScript_PokeballTwo_4
LittlerootTown_NewLab_EventScript_PokeballTwo_3:
# 70 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_PokeballOne_Text_0
LittlerootTown_NewLab_EventScript_PokeballTwo_1:
# 72 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 73 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	end

LittlerootTown_NewLab_EventScript_PokeballTwo_2:
# 59 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballTwo_9
# 62 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballTwo_10
# 65 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballTwo_11
	goto LittlerootTown_NewLab_EventScript_PokeballTwo_1

LittlerootTown_NewLab_EventScript_PokeballTwo_4:
# 58 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, LittlerootTown_NewLab_EventScript_PokeballTwo_6
	goto LittlerootTown_NewLab_EventScript_PokeballTwo_3

LittlerootTown_NewLab_EventScript_PokeballTwo_6:
# 58 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, LittlerootTown_NewLab_EventScript_PokeballTwo_2
	goto LittlerootTown_NewLab_EventScript_PokeballTwo_3

LittlerootTown_NewLab_EventScript_PokeballTwo_9:
# 60 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_LITTEN
	goto LittlerootTown_NewLab_EventScript_PokeballTwo_1

LittlerootTown_NewLab_EventScript_PokeballTwo_10:
# 63 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_FENNEKIN
	goto LittlerootTown_NewLab_EventScript_PokeballTwo_1

LittlerootTown_NewLab_EventScript_PokeballTwo_11:
# 66 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_CHARMANDER
	goto LittlerootTown_NewLab_EventScript_PokeballTwo_1


LittlerootTown_NewLab_EventScript_PokeballThree::
# 78 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 79 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, LittlerootTown_NewLab_EventScript_PokeballThree_4
LittlerootTown_NewLab_EventScript_PokeballThree_3:
# 91 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_PokeballOne_Text_0
LittlerootTown_NewLab_EventScript_PokeballThree_1:
# 93 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 94 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	end

LittlerootTown_NewLab_EventScript_PokeballThree_2:
# 80 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballThree_9
# 83 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballThree_10
# 86 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq LittlerootTown_NewLab_EventScript_PokeballThree_11
	goto LittlerootTown_NewLab_EventScript_PokeballThree_1

LittlerootTown_NewLab_EventScript_PokeballThree_4:
# 79 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, LittlerootTown_NewLab_EventScript_PokeballThree_6
	goto LittlerootTown_NewLab_EventScript_PokeballThree_3

LittlerootTown_NewLab_EventScript_PokeballThree_6:
# 79 "data/maps/LittlerootTown_NewLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, LittlerootTown_NewLab_EventScript_PokeballThree_2
	goto LittlerootTown_NewLab_EventScript_PokeballThree_3

LittlerootTown_NewLab_EventScript_PokeballThree_9:
# 81 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_POPPLIO
	goto LittlerootTown_NewLab_EventScript_PokeballThree_1

LittlerootTown_NewLab_EventScript_PokeballThree_10:
# 84 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_FROAKIE
	goto LittlerootTown_NewLab_EventScript_PokeballThree_1

LittlerootTown_NewLab_EventScript_PokeballThree_11:
# 87 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call LittlerootTown_NewLab_EventScript_SQUIRTLE
	goto LittlerootTown_NewLab_EventScript_PokeballThree_1


LittlerootTown_NewLab_EventScript_ROWLET::
# 99 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 100 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_0, MSGBOX_YESNO
# 101 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_ROWLET_1
# 127 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 128 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_ROWLET_1:
# 102 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_ROWLET, 10, isShiny = YES
# 103 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F8, 0
# 104 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 1
# 105 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_ROWLET_4
# 113 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_ROWLET_5
# 122 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 123 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_2
	return

LittlerootTown_NewLab_EventScript_ROWLET_4:
# 106 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 107 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_1
# 108 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 109 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 110 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 111 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_ROWLET_5:
# 114 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 115 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_1
# 116 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 117 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 118 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 119 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_CHESPIN::
# 134 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 135 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_CHESPIN_Text_0, MSGBOX_YESNO
# 136 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_CHESPIN_1
# 162 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 163 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_CHESPIN_1:
# 137 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_CHESPIN, 10, isShiny = YES
# 138 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F8, 0
# 139 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 1
# 140 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_CHESPIN_4
# 148 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_CHESPIN_5
# 157 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 158 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_2
	return

LittlerootTown_NewLab_EventScript_CHESPIN_4:
# 141 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 142 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_CHESPIN_Text_1
# 143 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 144 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 145 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 146 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_CHESPIN_5:
# 149 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 150 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_CHESPIN_Text_1
# 151 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 152 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 153 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 154 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_BULBASAUR::
# 169 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 170 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_BULBASAUR_Text_0, MSGBOX_YESNO
# 171 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_BULBASAUR_1
# 197 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 198 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_BULBASAUR_1:
# 172 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_BULBASAUR, 10, isShiny = YES
# 173 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F8, 0
# 174 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 1
# 175 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_BULBASAUR_4
# 183 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_BULBASAUR_5
# 192 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 193 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_2
	return

LittlerootTown_NewLab_EventScript_BULBASAUR_4:
# 176 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 177 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_BULBASAUR_Text_1
# 178 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 179 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 180 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 181 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_BULBASAUR_5:
# 184 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 185 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_BULBASAUR_Text_1
# 186 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 187 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 188 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 189 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_LITTEN::
# 204 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 205 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_LITTEN_Text_0, MSGBOX_YESNO
# 206 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_LITTEN_1
# 232 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 233 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_LITTEN_1:
# 207 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_LITTEN, 10, isShiny = YES
# 208 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F8, 1
# 209 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 1
# 210 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_LITTEN_4
# 218 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_LITTEN_5
# 227 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 228 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_2
	return

LittlerootTown_NewLab_EventScript_LITTEN_4:
# 211 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 212 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_LITTEN_Text_1
# 213 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 214 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 215 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 216 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_LITTEN_5:
# 219 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 220 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_LITTEN_Text_1
# 221 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 222 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 223 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 224 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_FENNEKIN::
# 239 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 240 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_FENNEKIN_Text_0, MSGBOX_YESNO
# 241 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_FENNEKIN_1
# 267 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 268 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_FENNEKIN_1:
# 242 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_FENNEKIN, 10, isShiny = YES
# 243 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F8, 1
# 244 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 1
# 245 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_FENNEKIN_4
# 253 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_FENNEKIN_5
# 262 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 263 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_2
	return

LittlerootTown_NewLab_EventScript_FENNEKIN_4:
# 246 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 247 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_FENNEKIN_Text_1
# 248 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 249 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 250 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 251 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_FENNEKIN_5:
# 254 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 255 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_FENNEKIN_Text_1
# 256 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 257 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 258 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 259 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_CHARMANDER::
# 274 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 275 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_CHARMANDER_Text_0, MSGBOX_YESNO
# 276 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_CHARMANDER_1
# 302 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 303 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_CHARMANDER_1:
# 277 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 10, isShiny = YES
# 278 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F8, 1
# 279 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 1
# 280 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_CHARMANDER_4
# 288 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_CHARMANDER_5
# 297 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 298 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_2
	return

LittlerootTown_NewLab_EventScript_CHARMANDER_4:
# 281 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 282 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_CHARMANDER_Text_1
# 283 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 284 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 285 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 286 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_CHARMANDER_5:
# 289 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 290 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_CHARMANDER_Text_1
# 291 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 2
# 292 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 293 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 294 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_POPPLIO::
# 309 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 310 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_POPPLIO_Text_0, MSGBOX_YESNO
# 311 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_POPPLIO_1
# 337 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 338 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_POPPLIO_1:
# 312 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_POPPLIO, 10, isShiny = YES
# 313 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F8, 2
# 314 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 1
# 315 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_POPPLIO_4
# 323 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_POPPLIO_5
# 332 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 333 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_2
	return

LittlerootTown_NewLab_EventScript_POPPLIO_4:
# 316 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 317 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_POPPLIO_Text_1
# 318 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 319 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 320 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 321 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_POPPLIO_5:
# 324 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 325 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_POPPLIO_Text_1
# 326 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 327 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 328 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 329 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_FROAKIE::
# 344 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 345 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_FROAKIE_Text_0, MSGBOX_YESNO
# 346 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_FROAKIE_1
# 372 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 373 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_FROAKIE_1:
# 347 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_FROAKIE, 10, isShiny = YES
# 348 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F8, 2
# 349 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 1
# 350 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_FROAKIE_4
# 358 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_FROAKIE_5
# 367 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 368 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_2
	return

LittlerootTown_NewLab_EventScript_FROAKIE_4:
# 351 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 352 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_FROAKIE_Text_1
# 353 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 354 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 355 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 356 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_FROAKIE_5:
# 359 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 360 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_FROAKIE_Text_1
# 361 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 362 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 363 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 364 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewLab_EventScript_SQUIRTLE::
# 379 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 380 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_SQUIRTLE_Text_0, MSGBOX_YESNO
# 381 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_SQUIRTLE_1
# 407 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 408 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	return

LittlerootTown_NewLab_EventScript_SQUIRTLE_1:
# 382 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 10, isShiny = YES
# 383 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F8, 2
# 384 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 1
# 385 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_SQUIRTLE_4
# 393 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_SQUIRTLE_5
# 402 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 403 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_ROWLET_Text_2
	return

LittlerootTown_NewLab_EventScript_SQUIRTLE_4:
# 386 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 387 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_SQUIRTLE_Text_1
# 388 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 389 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 390 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 391 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewLab_EventScript_SQUIRTLE_5:
# 394 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 395 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_SQUIRTLE_Text_1
# 396 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 3
# 397 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 398 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 399 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 415 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 416 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 417 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 418 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 419 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 425 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 426 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 427 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 430 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 428 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


LittlerootTown_NewLab_EventScript_Birch_Text_0:
# 13 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Hello, would you like to see more options?$"

LittlerootTown_NewLab_EventScript_Birch_Text_1:
# 21 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Choose your starter wisely.$"

LittlerootTown_NewLab_EventScript_Birch_Text_2:
# 28 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You chose... Wisely.$"

LittlerootTown_NewLab_EventScript_PokeballOne_Text_0:
# 49 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Don't take another!$"

LittlerootTown_NewLab_EventScript_ROWLET_Text_0:
# 100 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose ROWLET?$"

LittlerootTown_NewLab_EventScript_ROWLET_Text_1:
# 107 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received ROWLET!$"

LittlerootTown_NewLab_EventScript_ROWLET_Text_2:
# 123 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "No more room$"

LittlerootTown_NewLab_EventScript_CHESPIN_Text_0:
# 135 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose CHESPIN?$"

LittlerootTown_NewLab_EventScript_CHESPIN_Text_1:
# 142 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received CHESPIN!$"

LittlerootTown_NewLab_EventScript_BULBASAUR_Text_0:
# 170 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose BULBASAUR?$"

LittlerootTown_NewLab_EventScript_BULBASAUR_Text_1:
# 177 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received BULBASAUR!$"

LittlerootTown_NewLab_EventScript_LITTEN_Text_0:
# 205 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose LITTEN?$"

LittlerootTown_NewLab_EventScript_LITTEN_Text_1:
# 212 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received LITTEN!$"

LittlerootTown_NewLab_EventScript_FENNEKIN_Text_0:
# 240 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose FENNEKIN?$"

LittlerootTown_NewLab_EventScript_FENNEKIN_Text_1:
# 247 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received FENNEKIN!$"

LittlerootTown_NewLab_EventScript_CHARMANDER_Text_0:
# 275 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose CHARMANDER?$"

LittlerootTown_NewLab_EventScript_CHARMANDER_Text_1:
# 282 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received CHARMANDER!$"

LittlerootTown_NewLab_EventScript_POPPLIO_Text_0:
# 310 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose POPPLIO?$"

LittlerootTown_NewLab_EventScript_POPPLIO_Text_1:
# 317 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received POPPLIO!$"

LittlerootTown_NewLab_EventScript_FROAKIE_Text_0:
# 345 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose FROAKIE?$"

LittlerootTown_NewLab_EventScript_FROAKIE_Text_1:
# 352 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received FROAKIE!$"

LittlerootTown_NewLab_EventScript_SQUIRTLE_Text_0:
# 380 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

LittlerootTown_NewLab_EventScript_SQUIRTLE_Text_1:
# 387 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received Squirtle!$"

NicknamePartyMon_Text_0:
# 415 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 430 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Pokemon sent to PC$"

NewLab_NotChosen::
# 434 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You did not choose the Pokemon$"

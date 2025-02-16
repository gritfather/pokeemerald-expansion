LittlerootTown_NewLab_MapScripts::
	.byte 0


LittlerootTown_NewLab_EventScript_Pokeball1::
# 5 "data/maps/LittlerootTown_NewLab/scripts.pory"
	lockall
# 6 "data/maps/LittlerootTown_NewLab/scripts.pory"
	showmonpic SPECIES_PAWNIARD, 10, 3
# 7 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Pokeball1_Text_0, MSGBOX_YESNO
# 8 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewLab_EventScript_Pokeball1_2
# 30 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 31 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NewLab_NotChosen
LittlerootTown_NewLab_EventScript_Pokeball1_1:
# 33 "data/maps/LittlerootTown_NewLab/scripts.pory"
	waitmessage
# 34 "data/maps/LittlerootTown_NewLab/scripts.pory"
	releaseall
	end

LittlerootTown_NewLab_EventScript_Pokeball1_2:
# 9 "data/maps/LittlerootTown_NewLab/scripts.pory"
	givemon SPECIES_PAWNIARD, 5, isShiny = YES
# 10 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewLab_EventScript_Pokeball1_5
# 17 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewLab_EventScript_Pokeball1_6
# 25 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 26 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Pokeball1_Text_2
	goto LittlerootTown_NewLab_EventScript_Pokeball1_1

LittlerootTown_NewLab_EventScript_Pokeball1_5:
# 11 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 12 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Pokeball1_Text_1
# 13 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 14 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 15 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_NewLab_EventScript_Pokeball1_1

LittlerootTown_NewLab_EventScript_Pokeball1_6:
# 18 "data/maps/LittlerootTown_NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox LittlerootTown_NewLab_EventScript_Pokeball1_Text_1
# 20 "data/maps/LittlerootTown_NewLab/scripts.pory"
	removeobject 1
# 21 "data/maps/LittlerootTown_NewLab/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 22 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call NicknameBoxMon
	goto LittlerootTown_NewLab_EventScript_Pokeball1_1


NicknamePartyMon::
# 41 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 42 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 43 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 44 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 45 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 51 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 52 "data/maps/LittlerootTown_NewLab/scripts.pory"
	hidemonpic
# 53 "data/maps/LittlerootTown_NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 56 "data/maps/LittlerootTown_NewLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 54 "data/maps/LittlerootTown_NewLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


LittlerootTown_NewLab_EventScript_Pokeball1_Text_0:
# 7 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Do you want to choose Pawniard?$"

LittlerootTown_NewLab_EventScript_Pokeball1_Text_1:
# 12 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You received Pawniard!$"

LittlerootTown_NewLab_EventScript_Pokeball1_Text_2:
# 26 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "No more room$"

NicknamePartyMon_Text_0:
# 41 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 56 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "Pokemon sent to PC$"

NewLab_NotChosen::
# 60 "data/maps/LittlerootTown_NewLab/scripts.pory"
	.string "You did not choose the Pokemon$"

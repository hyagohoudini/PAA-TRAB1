entry:
	@ g++ $(FILE)/*_170105067_Hyago.cpp
	@ ./a.out < $(FILE)/entrada.txt

compile:
	@ g++ $(FILE)/*_170105067_Hyago.cpp

exec:
	@ g++ $(FILE)/*_170105067_Hyago.cpp
	@ $(FILE)/a.out
	

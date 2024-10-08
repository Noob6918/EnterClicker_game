echo "start."

echo "making EnterClicker directory"
command mkdir ~/EnterClicker 
echo "made directory"
echo "| git cloning https://github.com/Noob6918/EnterClicker_game in EnterClicker dir."
command git clone https://github.com/Noob6918/EnterClicker_game ~/EnterClicker && echo "succes"
echo "#####--"

echo "compiling main.c using gcc"
command gcc ~/EnterClicker/main.c -o ~/EnterClicker/EnterClicker && echo "succes"
echo "#######"

echo "\n \n"
echo "succes"

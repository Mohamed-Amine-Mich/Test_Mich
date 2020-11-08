# Test_Mich


---------------------------------------------------> For Linux <-----------------------------------------------

    Tools installation :

Step 1 : sudo apt-get install -y cmake

Step 2 : sudo apt-get install -y git

Step 3 : sudo apt-get install -y mingw-w64


    Compilation :

Step 1 : git clone https://github.com/Mohamed-Amine-Mich/Test_Mich.git

Step 2 : cd Test_Mich && git checkout develop (if not develop)

Step 3 : git submodule update --init --recursive

Step 4 : cd build

Step 5 : cmake ..

Step 6 : make install


    launch the soft :

Step 1 : cd build/bin

Step 2 : ./Project_Michelin_exe (lancer le binaire)

Step 3 : ./Project_Michelin_tu (lancer les tests unitaires)




---------------------------------------------------> For Windows <-----------------------------------------------

    Tools installation :

Step 1 : installer "CMake 3.19.0" and GIT (last version)

Step 2 : installer "Microsoft Visual Studio Community 2019"

    Compilation :

Step 1 : git clone https://github.com/Mohamed-Amine-Mich/Test_Mich.git

Step 2 : cd Test_Mich && git checkout develop (if not develop)

Step 3 : git submodule update --init --recursive

Step 4 : launch CMake-3.19 and then configure, after that : click on "Configure", "Generate" and "Open Project"

![configure_CMake](/ressources/screenShot_CMake_configure.jpg?raw=true "Title")



# Test_Mich

Introduction : 

Project_Mich_exe : Ce logiciel permet de chercher le chemin le plus rapide sur un graphe de noeud (on suivant l'arc le plus faible).
Il prend un fichier json en input, et en output on affiche le chemin le plus rapide sous forme de liste de node (p.j: /ressources/screenShot_result_linux|Windows.jpg).


Project_Mich_tu : Aussi, on a deux tests unitaires permettent de tester les algos.

Ci-dessous les étapes de configuration et installation.


--------------------------------------------------- For Linux -----------------------------------------------

    Tools installation :

Step 1 : sudo apt-get install -y cmake

Step 2 : sudo apt-get install -y git

Step 3 : sudo apt-get install -y mingw-w64


    Compilation :

Step 1 : git clone https://github.com/Mohamed-Amine-Mich/Test_Mich.git

Step 2 : cd Test_Mich && git checkout develop (if not develop)

Step 3 : git submodule update --init --recursive

Step 4 : cd build

Step 5 : cmake -DCMAKE_CONFIGURATION_TYPES=Debug ..  (you can choose Debug | Release)

Step 6 : make install


    launch the soft :

Step 1 : cd build/bin/Debug

Step 2 : ./Project_Mich_exe (lancer le binaire)

Step 3 : ./Project_Mich_tu (lancer les tests unitaires)




--------------------------------------------------- For Windows -----------------------------------------------

    Tools installation :

Step 1 : installer "CMake 3.19.0" and GIT (last version)

Step 2 : installer "Microsoft Visual Studio Community 2019"

    Compilation :

Step 1 : git clone https://github.com/Mohamed-Amine-Mich/Test_Mich.git

Step 2 : cd Test_Mich && git checkout develop (if not develop)

Step 3 : git submodule update --init --recursive

Step 4 : launch CMake-3.19 and then click "Configure" (as shown in the figure below)

![configure_CMake](/ressources/screenShot_CMake_configure.jpg?raw=true "Title")

![configure_CMake](/ressources/screenShot_CMake_configure_.jpg?raw=true "Title")

Step 5 : after that : click on "Configure", "Generate" and "Open Project"

Step 6 : build the solution (as shown in the figure below), and then build the INSTALL project in this solution to install exec in bin folder.

![build_solution](/ressources/screenShot_build_solution.jpg?raw=true "Title")


    Launch the soft :

Step 1 : cd Test_Mich\build\bin\Debug

Step 2 : Project_Mich_exe.exe (lancer le binaire)

Step 3 : Project_Mich_tu.exe (lancer les tests unitaires)



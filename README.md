# C++ & QT & Cmake playground

## Setup
### Windows ###
#### Installation
 - Install Cmake;
 - QT;
 - Visual Studio (Optional but preferable)
#### Setup
Open Cmake and click `Configure` button
	- Select preferable to you IDE
	- Select architecture
	- Click Ok (Don`t touch anything else)
Click `Generate` button
Click `Open in IDE`

## Troubleshooting ##
### Setup
 **Error:** variable Qt5_DIR are not found, or something like that
 **Solution:** Add it dirrectly in Cmake list of vars. It should be like that: `path-to-installed-qt/QT/<VERSION>/<YOUR_IDE_NAME>/lib/cmake/Qt5`.
 Or just locate where qt5 conf file is.

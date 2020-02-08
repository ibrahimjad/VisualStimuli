# Visual Stimuli

**Library for visual flickering stimuli to evoke SSVEP response**

## Prerequisites
* GLFW3 `sudo apt install libglfw3-dev`

## Installation
To install this repo, follow these steps:
```bash
git clone https://github.com/ibrahimjad/VisualStimuli.git
mkdir -p VisualStimuli/build
cd !$
```
Build using CMake
```bash
cmake ../ && make
```
Use the following to run the interface:
```bash
./interface 
```

Press the escape key to exit the interface.

The frequencies, the number of the frequencies as well as their location on the screen can be changed as shown in the example code [src/main.cpp](src/main.cpp)

Avaiable functions can be seen in [include/visualstimuli.h](include/visualstimuli.h)

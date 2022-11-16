# Raspburry Pi Pico W: Setup of C/C++ Development Tools on Windows 

## 1. Install Windows Subsystem for Linux (WSL)

```
wsl --install 
```

set username as admin and password 

start Windows Termimal 


## 2. Get the compilers etc

```
sudo apt update

sudo apt install gcc-arm-none-eabi libnewlib-arm-none-eabi libstdc++-arm-none-eabi-newlib build-essential libssl-dev git python3.9 vim cmake 
```

## 3. Get tcd he SDK  

```
mkdir pico

cd /mnt/c/home/pico

git clone -b master https://github.com/raspberrypi/pico-sdk.git

cd pico-sdk

git submodule update --init
```
cd ..
ls

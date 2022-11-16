# Raspburry Pi Pico W: Setup of C/C++ Development Tools on Windows 

## 1. Installing Windows Subsystem for Linux (WSL)

Open PowerShell or Windows Command Prompt in administrator mode, enter the following command, then restart your machine.

```
wsl --install 
```
The installation of WSL continues after the system restart. Once done, set username and password.  

start Windows Termimal 


## 2. Downloading and Installing all the developement tools 

```
sudo apt update

sudo apt install gcc-arm-none-eabi libnewlib-arm-none-eabi libstdc++-arm-none-eabi-newlib build-essential libssl-dev git python3.9 vim cmake 
```

## 3. Downloading the Pico W SDK

```
mkdir pico

cd /mnt/c/home/pico

git clone -b master https://github.com/raspberrypi/pico-sdk.git

cd pico-sdk

git submodule update --init
```
cd ..
 
# References 
1. For more information about WSL, see here https://learn.microsoft.com/en-us/windows/wsl/install
